
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_pseudonym {char const* permanent; struct eap_sim_pseudonym* next; int pseudonym; } ;
struct eap_sim_db_data {struct eap_sim_pseudonym* pseudonyms; scalar_t__ sqlite_db; } ;


 char const* FUNC_0 (struct eap_sim_db_data*,char const*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

const char *
FUNC_2(struct eap_sim_db_data *VAR_0, const char *VAR_1)
{
 struct eap_sim_pseudonym *VAR_2;






 VAR_2 = VAR_0->pseudonyms;
 while (VAR_2) {
  if (FUNC_1(VAR_2->pseudonym, VAR_1) == 0)
   return VAR_2->permanent;
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
