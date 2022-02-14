
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct emac_softc {struct ifnet* emac_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct emac_softc*) ;
 int FUNC_1 (struct emac_softc*) ;
 int VAR_0 ;
 struct emac_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct emac_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct emac_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 VAR_3 = VAR_2->emac_ifp;
 if ((VAR_3->if_drv_flags & VAR_0) != 0)
  FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 return (0);
}
