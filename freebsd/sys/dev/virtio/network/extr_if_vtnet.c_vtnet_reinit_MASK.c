
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_flags; int vtnet_hwaddr; struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_capenable; int if_drv_flags; int if_hwassist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct vtnet_softc*) ;
 int FUNC_3 (struct vtnet_softc*) ;
 int FUNC_4 (struct vtnet_softc*) ;
 int FUNC_5 (struct vtnet_softc*) ;
 int FUNC_6 (struct vtnet_softc*) ;

__attribute__((used)) static int
FUNC_7(struct vtnet_softc *VAR_11)
{
 struct ifnet *VAR_12;
 int VAR_13;

 VAR_12 = VAR_11->vtnet_ifp;


 FUNC_1(FUNC_0(VAR_12), VAR_11->vtnet_hwaddr, VAR_2);
 FUNC_6(VAR_11);

 FUNC_5(VAR_11);

 VAR_12->if_hwassist = 0;
 if (VAR_12->if_capenable & VAR_5)
  VAR_12->if_hwassist |= VAR_8;
 if (VAR_12->if_capenable & VAR_6)
  VAR_12->if_hwassist |= VAR_9;
 if (VAR_12->if_capenable & VAR_3)
  VAR_12->if_hwassist |= VAR_1;
 if (VAR_12->if_capenable & VAR_4)
  VAR_12->if_hwassist |= VAR_0;

 if (VAR_11->vtnet_flags & VAR_10)
  FUNC_3(VAR_11);

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13)
  return (VAR_13);

 FUNC_2(VAR_11);
 VAR_12->if_drv_flags |= VAR_7;

 return (0);
}
