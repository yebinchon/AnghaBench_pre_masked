
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_softc {int sc_mh; int sc_snd; scalar_t__ sc_tx_timer; TYPE_1__* sc_txq; } ;
struct TYPE_2__ {int active; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mwl_softc*) ;
 scalar_t__ FUNC_4 (struct mwl_softc*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, int VAR_1)
{
 struct mwl_softc *VAR_2 = VAR_0;
 int VAR_3;




 VAR_3 = 0;
 if (!FUNC_0(&VAR_2->sc_txq[0].active))
  VAR_3 += FUNC_4(VAR_2, &VAR_2->sc_txq[0]);
 if (!FUNC_0(&VAR_2->sc_txq[1].active))
  VAR_3 += FUNC_4(VAR_2, &VAR_2->sc_txq[1]);
 if (!FUNC_0(&VAR_2->sc_txq[2].active))
  VAR_3 += FUNC_4(VAR_2, &VAR_2->sc_txq[2]);
 if (!FUNC_0(&VAR_2->sc_txq[3].active))
  VAR_3 += FUNC_4(VAR_2, &VAR_2->sc_txq[3]);

 if (VAR_3 != 0) {
  VAR_2->sc_tx_timer = 0;
  if (FUNC_1(&VAR_2->sc_snd) != ((void*)0)) {

   FUNC_2(VAR_2->sc_mh, 0);
   FUNC_3(VAR_2);
  }
 }
}
