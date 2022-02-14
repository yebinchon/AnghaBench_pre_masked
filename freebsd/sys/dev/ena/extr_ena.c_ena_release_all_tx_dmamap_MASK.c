
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_netmap_tx_info {int ** map_seg; } ;
struct ena_tx_buffer {int * map_seg; int * map_head; struct ena_netmap_tx_info nm_info; } ;
struct ena_ring {int ring_size; struct ena_tx_buffer* tx_buffer_info; struct ena_adapter* adapter; } ;
struct ena_adapter {TYPE_1__* ifp; int tx_buf_tag; } ;
typedef int bus_dma_tag_t ;
struct TYPE_2__ {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct ena_ring *VAR_2)
{
 struct ena_adapter *VAR_3 = VAR_2->adapter;
 struct ena_tx_buffer *VAR_4;
 bus_dma_tag_t VAR_5 = VAR_3->tx_buf_tag;;
 int VAR_6;





 for (VAR_6 = 0; VAR_6 < VAR_2->ring_size; ++VAR_6) {
  VAR_4 = &VAR_2->tx_buffer_info[VAR_6];
  if (VAR_4->map_head != ((void*)0)) {
   FUNC_0(VAR_5, VAR_4->map_head);
   VAR_4->map_head = ((void*)0);
  }

  if (VAR_4->map_seg != ((void*)0)) {
   FUNC_0(VAR_5, VAR_4->map_seg);
   VAR_4->map_seg = ((void*)0);
  }
 }
}
