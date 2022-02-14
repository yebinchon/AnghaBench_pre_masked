
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {int dummy; } ;
struct hostapd_data {int radius; TYPE_3__* conf; } ;
struct hostapd_acl_query_data {int radius_id; } ;
typedef int buf ;
struct TYPE_6__ {int radius_auth_req_attr; TYPE_2__* radius; } ;
struct TYPE_5__ {TYPE_1__* auth_server; } ;
struct TYPE_4__ {int shared_secret_len; int shared_secret; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct hostapd_data*,int ,int *,struct radius_msg*) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct radius_msg*,int ,int const*) ;
 int FUNC_6 (struct radius_msg*,int ,int *,int ) ;
 int FUNC_7 (struct radius_msg*,int *,int ,int ,int ) ;
 int FUNC_8 (struct radius_msg*) ;
 scalar_t__ FUNC_9 (struct radius_msg*) ;
 struct radius_msg* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static int FUNC_12(struct hostapd_data *VAR_9, const u8 *VAR_10,
        struct hostapd_acl_query_data *VAR_11)
{
 struct radius_msg *VAR_12;
 char VAR_13[128];

 VAR_11->radius_id = FUNC_4(VAR_9->radius);
 VAR_12 = FUNC_10(VAR_8, VAR_11->radius_id);
 if (VAR_12 == ((void*)0))
  return -1;

 if (FUNC_9(VAR_12) < 0) {
  FUNC_11(VAR_1, "Could not make Request Authenticator");
  goto fail;
 }

 FUNC_2(VAR_13, sizeof(VAR_13), VAR_3, FUNC_0(VAR_10));
 if (!FUNC_6(VAR_12, VAR_6, (u8 *) VAR_13,
     FUNC_3(VAR_13))) {
  FUNC_11(VAR_0, "Could not add User-Name");
  goto fail;
 }

 if (!FUNC_7(
      VAR_12, (u8 *) VAR_13, FUNC_3(VAR_13),
      VAR_9->conf->radius->auth_server->shared_secret,
      VAR_9->conf->radius->auth_server->shared_secret_len)) {
  FUNC_11(VAR_0, "Could not add User-Password");
  goto fail;
 }

 if (FUNC_1(VAR_9, VAR_9->conf->radius_auth_req_attr,
       ((void*)0), VAR_12) < 0)
  goto fail;

 FUNC_2(VAR_13, sizeof(VAR_13), VAR_2,
      FUNC_0(VAR_10));
 if (!FUNC_6(VAR_12, VAR_4,
     (u8 *) VAR_13, FUNC_3(VAR_13))) {
  FUNC_11(VAR_0, "Could not add Calling-Station-Id");
  goto fail;
 }

 FUNC_2(VAR_13, sizeof(VAR_13), "CONNECT 11Mbps 802.11b");
 if (!FUNC_6(VAR_12, VAR_5,
     (u8 *) VAR_13, FUNC_3(VAR_13))) {
  FUNC_11(VAR_0, "Could not add Connect-Info");
  goto fail;
 }

 if (FUNC_5(VAR_9->radius, VAR_12, VAR_7, VAR_10) < 0)
  goto fail;
 return 0;

 fail:
 FUNC_8(VAR_12);
 return -1;
}
