
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_desc {int dummy; } ;
struct xgbe_ring_data {int rdata_paddr; struct xgbe_ring_desc* rdesc; } ;
struct xgbe_ring {int rdesc_paddr; unsigned int rdesc_count; scalar_t__ dirty; scalar_t__ cur; struct xgbe_ring_desc* rdesc; } ;
struct xgbe_hw_if {int (* rx_desc_init ) (struct xgbe_channel*) ;} ;
struct xgbe_prv_data {unsigned int channel_count; struct xgbe_channel* channel; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {struct xgbe_ring* rx_ring; } ;
typedef int bus_addr_t ;


 int FUNC_0 (char*) ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,unsigned int) ;
 int FUNC_2 (struct xgbe_channel*) ;
 scalar_t__ FUNC_3 (struct xgbe_prv_data*,struct xgbe_ring*,struct xgbe_ring_data*) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_hw_if *VAR_1 = &VAR_0->hw_if;
 struct xgbe_channel *VAR_2;
 struct xgbe_ring *VAR_3;
 struct xgbe_ring_desc *VAR_4;
 struct xgbe_ring_data *VAR_5;
 bus_addr_t VAR_6;
 unsigned int VAR_7, VAR_8;

 FUNC_0("-->xgbe_wrapper_rx_descriptor_init\n");

 VAR_2 = VAR_0->channel;
 for (VAR_7 = 0; VAR_7 < VAR_0->channel_count; VAR_7++, VAR_2++) {
  VAR_3 = VAR_2->rx_ring;
  if (!VAR_3)
   break;

  VAR_4 = VAR_3->rdesc;
  VAR_6 = VAR_3->rdesc_paddr;

  for (VAR_8 = 0; VAR_8 < VAR_3->rdesc_count; VAR_8++) {
   VAR_5 = FUNC_1(VAR_3, VAR_8);

   VAR_5->rdesc = VAR_4;
   VAR_5->rdata_paddr = VAR_6;

   if (FUNC_3(VAR_0, VAR_3, VAR_5))
    break;

   VAR_4++;
   VAR_6 += sizeof(struct xgbe_ring_desc);
  }

  VAR_3->cur = 0;
  VAR_3->dirty = 0;

  VAR_1->rx_desc_init(VAR_2);
 }
}
