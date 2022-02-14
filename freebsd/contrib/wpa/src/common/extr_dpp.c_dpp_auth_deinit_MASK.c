
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_authentication {int groups_override; int discovery_override; int config_obj_override; int tmp_own_bi; int c_sign_key; int net_access_key; int connector; int conf_req; int resp_msg; int req_msg; int peer_protocol_key; int own_protocol_key; int conf_sta; int conf_ap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dpp_authentication*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct dpp_authentication *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_3(VAR_0->conf_ap);
 FUNC_3(VAR_0->conf_sta);
 FUNC_0(VAR_0->own_protocol_key);
 FUNC_0(VAR_0->peer_protocol_key);
 FUNC_5(VAR_0->req_msg);
 FUNC_5(VAR_0->resp_msg);
 FUNC_5(VAR_0->conf_req);
 FUNC_4(VAR_0->connector);
 FUNC_5(VAR_0->net_access_key);
 FUNC_5(VAR_0->c_sign_key);
 FUNC_2(VAR_0->tmp_own_bi);





 FUNC_1(VAR_0, sizeof(*VAR_0));
}
