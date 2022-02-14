
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_client_data {scalar_t__ auth_sock; scalar_t__ acct_sock; int acct_serv_sock6; int acct_serv_sock; int auth_serv_sock6; int auth_serv_sock; struct hostapd_radius_servers* conf; } ;
struct hostapd_radius_servers {scalar_t__ retry_primary_interval; struct hostapd_radius_server* acct_server; struct hostapd_radius_server* acct_servers; struct hostapd_radius_server* auth_server; struct hostapd_radius_server* auth_servers; } ;
struct hostapd_radius_server {int dummy; } ;


 int FUNC_0 (scalar_t__,int ,void (*) (void*,void*),struct radius_client_data*,int *) ;
 scalar_t__ FUNC_1 (struct radius_client_data*,struct hostapd_radius_server*,struct hostapd_radius_server*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1)
{
 struct radius_client_data *VAR_2 = VAR_0;
 struct hostapd_radius_servers *VAR_3 = VAR_2->conf;
 struct hostapd_radius_server *VAR_4;

 if (VAR_2->auth_sock >= 0 && VAR_3->auth_servers &&
     VAR_3->auth_server != VAR_3->auth_servers) {
  VAR_4 = VAR_3->auth_server;
  VAR_3->auth_server = VAR_3->auth_servers;
  if (FUNC_1(VAR_2, VAR_3->auth_server, VAR_4,
      VAR_2->auth_serv_sock,
      VAR_2->auth_serv_sock6, 1) < 0) {
   VAR_3->auth_server = VAR_4;
   FUNC_1(VAR_2, VAR_4, VAR_3->auth_server,
          VAR_2->auth_serv_sock,
          VAR_2->auth_serv_sock6, 1);
  }
 }

 if (VAR_2->acct_sock >= 0 && VAR_3->acct_servers &&
     VAR_3->acct_server != VAR_3->acct_servers) {
  VAR_4 = VAR_3->acct_server;
  VAR_3->acct_server = VAR_3->acct_servers;
  if (FUNC_1(VAR_2, VAR_3->acct_server, VAR_4,
      VAR_2->acct_serv_sock,
      VAR_2->acct_serv_sock6, 0) < 0) {
   VAR_3->acct_server = VAR_4;
   FUNC_1(VAR_2, VAR_4, VAR_3->acct_server,
          VAR_2->acct_serv_sock,
          VAR_2->acct_serv_sock6, 0);
  }
 }

 if (VAR_3->retry_primary_interval)
  FUNC_0(VAR_3->retry_primary_interval, 0,
           FUNC_2, VAR_2,
           ((void*)0));
}
