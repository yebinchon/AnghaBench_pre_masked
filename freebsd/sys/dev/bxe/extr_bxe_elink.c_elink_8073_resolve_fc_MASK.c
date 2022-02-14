
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {scalar_t__ flow_ctrl; } ;
struct elink_phy {scalar_t__ req_line_speed; scalar_t__ req_flow_ctrl; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_3 (struct elink_phy*,struct elink_params*,struct elink_vars*,int) ;

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_7,
      struct elink_params *VAR_8,
      struct elink_vars *VAR_9)
{
 struct bxe_softc *VAR_10 = VAR_8->sc;
 if (VAR_7->req_line_speed == VAR_1 ||
     VAR_7->req_line_speed == VAR_2) {
  VAR_9->flow_ctrl = VAR_7->req_flow_ctrl;
  return;
 }

 if (FUNC_2(VAR_7, VAR_8, VAR_9) &&
     (VAR_9->flow_ctrl == VAR_0)) {
  uint16_t VAR_11;
  uint16_t VAR_12;
  uint16_t VAR_13;
  FUNC_1(VAR_10, VAR_7,
    VAR_3,
    VAR_4, &VAR_12);

  FUNC_1(VAR_10, VAR_7,
    VAR_3,
    VAR_5, &VAR_13);
  VAR_11 = (VAR_12 &
    VAR_6) >> 5;
  VAR_11 |= (VAR_13 &
     VAR_6) >> 7;

  FUNC_3(VAR_7, VAR_8, VAR_9, VAR_11);
  FUNC_0(VAR_10, "Ext PHY CL37 pause result 0x%x\n",
      VAR_11);
 }
}
