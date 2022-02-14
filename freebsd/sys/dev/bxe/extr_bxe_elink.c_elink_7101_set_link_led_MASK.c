
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct elink_phy *VAR_2,
        struct elink_params *VAR_3, uint8_t VAR_4)
{
 uint16_t VAR_5 = 0;
 struct bxe_softc *VAR_6 = VAR_3->sc;
 switch (VAR_4) {
 case 131:
 case 130:
  VAR_5 = 2;
  break;
 case 129:
  VAR_5 = 1;
  break;
 case 128:
  VAR_5 = 0;
  break;
 }
 FUNC_0(VAR_6, VAR_2,
    VAR_0,
    VAR_1,
    VAR_5);
}
