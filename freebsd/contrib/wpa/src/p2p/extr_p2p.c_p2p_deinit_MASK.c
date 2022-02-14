
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct p2p_data* range; } ;
struct p2p_data {TYPE_2__ no_go_freq; int sd_resp; struct p2p_data* groups; TYPE_1__* cfg; int wfd_r2_dev_info; int wfd_coupled_sink_info; int wfd_assoc_bssid; int wfd_dev_info; int wfd_ie_go_neg; int wfd_ie_prov_disc_resp; int wfd_ie_prov_disc_req; int wfd_ie_invitation; int wfd_ie_assoc_req; int wfd_ie_probe_resp; int wfd_ie_probe_req; int wfd_ie_beacon; } ;
struct TYPE_3__ {struct p2p_data* pref_chan; struct p2p_data* serial_number; struct p2p_data* model_number; struct p2p_data* model_name; struct p2p_data* manufacturer; struct p2p_data* dev_name; } ;


 int FUNC_0 (int ,struct p2p_data*,int *) ;
 int FUNC_1 (struct p2p_data*) ;
 int FUNC_2 (struct p2p_data*) ;
 int FUNC_3 (struct p2p_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct p2p_data*) ;
 int VAR_2 ;
 int FUNC_5 (struct p2p_data*) ;
 int FUNC_6 (struct p2p_data*) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct p2p_data *VAR_3)
{
 FUNC_0(VAR_2, VAR_3, ((void*)0));
 FUNC_0(VAR_0, VAR_3, ((void*)0));
 FUNC_0(VAR_1, VAR_3, ((void*)0));
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 FUNC_1(VAR_3->cfg->dev_name);
 FUNC_1(VAR_3->cfg->manufacturer);
 FUNC_1(VAR_3->cfg->model_name);
 FUNC_1(VAR_3->cfg->model_number);
 FUNC_1(VAR_3->cfg->serial_number);
 FUNC_1(VAR_3->cfg->pref_chan);
 FUNC_1(VAR_3->groups);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3->sd_resp);
 FUNC_4(VAR_3);
 FUNC_1(VAR_3->no_go_freq.range);
 FUNC_5(VAR_3);

 FUNC_1(VAR_3);
}
