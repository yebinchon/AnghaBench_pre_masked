
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_phy {int type; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ) ;



 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ) ;
 int FUNC_2 (struct elink_params*,int ) ;

__attribute__((used)) static void FUNC_3(struct elink_params *VAR_0,
       struct elink_phy *VAR_1,
       uint8_t VAR_2)
{
 struct bxe_softc *VAR_3 = VAR_0->sc;
 FUNC_0(VAR_3, "Setting SFP+ power to %x\n", VAR_2);

 switch (VAR_1->type) {
 case 129:
 case 130:
  FUNC_1(VAR_0->sc, VAR_1, VAR_2);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_2);
  break;
 default:
  break;
 }
}
