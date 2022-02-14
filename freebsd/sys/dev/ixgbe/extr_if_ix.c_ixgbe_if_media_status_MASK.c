
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_mode; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct adapter {int phy_layer; int link_speed; int link_active; struct ixgbe_hw hw; } ;
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
 scalar_t__ FUNC_0 (int) ;
 int VAR_23 ;
 int FUNC_1 (char*) ;





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
 int VAR_37 ;
 int VAR_38 ;
 struct adapter* FUNC_2 (int ) ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_42, struct ifmediareq * VAR_43)
{
 struct adapter *VAR_44 = FUNC_2(VAR_42);
 struct ixgbe_hw *VAR_45 = &VAR_44->hw;
 int VAR_46;

 FUNC_1("ixgbe_if_media_status: begin");

 VAR_43->ifm_status = VAR_18;
 VAR_43->ifm_active = VAR_19;

 if (!VAR_44->link_active)
  return;

 VAR_43->ifm_status |= VAR_17;
 VAR_46 = VAR_44->phy_layer;

 if (VAR_46 & VAR_35 ||
     VAR_46 & VAR_26 ||
     VAR_46 & VAR_27 ||
     VAR_46 & VAR_28)
  switch (VAR_44->link_speed) {
  case 131:
   VAR_43->ifm_active |= VAR_12 | VAR_22;
   break;
  case 129:
   VAR_43->ifm_active |= VAR_4 | VAR_22;
   break;
  case 132:
   VAR_43->ifm_active |= VAR_5 | VAR_22;
   break;
  case 130:
   VAR_43->ifm_active |= VAR_14 | VAR_22;
   break;
  }
 if (VAR_46 & VAR_38 ||
     VAR_46 & VAR_37)
  switch (VAR_44->link_speed) {
  case 131:
   VAR_43->ifm_active |= VAR_13 | VAR_22;
   break;
  }
 if (VAR_46 & VAR_32)
  switch (VAR_44->link_speed) {
  case 131:
   VAR_43->ifm_active |= VAR_9 | VAR_22;
   break;
  case 129:
   VAR_43->ifm_active |= VAR_2 | VAR_22;
   break;
  }
 if (VAR_46 & VAR_33)
  switch (VAR_44->link_speed) {
  case 131:
   VAR_43->ifm_active |= VAR_10 | VAR_22;
   break;
  case 129:
   VAR_43->ifm_active |= VAR_2 | VAR_22;
   break;
  }
 if (VAR_46 & VAR_34 ||
     VAR_46 & VAR_25)
  switch (VAR_44->link_speed) {
  case 131:
   VAR_43->ifm_active |= VAR_11 | VAR_22;
   break;
  case 129:
   VAR_43->ifm_active |= VAR_3 | VAR_22;
   break;
  }
 if (VAR_46 & VAR_29)
  switch (VAR_44->link_speed) {
  case 131:
   VAR_43->ifm_active |= VAR_6 | VAR_22;
   break;
  }





 if (VAR_46 & VAR_30)
  switch (VAR_44->link_speed) {
  case 131:
   VAR_43->ifm_active |= VAR_11 | VAR_22;
   break;
  case 128:
   VAR_43->ifm_active |= VAR_16 | VAR_22;
   break;
  case 129:
   VAR_43->ifm_active |= VAR_0 | VAR_22;
   break;
  }
 else if (VAR_46 & VAR_31 ||
     VAR_46 & VAR_36 ||
     VAR_46 & VAR_24)
  switch (VAR_44->link_speed) {
  case 131:
   VAR_43->ifm_active |= VAR_6 | VAR_22;
   break;
  case 128:
   VAR_43->ifm_active |= VAR_16 | VAR_22;
   break;
  case 129:
   VAR_43->ifm_active |= VAR_0 | VAR_22;
   break;
  }
 if (FUNC_0(VAR_43->ifm_active) == 0)
  VAR_43->ifm_active |= VAR_23;


 if (VAR_45->fc.current_mode == VAR_40 ||
     VAR_45->fc.current_mode == VAR_39)
  VAR_43->ifm_active |= VAR_20;
 if (VAR_45->fc.current_mode == VAR_41 ||
     VAR_45->fc.current_mode == VAR_39)
  VAR_43->ifm_active |= VAR_21;
}
