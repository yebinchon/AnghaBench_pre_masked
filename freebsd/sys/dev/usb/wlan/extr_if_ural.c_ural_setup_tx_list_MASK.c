
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ural_tx_data {struct ural_softc* sc; } ;
struct ural_softc {scalar_t__ tx_nfree; int tx_free; struct ural_tx_data* tx_data; int tx_q; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ural_tx_data*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct ural_softc *VAR_2)
{
 struct ural_tx_data *VAR_3;
 int VAR_4;

 VAR_2->tx_nfree = 0;
 FUNC_0(&VAR_2->tx_q);
 FUNC_0(&VAR_2->tx_free);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->tx_data[VAR_4];

  VAR_3->sc = VAR_2;
  FUNC_1(&VAR_2->tx_free, VAR_3, VAR_1);
  VAR_2->tx_nfree++;
 }
}
