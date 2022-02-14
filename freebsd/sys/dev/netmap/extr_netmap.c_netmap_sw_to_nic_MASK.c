
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct netmap_slot {int flags; int len; int buf_idx; } ;
struct netmap_ring {size_t head; size_t cur; struct netmap_slot* slot; } ;
struct netmap_kring {size_t nr_hwcur; size_t rhead; size_t nkr_num_slots; struct netmap_ring* ring; } ;
struct netmap_adapter {size_t num_rx_rings; size_t num_tx_rings; struct netmap_kring** tx_rings; struct netmap_kring** rx_rings; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t,size_t const) ;
 int FUNC_1 (struct netmap_ring*) ;

__attribute__((used)) static u_int
FUNC_2(struct netmap_adapter *VAR_3)
{
 struct netmap_kring *VAR_4 = VAR_3->rx_rings[VAR_3->num_rx_rings];
 struct netmap_slot *VAR_5 = VAR_4->ring->slot;
 u_int VAR_6, VAR_7 = VAR_4->nr_hwcur;
 u_int const VAR_8 = VAR_4->rhead;
 u_int const VAR_9 = VAR_4->nkr_num_slots - 1;
 u_int VAR_10 = 0;


 for (VAR_6 = 0; VAR_6 < VAR_3->num_tx_rings; VAR_6++) {
  struct netmap_kring *VAR_11 = VAR_3->tx_rings[VAR_6];
  struct netmap_ring *VAR_12 = VAR_11->ring;
  u_int const VAR_13 = VAR_11->nkr_num_slots - 1;


  for (; VAR_7 != VAR_8 && !FUNC_1(VAR_12);
       VAR_7 = FUNC_0(VAR_7, VAR_9) ) {
   struct netmap_slot *VAR_14, *VAR_15, VAR_16;
   u_int VAR_17 = VAR_12->head;

   VAR_14 = &VAR_5[VAR_7];
   if ((VAR_14->flags & VAR_1) == 0 && !VAR_2)
    continue;

   VAR_10++;

   VAR_15 = &VAR_12->slot[VAR_17];

   VAR_16 = *VAR_14;

   VAR_14->buf_idx = VAR_15->buf_idx;
   VAR_14->flags = VAR_0;

   VAR_15->buf_idx = VAR_16.buf_idx;
   VAR_15->len = VAR_16.len;
   VAR_15->flags = VAR_0;

   VAR_12->head = VAR_12->cur = FUNC_0(VAR_17, VAR_13);
  }

 }
 return VAR_10;
}
