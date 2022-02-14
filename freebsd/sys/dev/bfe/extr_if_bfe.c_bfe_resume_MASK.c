
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; int if_drv_flags; int if_snd; } ;
struct bfe_softc {struct ifnet* bfe_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct bfe_softc*) ;
 int FUNC_1 (struct bfe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bfe_softc*) ;
 int FUNC_4 (struct bfe_softc*) ;
 int FUNC_5 (struct ifnet*) ;
 struct bfe_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct bfe_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_6(VAR_2);
 VAR_4 = VAR_3->bfe_ifp;
 FUNC_0(VAR_3);
 FUNC_3(VAR_3);
 if (VAR_4->if_flags & VAR_1) {
  FUNC_4(VAR_3);
  if (VAR_4->if_drv_flags & VAR_0 &&
      !FUNC_2(&VAR_4->if_snd))
   FUNC_5(VAR_4);
 }
 FUNC_1(VAR_3);

 return (0);
}
