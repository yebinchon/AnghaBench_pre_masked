
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int req_flow_ctrl; } ;
struct elink_params {int req_fc_auto_adv; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct elink_phy *VAR_4,
         struct elink_params *VAR_5, uint16_t *VAR_6)
{
 struct bxe_softc *VAR_7 = VAR_5->sc;
 *VAR_6 = VAR_0;




 switch (VAR_4->req_flow_ctrl) {
 case 132:
  switch (VAR_5->req_fc_auto_adv) {
  case 131:
  case 129:
   *VAR_6 |= VAR_2;
   break;
  case 128:
   *VAR_6 |=
    VAR_1;
   break;
  default:
   break;
  }
  break;
 case 128:
  *VAR_6 |= VAR_1;
  break;

 case 129:
 case 131:
  *VAR_6 |= VAR_2;
  break;

 case 130:
 default:
  *VAR_6 |= VAR_3;
  break;
 }
 FUNC_0(VAR_7, "ieee_fc = 0x%x\n", *VAR_6);
}
