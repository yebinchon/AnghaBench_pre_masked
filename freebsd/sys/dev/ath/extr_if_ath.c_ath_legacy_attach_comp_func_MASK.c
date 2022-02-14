
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int sc_txqsetup; int sc_txtask; TYPE_1__* sc_cabq; } ;
struct TYPE_2__ {int axq_qnum; } ;


 int FUNC_0 (int *,int ,int ,struct ath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1(struct ath_softc *VAR_3)
{






 switch (VAR_3->sc_txqsetup &~ (1<<VAR_3->sc_cabq->axq_qnum)) {
 case 0x01:
  FUNC_0(&VAR_3->sc_txtask, 0, VAR_1, VAR_3);
  break;
 case 0x0f:
  FUNC_0(&VAR_3->sc_txtask, 0, VAR_2, VAR_3);
  break;
 default:
  FUNC_0(&VAR_3->sc_txtask, 0, VAR_0, VAR_3);
  break;
 }
}
