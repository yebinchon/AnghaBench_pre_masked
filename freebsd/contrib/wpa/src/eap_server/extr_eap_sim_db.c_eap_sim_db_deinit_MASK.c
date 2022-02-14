
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_reauth {struct eap_sim_reauth* next; } ;
struct eap_sim_pseudonym {struct eap_sim_pseudonym* next; } ;
struct eap_sim_db_pending {struct eap_sim_db_pending* next; } ;
struct eap_sim_db_data {struct eap_sim_db_pending* pending; struct eap_sim_reauth* reauths; struct eap_sim_pseudonym* pseudonyms; struct eap_sim_db_data* fname; int * sqlite_db; } ;


 int FUNC_0 (struct eap_sim_db_data*) ;
 int FUNC_1 (struct eap_sim_db_data*,struct eap_sim_db_pending*) ;
 int FUNC_2 (struct eap_sim_pseudonym*) ;
 int FUNC_3 (struct eap_sim_reauth*) ;
 int FUNC_4 (struct eap_sim_db_data*) ;
 int FUNC_5 (int *) ;

void FUNC_6(void *VAR_0)
{
 struct eap_sim_db_data *VAR_1 = VAR_0;
 struct eap_sim_pseudonym *VAR_2, *VAR_3;
 struct eap_sim_reauth *VAR_4, *VAR_5;
 struct eap_sim_db_pending *VAR_6, *VAR_7;
 FUNC_0(VAR_1);
 FUNC_4(VAR_1->fname);

 VAR_2 = VAR_1->pseudonyms;
 while (VAR_2) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_2(VAR_3);
 }

 VAR_4 = VAR_1->reauths;
 while (VAR_4) {
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
  FUNC_3(VAR_5);
 }

 VAR_6 = VAR_1->pending;
 while (VAR_6) {
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->next;
  FUNC_1(VAR_1, VAR_7);
 }

 FUNC_4(VAR_1);
}
