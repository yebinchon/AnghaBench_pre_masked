
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int sc_tx; int * sc_tx_pending; int * sc_tx_active; int sc_tx_inactive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct otus_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct otus_softc *VAR_2)
{
 int VAR_3;


 FUNC_0(&VAR_2->sc_tx_inactive);

 for (VAR_3 = 0; VAR_3 != VAR_0; VAR_3++) {
  FUNC_0(&VAR_2->sc_tx_active[VAR_3]);
  FUNC_0(&VAR_2->sc_tx_pending[VAR_3]);
 }

 FUNC_1(VAR_2, VAR_2->sc_tx, VAR_1);
}
