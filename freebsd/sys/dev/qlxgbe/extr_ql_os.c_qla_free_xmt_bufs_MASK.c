
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qla_tx_buf_t ;
struct TYPE_7__ {int num_tx_rings; } ;
struct TYPE_8__ {TYPE_1__* tx_ring; TYPE_2__ hw; int * tx_tag; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_6__ {int * tx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_3(qla_host_t *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->hw.num_tx_rings; VAR_3++) {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   FUNC_2(VAR_1, &VAR_1->tx_ring[VAR_3].tx_buf[VAR_2]);
 }

 if (VAR_1->tx_tag != ((void*)0)) {
  FUNC_0(VAR_1->tx_tag);
  VAR_1->tx_tag = ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->hw.num_tx_rings; VAR_2++) {
  FUNC_1((void *)VAR_1->tx_ring[VAR_2].tx_buf,
   (sizeof(qla_tx_buf_t) * VAR_0));
 }
 return;
}
