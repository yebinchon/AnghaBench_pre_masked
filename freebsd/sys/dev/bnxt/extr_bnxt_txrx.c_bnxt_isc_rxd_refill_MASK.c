
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct rx_prod_pkt_bd {size_t opaque; int addr; void* len; void* flags_type; } ;
struct bnxt_softc {struct bnxt_ring* ag_rings; struct bnxt_ring* rx_rings; } ;
struct bnxt_ring {size_t ring_size; scalar_t__ vaddr; } ;
typedef size_t qidx_t ;
typedef TYPE_1__* if_rxd_update_t ;
struct TYPE_3__ {size_t iru_qsidx; size_t iru_count; size_t iru_buf_size; size_t iru_pidx; int iru_flidx; size_t* iru_idxs; int * iru_paddrs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, if_rxd_update_t VAR_3)
{
 struct bnxt_softc *VAR_4 = (struct bnxt_softc *)VAR_2;
 struct bnxt_ring *VAR_5;
 struct rx_prod_pkt_bd *VAR_6;
 uint16_t VAR_7;
 uint16_t VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10, VAR_11;
 uint32_t VAR_12;
 uint8_t VAR_13;
 uint64_t *VAR_14;
 qidx_t *VAR_15;

 VAR_9 = VAR_3->iru_qsidx;
 VAR_10 = VAR_3->iru_count;
 VAR_11 = VAR_3->iru_buf_size;
 VAR_12 = VAR_3->iru_pidx;
 VAR_13 = VAR_3->iru_flidx;
 VAR_14 = VAR_3->iru_paddrs;
 VAR_15 = VAR_3->iru_idxs;

 if (VAR_13 == 0) {
  VAR_5 = &VAR_4->rx_rings[VAR_9];
  VAR_7 = VAR_1;
 }
 else {
  VAR_5 = &VAR_4->ag_rings[VAR_9];
  VAR_7 = VAR_0;
 }
 VAR_6 = (void *)VAR_5->vaddr;

 for (VAR_8=0; VAR_8<VAR_10; VAR_8++) {
  VAR_6[VAR_12].flags_type = FUNC_0(VAR_7);
  VAR_6[VAR_12].len = FUNC_0(VAR_11);

  VAR_6[VAR_12].opaque = (((VAR_9 & 0xff) << 24) | (VAR_13 << 16)
      | (VAR_15[VAR_8]));
  VAR_6[VAR_12].addr = FUNC_1(VAR_14[VAR_8]);
  if (++VAR_12 == VAR_5->ring_size)
   VAR_12 = 0;
 }
 return;
}
