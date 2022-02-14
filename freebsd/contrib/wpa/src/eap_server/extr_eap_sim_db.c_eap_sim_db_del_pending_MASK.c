
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_pending {struct eap_sim_db_pending* next; } ;
struct eap_sim_db_data {struct eap_sim_db_pending* pending; } ;


 int FUNC_0 (struct eap_sim_db_data*,struct eap_sim_db_pending*) ;

__attribute__((used)) static void FUNC_1(struct eap_sim_db_data *VAR_0,
       struct eap_sim_db_pending *VAR_1)
{
 struct eap_sim_db_pending **VAR_2 = &VAR_0->pending;

 while (*VAR_2 != ((void*)0)) {
  if (*VAR_2 == VAR_1) {
   *VAR_2 = VAR_1->next;
   FUNC_0(VAR_0, VAR_1);
   return;
  }
  VAR_2 = &(*VAR_2)->next;
 }
}
