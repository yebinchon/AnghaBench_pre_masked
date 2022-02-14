
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qla_rx_ring_t ;
struct TYPE_7__ {int num_sds_rings; TYPE_1__* sds; } ;
struct TYPE_8__ {TYPE_2__ hw; scalar_t__ rx_ring; int * rx_tag; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_6__ {scalar_t__ rx_free; int * rxb_free; scalar_t__ sdsr_next; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(qla_host_t *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1);

 if (VAR_1->rx_tag != ((void*)0)) {
  FUNC_0(VAR_1->rx_tag);
  VAR_1->rx_tag = ((void*)0);
 }

 FUNC_1((void *)VAR_1->rx_ring, (sizeof(qla_rx_ring_t) * VAR_0));

 for (VAR_2 = 0; VAR_2 < VAR_1->hw.num_sds_rings; VAR_2++) {
  VAR_1->hw.sds[VAR_2].sdsr_next = 0;
  VAR_1->hw.sds[VAR_2].rxb_free = ((void*)0);
  VAR_1->hw.sds[VAR_2].rx_free = 0;
 }

 return;
}
