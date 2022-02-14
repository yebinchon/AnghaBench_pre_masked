
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* rx_buf; } ;
typedef TYPE_1__ qla_rx_ring_t ;
struct TYPE_7__ {int * m_head; int map; } ;
typedef TYPE_2__ qla_rx_buf_t ;
struct TYPE_8__ {int num_rx_rings; int rx_tag; TYPE_1__* rx_ring; } ;
typedef TYPE_3__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(qla_host_t *VAR_1)
{
 int VAR_2, VAR_3;
 qla_rx_buf_t *VAR_4;
 qla_rx_ring_t *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_rx_rings; VAR_3++) {

  VAR_5 = &VAR_1->rx_ring[VAR_3];

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {

   VAR_4 = &VAR_5->rx_buf[VAR_2];

   if (VAR_4->m_head != ((void*)0)) {
    FUNC_1(VAR_1->rx_tag, VAR_4->map);
    FUNC_0(VAR_1->rx_tag, VAR_4->map);
    FUNC_3(VAR_4->m_head);
   }
  }
  FUNC_2(VAR_5->rx_buf, (sizeof(qla_rx_buf_t) * VAR_0));
 }
 return;
}
