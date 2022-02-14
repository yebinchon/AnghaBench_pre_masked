
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct vmxnet3_txring {int vxtxr_next; int vxtxr_ndesc; } ;
struct TYPE_2__ {struct vmxnet3_txcompdesc* txcd; } ;
struct vmxnet3_comp_ring {size_t vxcr_next; int vxcr_gen; size_t vxcr_ndesc; TYPE_1__ vxcr_u; } ;
struct vmxnet3_txqueue {struct vmxnet3_txring vxtxq_cmd_ring; struct vmxnet3_comp_ring vxtxq_comp_ring; } ;
struct vmxnet3_txcompdesc {int gen; int eop_idx; } ;
struct vmxnet3_softc {struct vmxnet3_txqueue* vmx_txq; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, uint16_t VAR_2, bool VAR_3)
{
 struct vmxnet3_softc *VAR_4;
 struct vmxnet3_txqueue *VAR_5;
 struct vmxnet3_comp_ring *VAR_6;
 struct vmxnet3_txcompdesc *VAR_7;
 struct vmxnet3_txring *VAR_8;
 int VAR_9;

 VAR_4 = VAR_1;
 VAR_5 = &VAR_4->vmx_txq[VAR_2];
 VAR_6 = &VAR_5->vxtxq_comp_ring;
 VAR_8 = &VAR_5->vxtxq_cmd_ring;







 VAR_9 = 0;
 for (;;) {
  VAR_7 = &VAR_6->vxcr_u.txcd[VAR_6->vxcr_next];
  if (VAR_7->gen != VAR_6->vxcr_gen)
   break;
  else if (!VAR_3)
   return (1);
  FUNC_0(VAR_4, VAR_0);

  if (++VAR_6->vxcr_next == VAR_6->vxcr_ndesc) {
   VAR_6->vxcr_next = 0;
   VAR_6->vxcr_gen ^= 1;
  }

  if (VAR_7->eop_idx < VAR_8->vxtxr_next)
   VAR_9 += VAR_8->vxtxr_ndesc -
       (VAR_8->vxtxr_next - VAR_7->eop_idx) + 1;
  else
   VAR_9 += VAR_7->eop_idx - VAR_8->vxtxr_next + 1;
  VAR_8->vxtxr_next = (VAR_7->eop_idx + 1) % VAR_8->vxtxr_ndesc;
 }

 return (VAR_9);
}
