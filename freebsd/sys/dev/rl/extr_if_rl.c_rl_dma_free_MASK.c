
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rl_rx_buf_paddr; int * rl_tx_tag; int ** rl_tx_dmamap; int * rl_rx_tag; int * rl_rx_buf; int * rl_rx_buf_ptr; int rl_rx_dmamap; } ;
struct rl_softc {int * rl_parent_tag; TYPE_1__ rl_cdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct rl_softc *VAR_1)
{
 int VAR_2;


 if (VAR_1->rl_cdata.rl_rx_tag != ((void*)0)) {
  if (VAR_1->rl_cdata.rl_rx_buf_paddr != 0)
   FUNC_2(VAR_1->rl_cdata.rl_rx_tag,
       VAR_1->rl_cdata.rl_rx_dmamap);
  if (VAR_1->rl_cdata.rl_rx_buf_ptr != ((void*)0))
   FUNC_3(VAR_1->rl_cdata.rl_rx_tag,
       VAR_1->rl_cdata.rl_rx_buf_ptr,
       VAR_1->rl_cdata.rl_rx_dmamap);
  VAR_1->rl_cdata.rl_rx_buf_ptr = ((void*)0);
  VAR_1->rl_cdata.rl_rx_buf = ((void*)0);
  VAR_1->rl_cdata.rl_rx_buf_paddr = 0;
  FUNC_0(VAR_1->rl_cdata.rl_rx_tag);
  VAR_1->rl_cdata.rl_tx_tag = ((void*)0);
 }


 if (VAR_1->rl_cdata.rl_tx_tag != ((void*)0)) {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   if (VAR_1->rl_cdata.rl_tx_dmamap[VAR_2] != ((void*)0)) {
    FUNC_1(
        VAR_1->rl_cdata.rl_tx_tag,
        VAR_1->rl_cdata.rl_tx_dmamap[VAR_2]);
    VAR_1->rl_cdata.rl_tx_dmamap[VAR_2] = ((void*)0);
   }
  }
  FUNC_0(VAR_1->rl_cdata.rl_tx_tag);
  VAR_1->rl_cdata.rl_tx_tag = ((void*)0);
 }

 if (VAR_1->rl_parent_tag != ((void*)0)) {
  FUNC_0(VAR_1->rl_parent_tag);
  VAR_1->rl_parent_tag = ((void*)0);
 }
}
