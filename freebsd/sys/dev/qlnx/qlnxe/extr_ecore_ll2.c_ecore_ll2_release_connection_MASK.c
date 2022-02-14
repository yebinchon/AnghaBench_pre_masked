
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int b_cb_registred; int rcq_chain; int rxq_chain; int descq_array; int rx_sb_index; } ;
struct TYPE_3__ {int b_cb_registred; int txq_chain; int descq_array; int tx_sb_index; } ;
struct ecore_ll2_info {int b_active; int mutex; int cid; TYPE_2__ rx_queue; TYPE_1__ tx_queue; } ;
struct ecore_hwfn {int p_dev; } ;


 scalar_t__ FUNC_0 (struct ecore_ll2_info*) ;
 scalar_t__ FUNC_1 (struct ecore_ll2_info*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ecore_ll2_info* VAR_0 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct ecore_hwfn*,int ) ;
 int FUNC_7 (struct ecore_hwfn*,int ) ;
 struct ecore_ll2_info* FUNC_8 (struct ecore_hwfn*,int ) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ll2_info*) ;

void FUNC_10(void *VAR_1,
      u8 VAR_2)
{
 struct ecore_hwfn *VAR_3 = (struct ecore_hwfn *)VAR_1;
 struct ecore_ll2_info *VAR_4 = VAR_0;

 VAR_4 = FUNC_8(VAR_3, VAR_2);
 if (VAR_4 == VAR_0)
  return;

 if (FUNC_0(VAR_4)) {
  VAR_4->rx_queue.b_cb_registred = 0;
  FUNC_7(VAR_3,
     VAR_4->rx_queue.rx_sb_index);
 }

 if (FUNC_1(VAR_4)) {
  VAR_4->tx_queue.b_cb_registred = 0;
  FUNC_7(VAR_3,
     VAR_4->tx_queue.tx_sb_index);
 }

 FUNC_2(VAR_3->p_dev, VAR_4->tx_queue.descq_array);
 FUNC_5(VAR_3->p_dev, &VAR_4->tx_queue.txq_chain);

 FUNC_2(VAR_3->p_dev, VAR_4->rx_queue.descq_array);
 FUNC_5(VAR_3->p_dev, &VAR_4->rx_queue.rxq_chain);
 FUNC_5(VAR_3->p_dev, &VAR_4->rx_queue.rcq_chain);

 FUNC_6(VAR_3, VAR_4->cid);

 FUNC_9(VAR_3, VAR_4);

 FUNC_3(&VAR_4->mutex);
 VAR_4->b_active = 0;
 FUNC_4(&VAR_4->mutex);
}
