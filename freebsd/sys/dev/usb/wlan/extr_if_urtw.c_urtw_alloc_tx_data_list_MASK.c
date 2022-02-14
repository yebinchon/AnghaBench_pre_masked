
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urtw_softc {int * sc_tx; int sc_tx_inactive; int sc_tx_pending; int sc_tx_active; int sc_tx_dma_buf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct urtw_softc*,int *,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct urtw_softc *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_3,
     VAR_3->sc_tx, VAR_0, VAR_1,
     VAR_3->sc_tx_dma_buf );
 if (VAR_4 != 0)
  return (VAR_4);

 FUNC_0(&VAR_3->sc_tx_active);
 FUNC_0(&VAR_3->sc_tx_inactive);
 FUNC_0(&VAR_3->sc_tx_pending);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_1(&VAR_3->sc_tx_inactive, &VAR_3->sc_tx[VAR_5],
      VAR_2);

 return (0);
}
