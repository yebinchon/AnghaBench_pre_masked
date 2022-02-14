
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_sim_data {int next_reauth_id; int next_pseudonym; } ;


 int FUNC_0 (struct eap_sim_data*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_sim_data *VAR_2 = VAR_1;
 FUNC_1(VAR_2->next_pseudonym);
 FUNC_1(VAR_2->next_reauth_id);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}
