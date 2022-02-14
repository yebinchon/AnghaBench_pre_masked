
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct upgt_softc {int sc_rx_inactive; scalar_t__ sc_rx_dma_buf; struct upgt_data* sc_rx_data; int sc_rx_active; } ;
struct upgt_data {int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct upgt_data*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct upgt_softc *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_3->sc_rx_active);
 FUNC_0(&VAR_3->sc_rx_inactive);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct upgt_data *VAR_5 = &VAR_3->sc_rx_data[VAR_4];
  VAR_5->buf = ((uint8_t *)VAR_3->sc_rx_dma_buf) + (VAR_4 * VAR_0);
  FUNC_1(&VAR_3->sc_rx_inactive, VAR_5, VAR_2);
 }
 return (0);
}
