
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ena_ring {int br; } ;
struct ena_adapter {int num_queues; struct ena_ring* tx_ring; } ;
typedef TYPE_1__* if_t ;
struct TYPE_6__ {struct ena_adapter* if_softc; } ;


 int FUNC_0 (struct ena_ring*) ;
 int FUNC_1 (struct ena_ring*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(if_t VAR_0)
{
 struct ena_adapter *VAR_1 = VAR_0->if_softc;
 struct ena_ring *VAR_2 = VAR_1->tx_ring;
 int VAR_3;

 for(VAR_3 = 0; VAR_3 < VAR_1->num_queues; ++VAR_3, ++VAR_2)
  if (!FUNC_2(VAR_0, VAR_2->br)) {
   FUNC_0(VAR_2);
   FUNC_3(VAR_0, VAR_2->br);
   FUNC_1(VAR_2);
  }

 FUNC_4(VAR_0);
}
