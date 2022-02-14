
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct emac_softc {int emac_tick_ch; scalar_t__ emac_link; struct ifnet* emac_ifp; } ;


 int FUNC_0 (struct emac_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct emac_softc*,int ) ;
 int FUNC_2 (struct emac_softc*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct emac_softc *VAR_8)
{
 struct ifnet *VAR_9;
 uint32_t VAR_10;

 FUNC_0(VAR_8);

 VAR_9 = VAR_8->emac_ifp;
 VAR_9->if_drv_flags &= ~(VAR_7 | VAR_6);
 VAR_8->emac_link = 0;


 FUNC_2(VAR_8, VAR_4, 0);
 VAR_10 = FUNC_1(VAR_8, VAR_5);
 FUNC_2(VAR_8, VAR_5, VAR_10);


 VAR_10 = FUNC_1(VAR_8, VAR_0);
 VAR_10 &= ~(VAR_1 | VAR_3 | VAR_2);
 FUNC_2(VAR_8, VAR_0, VAR_10);

 FUNC_3(&VAR_8->emac_tick_ch);
}
