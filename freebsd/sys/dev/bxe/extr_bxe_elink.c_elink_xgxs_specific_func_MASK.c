
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_phy {int def_md_devad; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct elink_phy *VAR_2,
         struct elink_params *VAR_3,
         uint32_t VAR_4)
{
 struct bxe_softc *VAR_5 = VAR_3->sc;
 switch (VAR_4) {
 case 128:

  FUNC_0(VAR_5, VAR_1 + VAR_3->port*0x18, 0);
  FUNC_0(VAR_5, VAR_0 + VAR_3->port*0x18,
         VAR_2->def_md_devad);
  break;
 }
}
