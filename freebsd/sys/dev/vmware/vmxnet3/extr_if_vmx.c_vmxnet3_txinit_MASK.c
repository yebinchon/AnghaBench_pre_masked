
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_txring {void* vxtxr_gen; scalar_t__ vxtxr_next; } ;
struct vmxnet3_comp_ring {void* vxcr_gen; scalar_t__ vxcr_next; } ;
struct vmxnet3_txqueue {int vxtxq_last_flush; struct vmxnet3_comp_ring vxtxq_comp_ring; struct vmxnet3_txring vxtxq_cmd_ring; } ;
struct vmxnet3_softc {int dummy; } ;


 void* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct vmxnet3_softc *VAR_1, struct vmxnet3_txqueue *VAR_2)
{
 struct vmxnet3_txring *VAR_3;
 struct vmxnet3_comp_ring *VAR_4;

 VAR_2->vxtxq_last_flush = -1;

 VAR_3 = &VAR_2->vxtxq_cmd_ring;
 VAR_3->vxtxr_next = 0;
 VAR_3->vxtxr_gen = VAR_0;





 VAR_4 = &VAR_2->vxtxq_comp_ring;
 VAR_4->vxcr_next = 0;
 VAR_4->vxcr_gen = VAR_0;




}
