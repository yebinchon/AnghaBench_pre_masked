
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int msg_ring_dma; scalar_t__ use_msg; int cmp_ring_dma; int req_ring_dma; int rings_state_dma; } ;


 int FUNC_0 (struct pvscsi_softc*,int *) ;

__attribute__((used)) static void
FUNC_1(struct pvscsi_softc *VAR_0)
{

 FUNC_0(VAR_0, &VAR_0->rings_state_dma);
 FUNC_0(VAR_0, &VAR_0->req_ring_dma);
 FUNC_0(VAR_0, &VAR_0->cmp_ring_dma);
 if (VAR_0->use_msg) {
  FUNC_0(VAR_0, &VAR_0->msg_ring_dma);
 }
}
