
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_data {int sock; int * local_sock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct eap_sim_db_data *VAR_0)
{
 if (VAR_0->sock >= 0) {
  FUNC_1(VAR_0->sock);
  FUNC_0(VAR_0->sock);
  VAR_0->sock = -1;
 }
 if (VAR_0->local_sock) {
  FUNC_3(VAR_0->local_sock);
  FUNC_2(VAR_0->local_sock);
  VAR_0->local_sock = ((void*)0);
 }
}
