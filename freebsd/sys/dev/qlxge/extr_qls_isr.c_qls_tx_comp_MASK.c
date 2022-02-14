
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {int * m_head; int map; } ;
typedef TYPE_2__ qla_tx_buf_t ;
struct TYPE_9__ {int qla_initiate_recovery; TYPE_1__* tx_ring; int tx_tag; int ifp; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_10__ {size_t tid_lo; } ;
typedef TYPE_4__ q81_tx_mac_comp_t ;
struct TYPE_7__ {size_t txr_done; TYPE_2__* tx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(qla_host_t *VAR_3, uint32_t VAR_4, q81_tx_mac_comp_t *VAR_5)
{
 qla_tx_buf_t *VAR_6;
 uint32_t VAR_7 = VAR_5->tid_lo;

 if (VAR_7 >= VAR_2) {
  VAR_3->qla_initiate_recovery = 1;
  return;
 }

 VAR_6 = &VAR_3->tx_ring[VAR_4].tx_buf[VAR_7];

 if (VAR_6->m_head) {
  FUNC_2(VAR_3->ifp, VAR_1, 1);
  FUNC_0(VAR_3->tx_tag, VAR_6->map,
          VAR_0);
  FUNC_1(VAR_3->tx_tag, VAR_6->map);
  FUNC_3(VAR_6->m_head);

  VAR_6->m_head = ((void*)0);
 }

        VAR_3->tx_ring[VAR_4].txr_done++;

 if (VAR_3->tx_ring[VAR_4].txr_done == VAR_2)
  VAR_3->tx_ring[VAR_4].txr_done = 0;
}
