
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct upgt_softc {int sc_tx_inactive; scalar_t__ sc_tx_dma_buf; struct upgt_data* sc_tx_data; int sc_tx_pending; int sc_tx_active; } ;
struct upgt_data {int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct upgt_data*,int ) ;
 int FUNC_2 (struct upgt_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct upgt_softc *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_4->sc_tx_active);
 FUNC_0(&VAR_4->sc_tx_inactive);
 FUNC_0(&VAR_4->sc_tx_pending);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct upgt_data *VAR_6 = &VAR_4->sc_tx_data[VAR_5];
  VAR_6->buf = ((uint8_t *)VAR_4->sc_tx_dma_buf) + (VAR_5 * VAR_0);
  FUNC_1(&VAR_4->sc_tx_inactive, VAR_6, VAR_2);
  FUNC_2(VAR_4, VAR_3);
 }

 return (0);
}
