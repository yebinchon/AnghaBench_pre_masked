
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uintmax_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct al_udma_q {size_t q_regs; size_t desc_base_ptr; size_t cdesc_base_ptr; size_t end_cdesc_ptr; size_t comp_head_ptr; size_t udma; scalar_t__ qid; scalar_t__ status; scalar_t__ size; scalar_t__ flags; scalar_t__ cdesc_phy_base; scalar_t__ desc_phy_base; scalar_t__ comp_ring_id; scalar_t__ pkt_crnt_descs; scalar_t__ comp_head_idx; scalar_t__ next_cdesc_idx; scalar_t__ cdesc_size; scalar_t__ desc_ring_id; scalar_t__ next_desc_idx; scalar_t__ size_mask; } ;
struct al_udma {struct al_udma_q* udma_q; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t) ;

void FUNC_1(struct al_udma *VAR_1, uint32_t VAR_2)
{
 struct al_udma_q *VAR_3;

 if (!VAR_1)
  return;

 if (VAR_2 >= VAR_0)
  return;

 VAR_3 = &VAR_1->udma_q[VAR_2];

 FUNC_0("Q[%d] struct:\n", VAR_2);
 FUNC_0(" size_mask = 0x%08x\n", (uint32_t)VAR_3->size_mask);
 FUNC_0(" q_regs = %p\n", VAR_3->q_regs);
 FUNC_0(" desc_base_ptr = %p\n", VAR_3->desc_base_ptr);
 FUNC_0(" next_desc_idx = %d\n", (uint16_t)VAR_3->next_desc_idx);
 FUNC_0(" desc_ring_id = %d\n", (uint32_t)VAR_3->desc_ring_id);
 FUNC_0(" cdesc_base_ptr = %p\n", VAR_3->cdesc_base_ptr);
 FUNC_0(" cdesc_size = %d\n", (uint32_t)VAR_3->cdesc_size);
 FUNC_0(" next_cdesc_idx = %d\n", (uint16_t)VAR_3->next_cdesc_idx);
 FUNC_0(" end_cdesc_ptr = %p\n", VAR_3->end_cdesc_ptr);
 FUNC_0(" comp_head_idx = %d\n", (uint16_t)VAR_3->comp_head_idx);
 FUNC_0(" comp_head_ptr = %p\n", VAR_3->comp_head_ptr);
 FUNC_0(" pkt_crnt_descs = %d\n", (uint32_t)VAR_3->pkt_crnt_descs);
 FUNC_0(" comp_ring_id = %d\n", (uint32_t)VAR_3->comp_ring_id);
 FUNC_0(" desc_phy_base = 0x%016jx\n", (uintmax_t)VAR_3->desc_phy_base);
 FUNC_0(" cdesc_phy_base = 0x%016jx\n",
   (uintmax_t)VAR_3->cdesc_phy_base);
 FUNC_0(" flags = 0x%08x\n", (uint32_t)VAR_3->flags);
 FUNC_0(" size = %d\n", (uint32_t)VAR_3->size);
 FUNC_0(" status = %d\n", (uint32_t)VAR_3->status);
 FUNC_0(" udma = %p\n", VAR_3->udma);
 FUNC_0(" qid = %d\n", (uint32_t)VAR_3->qid);
}
