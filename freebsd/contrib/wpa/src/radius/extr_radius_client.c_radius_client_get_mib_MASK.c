
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_client_data {struct hostapd_radius_servers* conf; } ;
struct hostapd_radius_servers {int num_auth_servers; int num_acct_servers; struct hostapd_radius_server* acct_server; struct hostapd_radius_server* acct_servers; struct hostapd_radius_server* auth_server; struct hostapd_radius_server* auth_servers; } ;
struct hostapd_radius_server {int dummy; } ;


 scalar_t__ FUNC_0 (char*,size_t,struct hostapd_radius_server*,struct radius_client_data*) ;
 scalar_t__ FUNC_1 (char*,size_t,struct hostapd_radius_server*,struct radius_client_data*) ;

int FUNC_2(struct radius_client_data *VAR_0, char *VAR_1,
     size_t VAR_2)
{
 struct hostapd_radius_servers *VAR_3;
 int VAR_4;
 struct hostapd_radius_server *VAR_5;
 int VAR_6 = 0;

 if (!VAR_0)
  return 0;

 VAR_3 = VAR_0->conf;

 if (VAR_3->auth_servers) {
  for (VAR_4 = 0; VAR_4 < VAR_3->num_auth_servers; VAR_4++) {
   VAR_5 = &VAR_3->auth_servers[VAR_4];
   VAR_6 += FUNC_1(
    VAR_1 + VAR_6, VAR_2 - VAR_6, VAR_5,
    VAR_5 == VAR_3->auth_server ?
    VAR_0 : ((void*)0));
  }
 }

 if (VAR_3->acct_servers) {
  for (VAR_4 = 0; VAR_4 < VAR_3->num_acct_servers; VAR_4++) {
   VAR_5 = &VAR_3->acct_servers[VAR_4];
   VAR_6 += FUNC_0(
    VAR_1 + VAR_6, VAR_2 - VAR_6, VAR_5,
    VAR_5 == VAR_3->acct_server ?
    VAR_0 : ((void*)0));
  }
 }

 return VAR_6;
}
