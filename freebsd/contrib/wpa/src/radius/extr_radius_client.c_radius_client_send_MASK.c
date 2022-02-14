
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct radius_msg {int dummy; } ;
struct radius_client_data {scalar_t__ acct_sock; scalar_t__ auth_sock; int ctx; struct hostapd_radius_servers* conf; } ;
struct hostapd_radius_servers {scalar_t__ msg_dumps; TYPE_2__* auth_server; TYPE_1__* acct_server; } ;
struct TYPE_4__ {size_t shared_secret_len; int requests; int * shared_secret; } ;
struct TYPE_3__ {size_t shared_secret_len; int requests; int * shared_secret; } ;
typedef int RadiusType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int ,int ,char*,...) ;
 int FUNC_1 (struct radius_client_data*,int,int ) ;
 int FUNC_2 (struct radius_client_data*) ;
 int FUNC_3 (struct radius_client_data*) ;
 int FUNC_4 (struct radius_client_data*,struct radius_msg*,int ,int const*,size_t,int const*) ;
 int FUNC_5 (struct radius_msg*) ;
 int FUNC_6 (struct radius_msg*,int const*,size_t) ;
 int FUNC_7 (struct radius_msg*,int const*,size_t) ;
 struct wpabuf* FUNC_8 (struct radius_msg*) ;
 int FUNC_9 (int,int ,int ,int ) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;

int FUNC_12(struct radius_client_data *VAR_5,
         struct radius_msg *VAR_6, RadiusType VAR_7,
         const u8 *VAR_8)
{
 struct hostapd_radius_servers *VAR_9 = VAR_5->conf;
 const u8 *VAR_10;
 size_t VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;
 struct wpabuf *VAR_15;

 if (VAR_7 == VAR_3 || VAR_7 == VAR_4) {
  if (VAR_9->acct_server && VAR_5->acct_sock < 0)
   FUNC_2(VAR_5);

  if (VAR_9->acct_server == ((void*)0) || VAR_5->acct_sock < 0 ||
      VAR_9->acct_server->shared_secret == ((void*)0)) {
   FUNC_0(VAR_5->ctx, ((void*)0),
           VAR_2,
           VAR_1,
           "No accounting server configured");
   return -1;
  }
  VAR_10 = VAR_9->acct_server->shared_secret;
  VAR_11 = VAR_9->acct_server->shared_secret_len;
  FUNC_7(VAR_6, VAR_10, VAR_11);
  VAR_12 = "accounting";
  VAR_13 = VAR_5->acct_sock;
  VAR_9->acct_server->requests++;
 } else {
  if (VAR_9->auth_server && VAR_5->auth_sock < 0)
   FUNC_3(VAR_5);

  if (VAR_9->auth_server == ((void*)0) || VAR_5->auth_sock < 0 ||
      VAR_9->auth_server->shared_secret == ((void*)0)) {
   FUNC_0(VAR_5->ctx, ((void*)0),
           VAR_2,
           VAR_1,
           "No authentication server configured");
   return -1;
  }
  VAR_10 = VAR_9->auth_server->shared_secret;
  VAR_11 = VAR_9->auth_server->shared_secret_len;
  FUNC_6(VAR_6, VAR_10, VAR_11);
  VAR_12 = "authentication";
  VAR_13 = VAR_5->auth_sock;
  VAR_9->auth_server->requests++;
 }

 FUNC_0(VAR_5->ctx, ((void*)0), VAR_2,
         VAR_0, "Sending RADIUS message to %s "
         "server", VAR_12);
 if (VAR_9->msg_dumps)
  FUNC_5(VAR_6);

 VAR_15 = FUNC_8(VAR_6);
 VAR_14 = FUNC_9(VAR_13, FUNC_10(VAR_15), FUNC_11(VAR_15), 0);
 if (VAR_14 < 0)
  FUNC_1(VAR_5, VAR_13, VAR_7);

 FUNC_4(VAR_5, VAR_6, VAR_7, VAR_10,
          VAR_11, VAR_8);

 return 0;
}
