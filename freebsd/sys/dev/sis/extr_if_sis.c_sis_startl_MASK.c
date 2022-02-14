
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_softc {int sis_flags; int sis_tx_cnt; int sis_watchdog_timer; int sis_tx_list_map; int sis_tx_list_tag; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct sis_softc* if_softc; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct sis_softc*) ;
 int FUNC_5 (struct sis_softc*,int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (struct sis_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_8)
{
 struct sis_softc *VAR_9;
 struct mbuf *VAR_10;
 int VAR_11;

 VAR_9 = VAR_8->if_softc;

 FUNC_4(VAR_9);

 if ((VAR_8->if_drv_flags & (VAR_3 | VAR_2)) !=
     VAR_3 || (VAR_9->sis_flags & VAR_6) == 0)
  return;

 for (VAR_11 = 0; !FUNC_2(&VAR_8->if_snd) &&
     VAR_9->sis_tx_cnt < VAR_7 - 4;) {
  FUNC_1(&VAR_8->if_snd, VAR_10);
  if (VAR_10 == ((void*)0))
   break;

  if (FUNC_7(VAR_9, &VAR_10) != 0) {
   if (VAR_10 == ((void*)0))
    break;
   FUNC_3(&VAR_8->if_snd, VAR_10);
   VAR_8->if_drv_flags |= VAR_2;
   break;
  }

  VAR_11++;





  FUNC_0(VAR_8, VAR_10);
 }

 if (VAR_11) {

  FUNC_6(VAR_9->sis_tx_list_tag, VAR_9->sis_tx_list_map,
      VAR_0 | VAR_1);
  FUNC_5(VAR_9, VAR_4, VAR_5);




  VAR_9->sis_watchdog_timer = 5;
 }
}
