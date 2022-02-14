
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_reauth {struct eap_sim_reauth* next; } ;
struct eap_sim_db_data {struct eap_sim_reauth* reauths; scalar_t__ sqlite_db; } ;


 int FUNC_0 (struct eap_sim_db_data*,struct eap_sim_reauth*) ;
 int FUNC_1 (struct eap_sim_reauth*) ;

void FUNC_2(struct eap_sim_db_data *VAR_0,
         struct eap_sim_reauth *VAR_1)
{
 struct eap_sim_reauth *VAR_2, *VAR_3 = ((void*)0);






 VAR_2 = VAR_0->reauths;
 while (VAR_2) {
  if (VAR_2 == VAR_1) {
   if (VAR_3)
    VAR_3->next = VAR_2->next;
   else
    VAR_0->reauths = VAR_2->next;
   FUNC_1(VAR_2);
   return;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }
}
