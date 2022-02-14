
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct elink_phy *VAR_5,
     struct elink_params *VAR_6,
     uint32_t VAR_7)
{
 struct bxe_softc *VAR_8 = VAR_6->sc;
 uint16_t VAR_9;
 switch (VAR_7) {
 case 128:


  FUNC_1(VAR_8, VAR_5,
     VAR_0,
     VAR_1);
  FUNC_0(VAR_8, VAR_5,
    VAR_0,
    &VAR_9);
  VAR_9 &= ~(0xf << 4);
  VAR_9 |= (0x6 << 4);
  FUNC_1(VAR_8, VAR_5,
     VAR_0,
     VAR_2 | VAR_9);

  FUNC_1(VAR_8, VAR_5,
     VAR_3,
     ~VAR_4);
  break;
 }
}
