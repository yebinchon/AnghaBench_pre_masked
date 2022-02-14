
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg_list {scalar_t__ msg_type; struct radius_msg_list* next; } ;
struct radius_client_data {int auth_serv_sock6; int auth_serv_sock; struct radius_msg_list* msgs; int ctx; struct hostapd_radius_servers* conf; } ;
struct hostapd_radius_servers {int num_auth_servers; struct hostapd_radius_server* auth_server; struct hostapd_radius_server* auth_servers; } ;
struct hostapd_radius_server {int timeouts; int port; int addr; } ;
typedef int abuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int *,int ,int ,char*,int ,int ) ;
 int FUNC_2 (struct radius_client_data*,struct hostapd_radius_server*,struct hostapd_radius_server*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct radius_client_data *VAR_3)
{
 struct hostapd_radius_servers *VAR_4 = VAR_3->conf;
 struct hostapd_radius_server *VAR_5, *VAR_6;
 struct radius_msg_list *VAR_7;
 char VAR_8[50];

 VAR_6 = VAR_4->auth_server;
 FUNC_1(VAR_3->ctx, ((void*)0), VAR_1,
         VAR_0,
         "No response from Authentication server %s:%d - failover",
         FUNC_0(&VAR_6->addr, VAR_8, sizeof(VAR_8)),
         VAR_6->port);

 for (VAR_7 = VAR_3->msgs; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_7->msg_type == VAR_2)
   VAR_6->timeouts++;
 }

 VAR_5 = VAR_6 + 1;
 if (VAR_5 > &(VAR_4->auth_servers[VAR_4->num_auth_servers - 1]))
  VAR_5 = VAR_4->auth_servers;
 VAR_4->auth_server = VAR_5;
 FUNC_2(VAR_3, VAR_5, VAR_6,
        VAR_3->auth_serv_sock,
        VAR_3->auth_serv_sock6, 1);
}
