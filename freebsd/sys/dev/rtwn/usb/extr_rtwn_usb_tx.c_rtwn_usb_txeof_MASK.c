
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {scalar_t__ sc_ratectl; scalar_t__ sc_tx_n_active; int sc_tx_timer; scalar_t__ qfullmsk; } ;
struct rtwn_usb_softc {int uc_tx_pending; int uc_tx_active; int uc_tx_inactive; struct rtwn_softc uc_sc; } ;
struct rtwn_data {int * m; int * ni; } ;


 int FUNC_0 (struct rtwn_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct rtwn_data*,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct rtwn_usb_softc *VAR_2, struct rtwn_data *VAR_3, int VAR_4)
{
 struct rtwn_softc *VAR_5 = &VAR_2->uc_sc;

 FUNC_0(VAR_5);

 if (VAR_3->ni != ((void*)0))
  FUNC_3(VAR_3->ni, VAR_3->m, VAR_4);

 if (VAR_5->sc_ratectl != VAR_0)
  if (VAR_5->sc_tx_n_active > 0)
   VAR_5->sc_tx_n_active--;

 VAR_3->ni = ((void*)0);
 VAR_3->m = ((void*)0);

 FUNC_2(&VAR_2->uc_tx_inactive, VAR_3, VAR_1);
 VAR_5->qfullmsk = 0;

 if (FUNC_1(&VAR_2->uc_tx_active) && FUNC_1(&VAR_2->uc_tx_pending))
  VAR_5->sc_tx_timer = 0;
 else
  VAR_5->sc_tx_timer = 5;

}
