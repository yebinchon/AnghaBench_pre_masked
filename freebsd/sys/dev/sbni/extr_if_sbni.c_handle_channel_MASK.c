
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sbni_softc {int state; scalar_t__ tx_frameno; int ifp; int timer_ticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sbni_softc*) ;
 int FUNC_2 (struct sbni_softc*,int ) ;
 int FUNC_3 (struct sbni_softc*,int ,int) ;
 int FUNC_4 (struct sbni_softc*) ;

__attribute__((used)) static void
FUNC_5(struct sbni_softc *VAR_7)
{
 int VAR_8;
 u_char VAR_9;

 FUNC_3(VAR_7, VAR_1, (FUNC_2(VAR_7, VAR_1) & ~VAR_2) | VAR_6);

 VAR_7->timer_ticks = VAR_0;
 for (;;) {
  VAR_9 = FUNC_2(VAR_7, VAR_1);
  if ((VAR_9 & (VAR_4 | VAR_5)) == 0)
   break;

  VAR_8 = !(VAR_7->state & VAR_3);

  if (VAR_9 & VAR_4)
   VAR_8 = FUNC_1(VAR_7);





  VAR_9 = FUNC_2(VAR_7, VAR_1);
  if ((VAR_9 & VAR_5) == 0 || (VAR_9 & VAR_4) != 0)
   FUNC_0(VAR_7->ifp, "internal error!\n");


  if (VAR_8 || VAR_7->tx_frameno != 0)
   FUNC_4(VAR_7);
  else {

   FUNC_3(VAR_7, VAR_1, FUNC_2(VAR_7, VAR_1) & ~VAR_6);
  }
 }

 FUNC_3(VAR_7, VAR_1, FUNC_2(VAR_7, VAR_1) | VAR_2);
}
