
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_ring {int ring_size; TYPE_1__* free_rx_ids; TYPE_1__* rx_buffer_info; int lro; } ;
struct ena_adapter {int rx_buf_tag; struct ena_ring* rx_ring; } ;
struct TYPE_2__ {int map; int * mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ena_adapter *VAR_2, unsigned int VAR_3)
{
 struct ena_ring *VAR_4 = &VAR_2->rx_ring[VAR_3];


 for (int VAR_5 = 0; VAR_5 < VAR_4->ring_size; VAR_5++) {
  FUNC_1(VAR_2->rx_buf_tag,
      VAR_4->rx_buffer_info[VAR_5].map, VAR_0);
  FUNC_4(VAR_4->rx_buffer_info[VAR_5].mbuf);
  VAR_4->rx_buffer_info[VAR_5].mbuf = ((void*)0);
  FUNC_2(VAR_2->rx_buf_tag,
      VAR_4->rx_buffer_info[VAR_5].map);
  FUNC_0(VAR_2->rx_buf_tag,
      VAR_4->rx_buffer_info[VAR_5].map);
 }


 FUNC_5(&VAR_4->lro);


 FUNC_3(VAR_4->rx_buffer_info, VAR_1);
 VAR_4->rx_buffer_info = ((void*)0);

 FUNC_3(VAR_4->free_rx_ids, VAR_1);
 VAR_4->free_rx_ids = ((void*)0);
}
