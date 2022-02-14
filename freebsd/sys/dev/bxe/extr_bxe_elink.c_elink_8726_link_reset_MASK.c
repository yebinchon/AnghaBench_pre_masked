
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct elink_phy *VAR_2,
      struct elink_params *VAR_3)
{
 struct bxe_softc *VAR_4 = VAR_3->sc;
 FUNC_0(VAR_4, "elink_8726_link_reset port %d\n", VAR_3->port);

 FUNC_1(VAR_4, VAR_2,
    VAR_0,
    VAR_1, 0x0001);
}
