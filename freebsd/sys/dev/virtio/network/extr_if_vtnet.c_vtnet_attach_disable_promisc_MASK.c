
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_flags; int vtnet_dev; struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (struct vtnet_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct vtnet_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(struct vtnet_softc *VAR_2)
{
 struct ifnet *VAR_3;

 VAR_3 = VAR_2->vtnet_ifp;

 FUNC_0(VAR_2);
 if ((VAR_2->vtnet_flags & VAR_1) == 0) {
  VAR_3->if_flags |= VAR_0;
 } else if (FUNC_3(VAR_2, 0) != 0) {
  VAR_3->if_flags |= VAR_0;
  FUNC_2(VAR_2->vtnet_dev,
      "cannot disable default promiscuous mode\n");
 }
 FUNC_1(VAR_2);
}
