
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num_tx_rings; TYPE_1__* tx_ring; } ;
typedef TYPE_2__ qla_host_t ;
struct TYPE_5__ {int * tx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_1(qla_host_t *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_tx_rings; VAR_3++) {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   FUNC_0(VAR_1, &VAR_1->tx_ring[VAR_3].tx_buf[VAR_2]);
 }

 return;
}
