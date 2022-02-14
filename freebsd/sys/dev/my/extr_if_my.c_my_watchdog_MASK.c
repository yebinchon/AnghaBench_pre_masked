
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_softc {scalar_t__ my_timer; struct ifnet* my_ifp; int my_watchdog; } ;
struct ifnet {int if_snd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct my_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,void (*) (void*),struct my_softc*) ;
 int VAR_3 ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct ifnet*,char*) ;
 int FUNC_5 (struct my_softc*) ;
 int FUNC_6 (struct my_softc*,int ) ;
 int FUNC_7 (struct my_softc*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct my_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_4)
{
 struct my_softc *VAR_5;
 struct ifnet *VAR_6;

 VAR_5 = VAR_4;
 FUNC_1(VAR_5);
 FUNC_2(&VAR_5->my_watchdog, VAR_3, FUNC_10, VAR_5);
 if (VAR_5->my_timer == 0 || --VAR_5->my_timer > 0)
  return;

 VAR_6 = VAR_5->my_ifp;
 FUNC_3(VAR_6, VAR_0, 1);
 FUNC_4(VAR_6, "watchdog timeout\n");
 if (!(FUNC_6(VAR_5, VAR_1) & VAR_2))
  FUNC_4(VAR_6, "no carrier - transceiver cable problem?\n");
 FUNC_9(VAR_5);
 FUNC_7(VAR_5);
 FUNC_5(VAR_5);
 if (!FUNC_0(&VAR_6->if_snd))
  FUNC_8(VAR_6);
}
