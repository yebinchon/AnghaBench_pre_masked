
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_client_data {int acct_sock; int acct_serv_sock; int acct_serv_sock6; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct radius_client_data *VAR_0)
{
 VAR_0->acct_sock = -1;

 if (VAR_0->acct_serv_sock >= 0) {
  FUNC_1(VAR_0->acct_serv_sock);
  FUNC_0(VAR_0->acct_serv_sock);
  VAR_0->acct_serv_sock = -1;
 }







}
