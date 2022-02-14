
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int num_tx_rings; TYPE_1__* tx_cntxt; } ;
struct TYPE_9__ {TYPE_2__ hw; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_10__ {int txr_comp; int txr_next; int txr_free; int tx_cntxt_id; int tx_prod_reg; int cons_p_addr; int base_p_addr; } ;
typedef TYPE_4__ qla_drvr_state_tx_t ;
struct TYPE_7__ {int txr_comp; int txr_next; int txr_free; int tx_cntxt_id; int tx_prod_reg; int tx_cons_paddr; int tx_ring_paddr; } ;



__attribute__((used)) static void
FUNC_0(qla_host_t *VAR_0, qla_drvr_state_tx_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->hw.num_tx_rings; VAR_2++) {
  VAR_1->base_p_addr = VAR_0->hw.tx_cntxt[VAR_2].tx_ring_paddr;
  VAR_1->cons_p_addr = VAR_0->hw.tx_cntxt[VAR_2].tx_cons_paddr;
  VAR_1->tx_prod_reg = VAR_0->hw.tx_cntxt[VAR_2].tx_prod_reg;
  VAR_1->tx_cntxt_id = VAR_0->hw.tx_cntxt[VAR_2].tx_cntxt_id;
  VAR_1->txr_free = VAR_0->hw.tx_cntxt[VAR_2].txr_free;
  VAR_1->txr_next = VAR_0->hw.tx_cntxt[VAR_2].txr_next;
  VAR_1->txr_comp = VAR_0->hw.tx_cntxt[VAR_2].txr_comp;
  VAR_1++;
 }
 return;
}
