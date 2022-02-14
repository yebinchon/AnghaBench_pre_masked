
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_pending {int dummy; } ;
struct eap_sim_db_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct eap_sim_db_data*,struct eap_sim_db_pending*) ;
 int FUNC_1 (int ,char*,struct eap_sim_db_pending*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, void *VAR_2)
{
 struct eap_sim_db_data *VAR_3 = VAR_1;
 struct eap_sim_db_pending *VAR_4 = VAR_2;

 FUNC_1(VAR_0, "EAP-SIM DB: Delete query timeout for %p", VAR_4);
 FUNC_0(VAR_3, VAR_4);
}
