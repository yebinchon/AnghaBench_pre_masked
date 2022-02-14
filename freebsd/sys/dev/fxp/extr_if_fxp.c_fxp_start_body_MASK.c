
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct fxp_softc {scalar_t__ tx_queued; int watchdog_timer; int cbl_map; int cbl_tag; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fxp_softc*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct fxp_softc*,struct mbuf**) ;
 int FUNC_3 (struct fxp_softc*,int ) ;
 int FUNC_4 (struct fxp_softc*) ;
 int FUNC_5 (struct fxp_softc*) ;
 int FUNC_6 (int ,struct mbuf*) ;
 struct mbuf* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct fxp_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,struct mbuf*) ;
 int FUNC_12 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_13(if_t VAR_8)
{
 struct fxp_softc *VAR_9 = FUNC_9(VAR_8);
 struct mbuf *VAR_10;
 int VAR_11;

 FUNC_0(VAR_9, VAR_7);

 if ((FUNC_8(VAR_8) & (VAR_6 | VAR_5)) !=
     VAR_6)
  return;

 if (VAR_9->tx_queued > VAR_3)
  FUNC_5(VAR_9);






 VAR_11 = 0;
 while (!FUNC_10(VAR_8) && VAR_9->tx_queued < VAR_2 - 1) {




  VAR_10 = FUNC_7(VAR_8);
  if (VAR_10 == ((void*)0))
   break;

  if (FUNC_2(VAR_9, &VAR_10)) {
   if (VAR_10 == ((void*)0))
    break;
   FUNC_11(VAR_8, VAR_10);
   FUNC_12(VAR_8, VAR_5, 0);
  }
  VAR_11++;



  FUNC_6(VAR_8, VAR_10);
 }





 if (VAR_11 > 0) {
  FUNC_1(VAR_9->cbl_tag, VAR_9->cbl_map,
      VAR_0 | VAR_1);
  FUNC_4(VAR_9);
  FUNC_3(VAR_9, VAR_4);




  VAR_9->watchdog_timer = 5;
 }
}
