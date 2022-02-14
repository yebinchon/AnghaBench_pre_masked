
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg_list {scalar_t__ msg_type; struct radius_msg_list* next; } ;
struct radius_client_data {int acct_serv_sock6; int acct_serv_sock; struct radius_msg_list* msgs; int ctx; struct hostapd_radius_servers* conf; } ;
struct hostapd_radius_servers {int num_acct_servers; struct hostapd_radius_server* acct_server; struct hostapd_radius_server* acct_servers; } ;
struct hostapd_radius_server {int timeouts; int port; int addr; } ;
typedef int abuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int *,int ,int ,char*,int ,int ) ;
 int FUNC_2 (struct radius_client_data*,struct hostapd_radius_server*,struct hostapd_radius_server*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct radius_client_data *VAR_4)
{
 struct hostapd_radius_servers *VAR_5 = VAR_4->conf;
 struct hostapd_radius_server *VAR_6, *VAR_7;
 struct radius_msg_list *VAR_8;
 char VAR_9[50];

 VAR_7 = VAR_5->acct_server;
 FUNC_1(VAR_4->ctx, ((void*)0), VAR_1,
         VAR_0,
         "No response from Accounting server %s:%d - failover",
         FUNC_0(&VAR_7->addr, VAR_9, sizeof(VAR_9)),
         VAR_7->port);

 for (VAR_8 = VAR_4->msgs; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_8->msg_type == VAR_2 ||
      VAR_8->msg_type == VAR_3)
   VAR_7->timeouts++;
 }

 VAR_6 = VAR_7 + 1;
 if (VAR_6 > &VAR_5->acct_servers[VAR_5->num_acct_servers - 1])
  VAR_6 = VAR_5->acct_servers;
 VAR_5->acct_server = VAR_6;
 FUNC_2(VAR_4, VAR_6, VAR_7,
        VAR_4->acct_serv_sock,
        VAR_4->acct_serv_sock6, 0);
}
