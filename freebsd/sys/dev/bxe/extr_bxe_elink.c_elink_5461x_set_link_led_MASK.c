
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int*) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct elink_phy *VAR_3,
           struct elink_params *VAR_4, uint8_t VAR_5)
{
 struct bxe_softc *VAR_6 = VAR_4->sc;
 uint16_t VAR_7;

 FUNC_2(VAR_6, VAR_3,
  VAR_0,
  VAR_1);
 FUNC_1(VAR_6, VAR_3,
  VAR_0,
  &VAR_7);
 VAR_7 &= 0xff00;

 FUNC_0(VAR_6, "54618x set link led (mode=%x)\n", VAR_5);
 switch (VAR_5) {
 case 131:
 case 130:
  VAR_7 |= 0x00ee;
  break;
 case 128:
  VAR_7 |= 0x0001;
  break;
 case 129:
  VAR_7 |= 0x00ff;
  break;
 default:
  break;
 }
 FUNC_2(VAR_6, VAR_3,
  VAR_0,
  VAR_2 | VAR_7);
 return;
}
