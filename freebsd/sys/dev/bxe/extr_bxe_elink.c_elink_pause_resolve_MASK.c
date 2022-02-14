
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_vars {int link_status; void* flow_ctrl; } ;
struct elink_phy {int dummy; } ;
struct elink_params {void* req_fc_auto_adv; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct elink_phy *VAR_6,
    struct elink_params *VAR_7,
    struct elink_vars *VAR_8,
    uint32_t VAR_9)
{
 struct bxe_softc *VAR_10 = VAR_7->sc;

 switch (VAR_9) {
 case 0xb:
  FUNC_0(VAR_10, "Flow Control: TX only\n");
  VAR_8->flow_ctrl = VAR_3;
  break;

 case 0xe:
  FUNC_0(VAR_10, "Flow Control: RX only\n");
  VAR_8->flow_ctrl = VAR_2;
  break;

 case 0x5:
 case 0x7:
 case 0xd:
 case 0xf:





  if (VAR_7->req_fc_auto_adv == VAR_0) {
   FUNC_0(VAR_10, "Flow Control: RX & TX\n");
  VAR_8->flow_ctrl = VAR_0;
  } else {
   FUNC_0(VAR_10, "Flow Control: RX only\n");
   VAR_8->flow_ctrl = VAR_2;
  }
  break;
 default:
  FUNC_0(VAR_10, "Flow Control: None\n");
  VAR_8->flow_ctrl = VAR_1;
  break;
 }
 if (VAR_9 & (1<<0))
  VAR_8->link_status |= VAR_5;
 if (VAR_9 & (1<<1))
  VAR_8->link_status |= VAR_4;

}
