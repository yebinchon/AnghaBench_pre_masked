
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int pfccap; int pfcenable; } ;
struct TYPE_4__ {scalar_t__ maxtcs; int* prioritytable; int * tsatable; int * tcbwtable; } ;
struct i40e_dcbx_config {TYPE_3__* app; int numapps; TYPE_2__ pfc; TYPE_1__ etscfg; } ;
struct i40e_aqc_get_cee_dcb_cfg_v1_resp {scalar_t__ oper_num_tc; int* oper_prio_tc; int oper_pfc_en; int * oper_tc_bw; int oper_app_prio; int tlv_status; } ;
struct TYPE_6__ {int priority; int protocolid; void* selector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(
   struct i40e_aqc_get_cee_dcb_cfg_v1_resp *VAR_23,
   struct i40e_dcbx_config *VAR_24)
{
 u16 VAR_25, VAR_26 = FUNC_0(VAR_23->tlv_status);
 u16 VAR_27 = FUNC_0(VAR_23->oper_app_prio);
 u8 VAR_28, VAR_29, VAR_30;


 VAR_24->etscfg.maxtcs = VAR_23->oper_num_tc;




 for (VAR_28 = 0; VAR_28 < 4; VAR_28++) {
  VAR_29 = (u8)((VAR_23->oper_prio_tc[VAR_28] &
    VAR_14) >>
    VAR_15);
  VAR_24->etscfg.prioritytable[VAR_28*2] = VAR_29;
  VAR_29 = (u8)((VAR_23->oper_prio_tc[VAR_28] &
    VAR_16) >>
    VAR_17);
  VAR_24->etscfg.prioritytable[VAR_28*2 + 1] = VAR_29;
 }

 for (VAR_28 = 0; VAR_28 < VAR_21; VAR_28++)
  VAR_24->etscfg.tcbwtable[VAR_28] = VAR_23->oper_tc_bw[VAR_28];

 for (VAR_28 = 0; VAR_28 < VAR_21; VAR_28++) {
  if (VAR_24->etscfg.prioritytable[VAR_28] == VAR_18) {

   VAR_24->etscfg.prioritytable[VAR_28] =
      VAR_23->oper_num_tc - 1;
   VAR_24->etscfg.tsatable[VAR_28] = VAR_20;
  } else {
   VAR_24->etscfg.tsatable[VAR_28] = VAR_19;
  }
 }


 VAR_24->pfc.pfcenable = VAR_23->oper_pfc_en;
 VAR_24->pfc.pfccap = VAR_21;

 VAR_25 = (VAR_26 & VAR_11) >>
    VAR_12;
 VAR_30 = (VAR_25 & VAR_22) ? 1 : 0;

 if (!VAR_30) {

  VAR_24->numapps = VAR_13;


  VAR_24->app[0].priority =
   (VAR_27 & VAR_5) >>
    VAR_6;
  VAR_24->app[0].selector = VAR_3;
  VAR_24->app[0].protocolid = VAR_0;


  VAR_24->app[1].priority =
   (VAR_27 & VAR_9) >>
    VAR_10;
  VAR_24->app[1].selector = VAR_4;
  VAR_24->app[1].protocolid = VAR_2;


  VAR_24->app[2].priority =
   (VAR_27 & VAR_7) >>
    VAR_8;
  VAR_24->app[2].selector = VAR_3;
  VAR_24->app[2].protocolid = VAR_1;
 }
}
