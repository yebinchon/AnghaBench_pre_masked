
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_sim_data {struct eap_sim_data* last_eap_identity; struct eap_sim_data* reauth_id; struct eap_sim_data* pseudonym; struct eap_sim_data* ver_list; } ;


 int FUNC_0 (struct eap_sim_data*,int ) ;
 int FUNC_1 (struct eap_sim_data*) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_sim_data *VAR_2 = VAR_1;
 if (VAR_2) {
  FUNC_1(VAR_2->ver_list);
  FUNC_1(VAR_2->pseudonym);
  FUNC_1(VAR_2->reauth_id);
  FUNC_1(VAR_2->last_eap_identity);
  FUNC_0(VAR_2, 0);
  FUNC_1(VAR_2);
 }
}
