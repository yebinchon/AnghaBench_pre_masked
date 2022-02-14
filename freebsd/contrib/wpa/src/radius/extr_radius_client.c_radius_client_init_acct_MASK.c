
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_client_data {scalar_t__ acct_serv_sock; scalar_t__ acct_serv_sock6; struct hostapd_radius_servers* conf; } ;
struct hostapd_radius_servers {int acct_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,struct radius_client_data*,void*) ;
 int VAR_5 ;
 int FUNC_1 (struct radius_client_data*,int ,int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (struct radius_client_data*) ;
 void* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(struct radius_client_data *VAR_7)
{
 struct hostapd_radius_servers *VAR_8 = VAR_7->conf;
 int VAR_9 = 0;

 FUNC_3(VAR_7);

 VAR_7->acct_serv_sock = FUNC_4(VAR_1, VAR_4, 0);
 if (VAR_7->acct_serv_sock < 0)
  FUNC_6(VAR_0, "RADIUS: socket[PF_INET,SOCK_DGRAM]: %s",
      FUNC_5(VAR_5));
 else {
  FUNC_2(VAR_7->acct_serv_sock);
  VAR_9++;
 }
 if (VAR_9 == 0)
  return -1;

 FUNC_1(VAR_7, VAR_8->acct_server, ((void*)0),
        VAR_7->acct_serv_sock, VAR_7->acct_serv_sock6,
        0);

 if (VAR_7->acct_serv_sock >= 0 &&
     FUNC_0(VAR_7->acct_serv_sock,
         VAR_6, VAR_7,
         (void *) VAR_3)) {
  FUNC_6(VAR_0, "RADIUS: Could not register read socket for accounting server");
  FUNC_3(VAR_7);
  return -1;
 }
 return 0;
}
