
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phy_type; int an_info; } ;
struct TYPE_4__ {TYPE_1__ link_info; } ;
struct i40e_hw {TYPE_2__ phy; } ;
struct ixl_pf {int link_up; struct i40e_hw hw; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (char*) ;
 struct ixl_pf* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_37, struct ifmediareq *VAR_38)
{
 struct ixl_pf *VAR_39 = FUNC_1(VAR_37);
 struct i40e_hw *VAR_40 = &VAR_39->hw;

 FUNC_0("ixl_media_status: begin");

 VAR_38->ifm_status = VAR_30;
 VAR_38->ifm_active = VAR_31;

 if (!VAR_39->link_up) {
  return;
 }

 VAR_38->ifm_status |= VAR_29;

 VAR_38->ifm_active |= VAR_34;

 switch (VAR_40->phy.link_info.phy_type) {

  case 156:
   VAR_38->ifm_active |= VAR_7;
   break;

  case 158:
   VAR_38->ifm_active |= VAR_6;
   break;
  case 159:
   VAR_38->ifm_active |= VAR_5;
   break;
  case 160:
   VAR_38->ifm_active |= VAR_3;
   break;
  case 157:
   VAR_38->ifm_active |= VAR_6;
   break;

  case 149:
   VAR_38->ifm_active |= VAR_16;
   break;
  case 148:
   VAR_38->ifm_active |= VAR_14;
   break;
  case 150:
   VAR_38->ifm_active |= VAR_12;
   break;
  case 147:
   VAR_38->ifm_active |= VAR_15;
   break;
  case 131:
  case 130:
   VAR_38->ifm_active |= VAR_16;
   break;
  case 155:
   VAR_38->ifm_active |= VAR_8;
   break;

  case 142:
   VAR_38->ifm_active |= VAR_21;
   break;
  case 143:
   VAR_38->ifm_active |= VAR_20;
   break;
  case 140:
   VAR_38->ifm_active |= VAR_23;
   break;
  case 141:
   VAR_38->ifm_active |= VAR_22;
   break;
  case 144:
   VAR_38->ifm_active |= VAR_19;
   break;
  case 145:
   VAR_38->ifm_active |= VAR_18;
   break;

  case 138:
  case 137:
   VAR_38->ifm_active |= VAR_24;
   break;
  case 134:
   VAR_38->ifm_active |= VAR_27;
   break;
  case 135:
   VAR_38->ifm_active |= VAR_26;
   break;
  case 129:
   VAR_38->ifm_active |= VAR_35;
   break;
  case 161:
   VAR_38->ifm_active |= VAR_2;
   break;
  case 132:
   VAR_38->ifm_active |= VAR_4;
   break;

  case 153:
  case 154:
   VAR_38->ifm_active |= VAR_9;
   break;
  case 151:
   VAR_38->ifm_active |= VAR_11;
   break;
  case 152:
   VAR_38->ifm_active |= VAR_10;
   break;
  case 133:
   VAR_38->ifm_active |= VAR_13;
   break;

  case 146:
   VAR_38->ifm_active |= VAR_17;
   break;
  case 136:
   VAR_38->ifm_active |= VAR_25;
   break;
  case 128:
  case 139:
   VAR_38->ifm_active |= VAR_28;
   break;

  default:
   VAR_38->ifm_active |= VAR_36;
   break;
 }

 if (VAR_40->phy.link_info.an_info & VAR_1)
  VAR_38->ifm_active |= VAR_33;
 if (VAR_40->phy.link_info.an_info & VAR_0)
  VAR_38->ifm_active |= VAR_32;
}
