
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rx_buf; } ;
typedef TYPE_1__ qla_rx_ring_t ;
typedef int qla_rx_buf_t ;
struct TYPE_7__ {int num_rx_rings; TYPE_1__* rx_ring; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(qla_host_t *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 qla_rx_ring_t *VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_rings; VAR_2++) {
  VAR_4 = &VAR_1->rx_ring[VAR_2];
  FUNC_0(VAR_4->rx_buf, (sizeof(qla_rx_buf_t) * VAR_0));
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_rings; VAR_2++) {

  VAR_3 = FUNC_1(VAR_1, VAR_2);

  if (VAR_3)
   FUNC_2(VAR_1);
 }

 return (VAR_3);
}
