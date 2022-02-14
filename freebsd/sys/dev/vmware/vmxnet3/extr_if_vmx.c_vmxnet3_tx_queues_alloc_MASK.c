
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct vmxnet3_txring {void* vxtxr_paddr; struct vmxnet3_txdesc* vxtxr_txd; } ;
struct TYPE_4__ {struct vmxnet3_txcompdesc* txcd; } ;
struct vmxnet3_comp_ring {void* vxcr_paddr; TYPE_2__ vxcr_u; } ;
struct vmxnet3_txqueue {struct vmxnet3_txring vxtxq_cmd_ring; struct vmxnet3_comp_ring vxtxq_comp_ring; struct vmxnet3_txq_shared* vxtxq_ts; } ;
struct vmxnet3_txq_shared {int dummy; } ;
struct vmxnet3_txdesc {int dummy; } ;
struct vmxnet3_txcompdesc {int dummy; } ;
struct TYPE_3__ {scalar_t__ idi_size; scalar_t__ idi_vaddr; } ;
struct vmxnet3_softc {struct vmxnet3_txqueue* vmx_txq; TYPE_1__ vmx_qs_dma; } ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vmxnet3_softc* FUNC_0 (int ) ;
 struct vmxnet3_txqueue* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct vmxnet3_softc*,int) ;
 int FUNC_3 (struct vmxnet3_softc*) ;

__attribute__((used)) static int
FUNC_4(if_ctx_t VAR_4, caddr_t *VAR_5, uint64_t *VAR_6,
    int VAR_7, int VAR_8)
{
 struct vmxnet3_softc *VAR_9;
 int VAR_10;
 int VAR_11;
 caddr_t VAR_12;

 VAR_9 = FUNC_0(VAR_4);


 VAR_9->vmx_txq = FUNC_1(sizeof(struct vmxnet3_txqueue) *
     VAR_8, VAR_1, VAR_2 | VAR_3);
 if (VAR_9->vmx_txq == ((void*)0))
  return (VAR_0);


 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
  FUNC_2(VAR_9, VAR_10);







 if (VAR_9->vmx_qs_dma.idi_size == 0) {
  VAR_11 = FUNC_3(VAR_9);
  if (VAR_11)
   return (VAR_11);
 }

 VAR_12 = VAR_9->vmx_qs_dma.idi_vaddr;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_9->vmx_txq[VAR_10].vxtxq_ts = (struct vmxnet3_txq_shared *) VAR_12;
  VAR_12 += sizeof(struct vmxnet3_txq_shared);
 }


 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  struct vmxnet3_txqueue *VAR_13;
  struct vmxnet3_txring *VAR_14;
  struct vmxnet3_comp_ring *VAR_15;

  VAR_13 = &VAR_9->vmx_txq[VAR_10];
  VAR_15 = &VAR_13->vxtxq_comp_ring;
  VAR_14 = &VAR_13->vxtxq_cmd_ring;


  VAR_15->vxcr_u.txcd =
      (struct vmxnet3_txcompdesc *) VAR_5[VAR_10 * VAR_7 + 0];
  VAR_15->vxcr_paddr = VAR_6[VAR_10 * VAR_7 + 0];


  VAR_14->vxtxr_txd =
      (struct vmxnet3_txdesc *) VAR_5[VAR_10 * VAR_7 + 1];
  VAR_14->vxtxr_paddr = VAR_6[VAR_10 * VAR_7 + 1];
 }

 return (0);
}
