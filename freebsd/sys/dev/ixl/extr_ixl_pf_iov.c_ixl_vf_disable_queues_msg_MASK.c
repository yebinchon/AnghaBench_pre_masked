
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct virtchnl_queue_select {scalar_t__ vsi_id; scalar_t__ rx_queues; scalar_t__ tx_queues; } ;
struct TYPE_2__ {scalar_t__ vsi_num; int num_tx_queues; int num_rx_queues; } ;
struct ixl_vf {int qtag; int vf_num; TYPE_1__ vsi; } ;
struct ixl_pf {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_2 (struct ixl_pf*,char*,int ,int) ;
 int FUNC_3 (struct ixl_pf*,int *,int) ;
 int FUNC_4 (struct ixl_pf*,int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (struct ixl_pf*,struct ixl_vf*,int ) ;

__attribute__((used)) static void
FUNC_9(struct ixl_pf *VAR_3, struct ixl_vf *VAR_4,
    void *VAR_5, uint16_t VAR_6)
{
 struct virtchnl_queue_select *VAR_7;
 int VAR_8 = 0;

 if (VAR_6 != sizeof(*VAR_7)) {
  FUNC_1(VAR_3, VAR_4, VAR_2,
      VAR_0);
  return;
 }

 VAR_7 = VAR_5;
 if (VAR_7->vsi_id != VAR_4->vsi.vsi_num ||
     VAR_7->rx_queues == 0 || VAR_7->tx_queues == 0) {
  FUNC_1(VAR_3, VAR_4, VAR_2,
      VAR_0);
  return;
 }


 for (int VAR_9 = 0; VAR_9 < 32; VAR_9++) {
  if ((1 << VAR_9) & VAR_7->tx_queues) {

   if (VAR_9 >= VAR_4->vsi.num_tx_queues) {
    FUNC_0(VAR_3->dev, "VF %d: TX ring %d is outside of VF VSI allocation!\n",
        VAR_4->vf_num, VAR_9);
    break;
   }

   if (!FUNC_5(&VAR_4->qtag, VAR_9, 1))
    continue;

   if (!FUNC_6(&VAR_4->qtag, VAR_9, 1)) {
    FUNC_2(VAR_3, "VF %d: TX ring %d is already disabled!\n",
        VAR_4->vf_num, VAR_9);
    continue;
   }
   VAR_8 = FUNC_4(VAR_3, &VAR_4->qtag, VAR_9);
   if (VAR_8)
    break;
   else
    FUNC_7(&VAR_4->qtag, VAR_9, 1);
  }
 }


 for (int VAR_10 = 0; VAR_10 < 32; VAR_10++) {
  if ((1 << VAR_10) & VAR_7->rx_queues) {

   if (VAR_10 >= VAR_4->vsi.num_rx_queues) {
    FUNC_0(VAR_3->dev, "VF %d: RX ring %d is outside of VF VSI allocation!\n",
        VAR_4->vf_num, VAR_10);
    break;
   }

   if (!FUNC_5(&VAR_4->qtag, VAR_10, 0))
    continue;

   if (!FUNC_6(&VAR_4->qtag, VAR_10, 0)) {
    FUNC_2(VAR_3, "VF %d: RX ring %d is already disabled!\n",
        VAR_4->vf_num, VAR_10);
    continue;
   }
   VAR_8 = FUNC_3(VAR_3, &VAR_4->qtag, VAR_10);
   if (VAR_8)
    break;
   else
    FUNC_7(&VAR_4->qtag, VAR_10, 0);
  }
 }

 if (VAR_8) {
  FUNC_1(VAR_3, VAR_4, VAR_2,
      VAR_1);
  return;
 }

 FUNC_8(VAR_3, VAR_4, VAR_2);
}
