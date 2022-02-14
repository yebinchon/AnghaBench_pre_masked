
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_reauth {struct eap_sim_reauth* next; int reauth_id; } ;
struct eap_sim_db_data {struct eap_sim_reauth* reauths; scalar_t__ sqlite_db; } ;


 struct eap_sim_reauth* FUNC_0 (struct eap_sim_db_data*,char const*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

struct eap_sim_reauth *
FUNC_2(struct eap_sim_db_data *VAR_0,
       const char *VAR_1)
{
 struct eap_sim_reauth *VAR_2;






 VAR_2 = VAR_0->reauths;
 while (VAR_2) {
  if (FUNC_1(VAR_2->reauth_id, VAR_1) == 0)
   break;
  VAR_2 = VAR_2->next;
 }

 return VAR_2;
}
