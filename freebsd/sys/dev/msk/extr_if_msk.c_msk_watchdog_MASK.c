
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_if_softc {scalar_t__ msk_watchdog_timer; int msk_flags; struct ifnet* msk_ifp; } ;
struct ifnet {int if_snd; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct msk_if_softc*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,char*) ;
 int FUNC_4 (struct msk_if_softc*) ;
 int FUNC_5 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_6(struct msk_if_softc *VAR_4)
{
 struct ifnet *VAR_5;

 FUNC_1(VAR_4);

 if (VAR_4->msk_watchdog_timer == 0 || --VAR_4->msk_watchdog_timer)
  return;
 VAR_5 = VAR_4->msk_ifp;
 if ((VAR_4->msk_flags & VAR_2) == 0) {
  if (VAR_3)
   FUNC_3(VAR_4->msk_ifp, "watchdog timeout "
      "(missed link)\n");
  FUNC_2(VAR_5, VAR_0, 1);
  VAR_5->if_drv_flags &= ~VAR_1;
  FUNC_4(VAR_4);
  return;
 }

 FUNC_3(VAR_5, "watchdog timeout\n");
 FUNC_2(VAR_5, VAR_0, 1);
 VAR_5->if_drv_flags &= ~VAR_1;
 FUNC_4(VAR_4);
 if (!FUNC_0(&VAR_5->if_snd))
  FUNC_5(VAR_5);
}
