
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_client_data {int auth_serv_sock; int acct_serv_sock; int auth_serv_sock6; int acct_serv_sock6; int auth_sock; int acct_sock; struct hostapd_radius_servers* conf; void* ctx; } ;
struct hostapd_radius_servers {scalar_t__ retry_primary_interval; scalar_t__ acct_server; scalar_t__ auth_server; } ;


 int FUNC_0 (scalar_t__,int ,int ,struct radius_client_data*,int *) ;
 struct radius_client_data* FUNC_1 (int) ;
 int FUNC_2 (struct radius_client_data*) ;
 scalar_t__ FUNC_3 (struct radius_client_data*) ;
 scalar_t__ FUNC_4 (struct radius_client_data*) ;
 int VAR_0 ;

struct radius_client_data *
FUNC_5(void *VAR_1, struct hostapd_radius_servers *VAR_2)
{
 struct radius_client_data *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct radius_client_data));
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->ctx = VAR_1;
 VAR_3->conf = VAR_2;
 VAR_3->auth_serv_sock = VAR_3->acct_serv_sock =
  VAR_3->auth_serv_sock6 = VAR_3->acct_serv_sock6 =
  VAR_3->auth_sock = VAR_3->acct_sock = -1;

 if (VAR_2->auth_server && FUNC_4(VAR_3)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 if (VAR_2->acct_server && FUNC_3(VAR_3)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 if (VAR_2->retry_primary_interval)
  FUNC_0(VAR_2->retry_primary_interval, 0,
           VAR_0, VAR_3,
           ((void*)0));

 return VAR_3;
}
