
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
struct vmxnet3_softc {struct vmxnet3_rxqueue* vmx_rxq; } ;
struct vmxnet3_rxring {int vxrxr_gen; int vxrxr_ndesc; struct vmxnet3_rxdesc* vxrxr_rxd; } ;
struct vmxnet3_rxqueue {struct vmxnet3_rxring* vxrxq_cmd_ring; } ;
struct vmxnet3_rxdesc {int len; size_t btype; int gen; int addr; } ;
typedef TYPE_1__* if_rxd_update_t ;
struct TYPE_3__ {int iru_count; int iru_buf_size; int iru_pidx; size_t iru_flidx; size_t iru_qsidx; int * iru_paddrs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_0(void *VAR_2, if_rxd_update_t VAR_3)
{
 struct vmxnet3_softc *VAR_4;
 struct vmxnet3_rxqueue *VAR_5;
 struct vmxnet3_rxring *VAR_6;
 struct vmxnet3_rxdesc *VAR_7;
 uint64_t *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;

 VAR_9 = VAR_3->iru_count;
 VAR_10 = VAR_3->iru_buf_size;
 VAR_11 = VAR_3->iru_pidx;
 VAR_13 = VAR_3->iru_flidx;
 VAR_8 = VAR_3->iru_paddrs;

 VAR_4 = VAR_2;
 VAR_5 = &VAR_4->vmx_rxq[VAR_3->iru_qsidx];
 VAR_6 = &VAR_5->vxrxq_cmd_ring[VAR_13];
 VAR_7 = VAR_6->vxrxr_rxd;





 VAR_14 = (VAR_13 == 0) ? VAR_1 : VAR_0;
 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_7[VAR_11].addr = VAR_8[VAR_12];
  VAR_7[VAR_11].len = VAR_10;
  VAR_7[VAR_11].btype = VAR_14;
  VAR_7[VAR_11].gen = VAR_6->vxrxr_gen;

  if (++VAR_11 == VAR_6->vxrxr_ndesc) {
   VAR_11 = 0;
   VAR_6->vxrxr_gen ^= 1;
  }
 }
}
