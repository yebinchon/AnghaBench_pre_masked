
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_flags; struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (struct vtnet_softc*) ;
 int VAR_1 ;
 struct vtnet_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct vtnet_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct vtnet_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = VAR_3->vtnet_ifp;

 FUNC_0(VAR_3);
 if (VAR_4->if_flags & VAR_0)
  FUNC_3(VAR_3);
 VAR_3->vtnet_flags &= ~VAR_1;
 FUNC_1(VAR_3);

 return (0);
}
