
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
struct vmxnet3_txq_shared {int dummy; } ;
struct TYPE_4__ {scalar_t__ idi_size; scalar_t__ idi_vaddr; } ;
struct vmxnet3_softc {struct vmxnet3_rxqueue* vmx_rxq; TYPE_1__ vmx_qs_dma; TYPE_3__* vmx_scctx; } ;
struct vmxnet3_rxring {void* vxrxr_paddr; struct vmxnet3_rxdesc* vxrxr_rxd; } ;
struct TYPE_5__ {struct vmxnet3_rxcompdesc* rxcd; } ;
struct vmxnet3_comp_ring {void* vxcr_paddr; TYPE_2__ vxcr_u; } ;
struct vmxnet3_rxqueue {struct vmxnet3_rxring* vxrxq_cmd_ring; struct vmxnet3_comp_ring vxrxq_comp_ring; struct vmxnet3_rxq_shared* vxrxq_rs; } ;
struct vmxnet3_rxq_shared {int dummy; } ;
struct vmxnet3_rxdesc {int dummy; } ;
struct vmxnet3_rxcompdesc {int dummy; } ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_6__ {int isc_ntxqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vmxnet3_softc* FUNC_0 (int ) ;
 struct vmxnet3_rxqueue* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct vmxnet3_softc*,int,int) ;
 int FUNC_3 (struct vmxnet3_softc*) ;

__attribute__((used)) static int
FUNC_4(if_ctx_t VAR_4, caddr_t *VAR_5, uint64_t *VAR_6,
    int VAR_7, int VAR_8)
{
 struct vmxnet3_softc *VAR_9;
 if_softc_ctx_t VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 caddr_t VAR_14;

 VAR_9 = FUNC_0(VAR_4);
 VAR_10 = VAR_9->vmx_scctx;


 VAR_9->vmx_rxq = FUNC_1(sizeof(struct vmxnet3_rxqueue) *
     VAR_8, VAR_1, VAR_2 | VAR_3);
 if (VAR_9->vmx_rxq == ((void*)0))
  return (VAR_0);


 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  FUNC_2(VAR_9, VAR_11, VAR_7);







 if (VAR_9->vmx_qs_dma.idi_size == 0) {
  VAR_13 = FUNC_3(VAR_9);
  if (VAR_13)
   return (VAR_13);
 }

 VAR_14 = VAR_9->vmx_qs_dma.idi_vaddr +
     VAR_10->isc_ntxqsets * sizeof(struct vmxnet3_txq_shared);
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_9->vmx_rxq[VAR_11].vxrxq_rs = (struct vmxnet3_rxq_shared *) VAR_14;
  VAR_14 += sizeof(struct vmxnet3_rxq_shared);
 }


 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  struct vmxnet3_rxqueue *VAR_15;
  struct vmxnet3_rxring *VAR_16;
  struct vmxnet3_comp_ring *VAR_17;

  VAR_15 = &VAR_9->vmx_rxq[VAR_11];
  VAR_17 = &VAR_15->vxrxq_comp_ring;


  VAR_17->vxcr_u.rxcd =
      (struct vmxnet3_rxcompdesc *) VAR_5[VAR_11 * VAR_7 + 0];
  VAR_17->vxcr_paddr = VAR_6[VAR_11 * VAR_7 + 0];


  for (VAR_12 = 0; VAR_12 < VAR_7 - 1; VAR_12++) {
   VAR_16 = &VAR_15->vxrxq_cmd_ring[VAR_12];

   VAR_16->vxrxr_rxd =
       (struct vmxnet3_rxdesc *) VAR_5[VAR_11 * VAR_7 + 1 + VAR_12];
   VAR_16->vxrxr_paddr = VAR_6[VAR_11 * VAR_7 + 1 + VAR_12];
  }
 }

 return (0);
}
