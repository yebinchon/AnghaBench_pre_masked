
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ste_softc {scalar_t__ ste_timer; struct ifnet* ste_ifp; } ;
struct ifnet {int if_snd; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ste_softc*) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,char*) ;
 int FUNC_4 (struct ste_softc*) ;
 int FUNC_5 (struct ste_softc*,int) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ste_softc*) ;
 int FUNC_8 (struct ste_softc*) ;

__attribute__((used)) static void
FUNC_9(struct ste_softc *VAR_2)
{
 struct ifnet *VAR_3;

 VAR_3 = VAR_2->ste_ifp;
 FUNC_1(VAR_2);

 if (VAR_2->ste_timer == 0 || --VAR_2->ste_timer)
  return;

 FUNC_2(VAR_3, VAR_0, 1);
 FUNC_3(VAR_3, "watchdog timeout\n");

 FUNC_8(VAR_2);
 FUNC_7(VAR_2);
 FUNC_5(VAR_2, -1);
 VAR_3->if_drv_flags &= ~VAR_1;
 FUNC_4(VAR_2);

 if (!FUNC_0(&VAR_3->if_snd))
  FUNC_6(VAR_3);
}
