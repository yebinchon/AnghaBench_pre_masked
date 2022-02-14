
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct age_softc* if_softc; } ;
struct age_softc {int age_flags; int age_watchdog_timer; } ;


 int FUNC_0 (struct age_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct age_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct ifnet*,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mbuf*) ;
 scalar_t__ FUNC_6 (struct age_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_7(struct ifnet *VAR_4)
{
        struct age_softc *VAR_5;
        struct mbuf *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->if_softc;

 FUNC_1(VAR_5);

 if ((VAR_4->if_drv_flags & (VAR_3 | VAR_2)) !=
     VAR_3 || (VAR_5->age_flags & VAR_0) == 0)
  return;

 for (VAR_7 = 0; !FUNC_4(&VAR_4->if_snd); ) {
  FUNC_3(&VAR_4->if_snd, VAR_6);
  if (VAR_6 == ((void*)0))
   break;





  if (FUNC_6(VAR_5, &VAR_6)) {
   if (VAR_6 == ((void*)0))
    break;
   FUNC_5(&VAR_4->if_snd, VAR_6);
   VAR_4->if_drv_flags |= VAR_2;
   break;
  }

  VAR_7++;




  FUNC_2(VAR_4, VAR_6);
 }

 if (VAR_7 > 0) {

  FUNC_0(VAR_5);

  VAR_5->age_watchdog_timer = VAR_1;
 }
}
