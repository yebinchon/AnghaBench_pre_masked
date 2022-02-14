
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_softc {scalar_t__ ti_timer; int ti_flags; struct ifnet* ti_ifp; int ti_watchdog; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ti_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct ti_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,char*) ;
 int FUNC_4 (struct ti_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct ti_softc *VAR_5;
 struct ifnet *VAR_6;

 VAR_5 = VAR_4;
 FUNC_0(VAR_5);
 FUNC_1(&VAR_5->ti_watchdog, VAR_3, FUNC_5, VAR_5);
 if (VAR_5->ti_timer == 0 || --VAR_5->ti_timer > 0)
  return;






 if (VAR_5->ti_flags & VAR_2)
  return;

 VAR_6 = VAR_5->ti_ifp;
 FUNC_3(VAR_6, "watchdog timeout -- resetting\n");
 VAR_6->if_drv_flags &= ~VAR_1;
 FUNC_4(VAR_5);

 FUNC_2(VAR_6, VAR_0, 1);
}
