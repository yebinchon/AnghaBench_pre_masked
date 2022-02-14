
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ccp_queue {int cq_tail; scalar_t__ desc_ring_bus_addr; int cq_qindex; int cq_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;

void
FUNC_1(struct ccp_queue *VAR_2)
{
 FUNC_0(VAR_2->cq_softc, VAR_2->cq_qindex, VAR_0,
     ((uint32_t)VAR_2->desc_ring_bus_addr) + (VAR_1 * VAR_2->cq_tail));
}
