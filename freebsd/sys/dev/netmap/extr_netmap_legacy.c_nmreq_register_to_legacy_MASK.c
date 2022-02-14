
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_register {int nr_extra_bufs; int nr_mem_id; int nr_rx_rings; int nr_tx_rings; int nr_rx_slots; int nr_tx_slots; int nr_memsize; int nr_offset; } ;
struct nmreq {int nr_arg3; int nr_arg2; int nr_rx_rings; int nr_tx_rings; int nr_rx_slots; int nr_tx_slots; int nr_memsize; int nr_offset; } ;



__attribute__((used)) static void
FUNC_0(const struct nmreq_register *VAR_0, struct nmreq *VAR_1)
{
 VAR_1->nr_offset = VAR_0->nr_offset;
 VAR_1->nr_memsize = VAR_0->nr_memsize;
 VAR_1->nr_tx_slots = VAR_0->nr_tx_slots;
 VAR_1->nr_rx_slots = VAR_0->nr_rx_slots;
 VAR_1->nr_tx_rings = VAR_0->nr_tx_rings;
 VAR_1->nr_rx_rings = VAR_0->nr_rx_rings;
 VAR_1->nr_arg2 = VAR_0->nr_mem_id;
 VAR_1->nr_arg3 = VAR_0->nr_extra_bufs;
}
