
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_sim_data {scalar_t__ use_result_ind; } ;


 int VAR_0 ;
 int FUNC_0 (struct eap_sm*,struct eap_sim_data*,int ) ;
 int FUNC_1 (struct eap_sim_data*,int) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_1, void *VAR_2)
{
 struct eap_sim_data *VAR_3 = VAR_2;
 FUNC_0(VAR_1, VAR_3, VAR_0);
 VAR_3->use_result_ind = 0;
 FUNC_1(VAR_3, 1);
}
