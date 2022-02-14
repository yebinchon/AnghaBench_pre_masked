
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_das_data {scalar_t__ sock; int shared_secret_len; int * shared_secret; int client_addr; int coa; int disconnect; int ctx; int require_message_authenticator; int require_event_timestamp; int time_window; } ;
struct radius_das_conf {scalar_t__ port; int shared_secret_len; int * shared_secret; int * client_addr; int coa; int disconnect; int ctx; int require_message_authenticator; int require_event_timestamp; int time_window; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,struct radius_das_data*,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *,int ) ;
 struct radius_das_data* FUNC_3 (int) ;
 int FUNC_4 (struct radius_das_data*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*) ;

struct radius_das_data *
FUNC_7(struct radius_das_conf *VAR_2)
{
 struct radius_das_data *VAR_3;

 if (VAR_2->port == 0 || VAR_2->shared_secret == ((void*)0) ||
     VAR_2->client_addr == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_3(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->time_window = VAR_2->time_window;
 VAR_3->require_event_timestamp = VAR_2->require_event_timestamp;
 VAR_3->require_message_authenticator =
  VAR_2->require_message_authenticator;
 VAR_3->ctx = VAR_2->ctx;
 VAR_3->disconnect = VAR_2->disconnect;
 VAR_3->coa = VAR_2->coa;

 FUNC_1(&VAR_3->client_addr, VAR_2->client_addr,
    sizeof(VAR_3->client_addr));

 VAR_3->shared_secret = FUNC_2(VAR_2->shared_secret,
           VAR_2->shared_secret_len);
 if (VAR_3->shared_secret == ((void*)0)) {
  FUNC_4(VAR_3);
  return ((void*)0);
 }
 VAR_3->shared_secret_len = VAR_2->shared_secret_len;

 VAR_3->sock = FUNC_5(VAR_2->port);
 if (VAR_3->sock < 0) {
  FUNC_6(VAR_0, "Failed to open UDP socket for RADIUS "
      "DAS");
  FUNC_4(VAR_3);
  return ((void*)0);
 }

 if (FUNC_0(VAR_3->sock, VAR_1, VAR_3, ((void*)0)))
 {
  FUNC_4(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
