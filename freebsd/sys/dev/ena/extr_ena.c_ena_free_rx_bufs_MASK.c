
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_rx_buffer {scalar_t__ netmap_buf_idx; int * mbuf; } ;
struct ena_ring {unsigned int ring_size; struct ena_rx_buffer* rx_buffer_info; } ;
struct ena_adapter {TYPE_1__* ifp; struct ena_ring* rx_ring; } ;
struct TYPE_2__ {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ena_adapter*,struct ena_ring*,struct ena_rx_buffer*) ;
 int FUNC_1 (struct ena_adapter*,struct ena_ring*,struct ena_rx_buffer*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct ena_adapter *VAR_2, unsigned int VAR_3)
{
 struct ena_ring *VAR_4 = &VAR_2->rx_ring[VAR_3];
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->ring_size; VAR_5++) {
  struct ena_rx_buffer *VAR_6 = &VAR_4->rx_buffer_info[VAR_5];

  if (VAR_6->mbuf != ((void*)0))
   FUNC_0(VAR_2, VAR_4, VAR_6);
 }
}
