
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptnet_softc {int num_rings; struct ptnet_queue* queues; } ;
struct ptnet_queue {TYPE_1__* atok; } ;
struct netmap_adapter {int ifp; } ;
struct TYPE_2__ {int appl_need_kick; } ;


 struct ptnet_softc* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct netmap_adapter *VAR_0, int VAR_1)
{
 struct ptnet_softc *VAR_2 = FUNC_0(VAR_0->ifp);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_rings; VAR_3++) {
  struct ptnet_queue *VAR_4 = VAR_2->queues + VAR_3;
  VAR_4->atok->appl_need_kick = VAR_1;
 }
}
