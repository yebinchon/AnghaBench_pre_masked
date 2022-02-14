
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ifnet {int if_drv_flags; } ;
struct hme_softc {scalar_t__ sc_wdog_timer; int sc_flags; int sc_dev; struct ifnet* sc_ifp; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hme_softc*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct hme_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct hme_softc*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct hme_softc *VAR_8)
{
 struct ifnet *VAR_9 = VAR_8->sc_ifp;

 FUNC_1(VAR_8, VAR_6);






 if (VAR_8->sc_wdog_timer == 0 || --VAR_8->sc_wdog_timer != 0)
  return (0);

 if ((VAR_8->sc_flags & VAR_1) != 0)
  FUNC_3(VAR_8->sc_dev, "device timeout\n");
 else if (VAR_7)
  FUNC_3(VAR_8->sc_dev, "device timeout (no link)\n");
 FUNC_6(VAR_9, VAR_3, 1);

 VAR_9->if_drv_flags &= ~VAR_4;
 FUNC_4(VAR_8);
 FUNC_5(VAR_9);
 return (VAR_0);
}
