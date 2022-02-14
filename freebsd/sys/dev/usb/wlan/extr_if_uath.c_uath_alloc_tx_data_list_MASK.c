
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int * sc_tx; int sc_tx_inactive; int sc_tx_pending; int sc_tx_active; int sc_tx_dma_buf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct uath_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct uath_softc*,int *,int,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct uath_softc *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_4,
     VAR_4->sc_tx, VAR_1, VAR_0,
     VAR_4->sc_tx_dma_buf);
 if (VAR_5 != 0)
  return (VAR_5);

 FUNC_0(&VAR_4->sc_tx_active);
 FUNC_0(&VAR_4->sc_tx_inactive);
 FUNC_0(&VAR_4->sc_tx_pending);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_1(&VAR_4->sc_tx_inactive, &VAR_4->sc_tx[VAR_6],
      VAR_2);
  FUNC_2(VAR_4, VAR_3);
 }

 return (0);
}
