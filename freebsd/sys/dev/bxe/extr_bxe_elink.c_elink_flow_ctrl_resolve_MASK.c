
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_vars {scalar_t__ flow_ctrl; int phy_flags; } ;
struct elink_phy {scalar_t__ req_flow_ctrl; scalar_t__ req_line_speed; } ;
struct elink_params {scalar_t__ req_fc_auto_adv; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct elink_phy*,struct elink_params*) ;
 int FUNC_2 (struct elink_phy*,struct elink_params*,struct elink_vars*,int) ;

__attribute__((used)) static void FUNC_3(struct elink_phy *VAR_5,
        struct elink_params *VAR_6,
        struct elink_vars *VAR_7,
        uint32_t VAR_8)
{
 struct bxe_softc *VAR_9 = VAR_6->sc;
 VAR_7->flow_ctrl = VAR_1;


 if (VAR_5->req_flow_ctrl != VAR_0) {

  if (VAR_5->req_line_speed == VAR_3)
   FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);

  VAR_7->flow_ctrl = VAR_5->req_flow_ctrl;
 } else if (VAR_5->req_line_speed != VAR_3)
  VAR_7->flow_ctrl = VAR_6->req_fc_auto_adv;
 else if ((VAR_8 & VAR_2) &&
   (!(VAR_7->phy_flags & VAR_4))) {
  if (FUNC_1(VAR_5, VAR_6)) {
   VAR_7->flow_ctrl = VAR_6->req_fc_auto_adv;
   return;
  }
  FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
 }
 FUNC_0(VAR_9, "flow_ctrl 0x%x\n", VAR_7->flow_ctrl);
}
