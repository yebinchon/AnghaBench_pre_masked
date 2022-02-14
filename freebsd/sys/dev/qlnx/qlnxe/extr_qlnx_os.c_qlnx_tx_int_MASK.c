
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int raw; } ;
struct qlnx_tx_queue {int sw_tx_cons; TYPE_2__* sw_tx_ring; int tx_pbl; TYPE_1__ tx_db; int * hw_cons_ptr; } ;
struct qlnx_fastpath {int err_tx_cons_idx_conflict; int rss_id; } ;
typedef int qlnx_host_t ;
struct TYPE_4__ {int mp; } ;


 int FUNC_0 (int *,char*,int,int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct qlnx_fastpath*,struct qlnx_tx_queue*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(qlnx_host_t *VAR_2, struct qlnx_fastpath *VAR_3,
 struct qlnx_tx_queue *VAR_4)
{
 u16 VAR_5;
 u16 VAR_6;
 uint16_t VAR_7;
 uint16_t VAR_8, VAR_9;

 VAR_5 = FUNC_6(*VAR_4->hw_cons_ptr);

 while (VAR_5 !=
  (VAR_6 = FUNC_3(&VAR_4->tx_pbl))) {

  if (VAR_5 < VAR_6) {
   VAR_7 = (1 << 16) - (VAR_6 - VAR_5);
  } else {
   VAR_7 = VAR_5 - VAR_6;
  }
  if ((VAR_7 > VAR_1) ||
   FUNC_1(VAR_2, VAR_0)){

   FUNC_2(VAR_2, VAR_0);

   FUNC_0(VAR_2, "(diff = 0x%x) "
    " tx_idx = 0x%x"
    " ecore_prod_idx = 0x%x"
    " ecore_cons_idx = 0x%x"
    " hw_bd_cons = 0x%x"
    " txq_db_last = 0x%x"
    " elem_left = 0x%x\n",
    VAR_7,
    VAR_3->rss_id,
    FUNC_5(&VAR_4->tx_pbl),
    FUNC_3(&VAR_4->tx_pbl),
    FUNC_6(*VAR_4->hw_cons_ptr),
    VAR_4->tx_db.raw,
    FUNC_4(&VAR_4->tx_pbl));

   VAR_3->err_tx_cons_idx_conflict++;


   FUNC_9(VAR_2);
  }

  VAR_8 = (VAR_4->sw_tx_cons + 1) & (VAR_1 - 1);
  VAR_9 = (VAR_4->sw_tx_cons + 2) & (VAR_1 - 1);
  FUNC_7(VAR_4->sw_tx_ring[VAR_8].mp);
  FUNC_7(VAR_4->sw_tx_ring[VAR_9].mp);

  FUNC_8(VAR_2, VAR_3, VAR_4);

  VAR_4->sw_tx_cons = (VAR_4->sw_tx_cons + 1) & (VAR_1 - 1);
 }
 return;
}
