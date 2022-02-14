
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_pending {int cb_session_ctx; int state; } ;
struct eap_sim_db_data {int ctx; int (* get_complete_cb ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,struct eap_sim_db_data*,struct eap_sim_db_pending*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,struct eap_sim_db_pending*) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, void *VAR_4)
{
 struct eap_sim_db_data *VAR_5 = VAR_3;
 struct eap_sim_db_pending *VAR_6 = VAR_4;





 FUNC_2(VAR_1, "EAP-SIM DB: Query timeout for %p", VAR_6);
 VAR_6->state = VAR_0;
 VAR_5->get_complete_cb(VAR_5->ctx, VAR_6->cb_session_ctx);
 FUNC_0(1, 0, VAR_2, VAR_5, VAR_6);
}
