
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sbni_softc {int state; scalar_t__ outpos; scalar_t__ pktlen; int maxframe; scalar_t__ framelen; scalar_t__ tx_frameno; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct sbni_softc*) ;
 int FUNC_2 (struct sbni_softc*) ;

__attribute__((used)) static void
FUNC_3(struct sbni_softc *VAR_3, u_int VAR_4)
{
 if (VAR_4 == VAR_2) {
  VAR_3->state &= ~VAR_0;

  if (VAR_3->state & VAR_1) {
   VAR_3->outpos += VAR_3->framelen;

   if (--VAR_3->tx_frameno) {
    VAR_3->framelen = FUNC_0(
        VAR_3->maxframe, VAR_3->pktlen - VAR_3->outpos);
   } else {
    FUNC_2(VAR_3);
    FUNC_1(VAR_3);
   }
  }
 }

 VAR_3->state &= ~VAR_1;
}
