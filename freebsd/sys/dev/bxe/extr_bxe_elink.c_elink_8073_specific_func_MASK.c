
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct elink_phy *VAR_3,
         struct elink_params *VAR_4,
         uint32_t VAR_5)
{
 struct bxe_softc *VAR_6 = VAR_4->sc;
 switch (VAR_5) {
 case 128:

  FUNC_0(VAR_6, VAR_3,
     VAR_0, VAR_2, (1<<2));
  FUNC_0(VAR_6, VAR_3,
     VAR_0, VAR_1, 0x0004);
  break;
 }
}
