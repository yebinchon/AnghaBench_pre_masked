
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,struct elink_phy*) ;
 int FUNC_1 (struct bxe_softc*,int ,int) ;
 int FUNC_2 (struct elink_phy*) ;
 int FUNC_3 (struct elink_phy*,struct bxe_softc*,int) ;

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_2,
          struct elink_params *VAR_3,
          uint32_t VAR_4)
{
 struct bxe_softc *VAR_5 = VAR_3->sc;
 switch (VAR_4) {
 case 128:
  if (!FUNC_2(VAR_2)) {

   FUNC_3(VAR_2, VAR_5, VAR_3->port);
  }




  FUNC_1(VAR_5, VAR_1 + VAR_3->port*4,
         1 << VAR_0);

  FUNC_0(VAR_5, VAR_2);
  break;
 }
}
