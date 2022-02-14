
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct virtchnl_vsi_queue_config_info {int num_queue_pairs; int vsi_id; struct virtchnl_queue_pair_info* qpair; } ;
struct TYPE_6__ {int vsi_id; scalar_t__ queue_id; } ;
struct TYPE_5__ {int vsi_id; scalar_t__ queue_id; } ;
struct virtchnl_queue_pair_info {TYPE_3__ rxq; TYPE_2__ txq; } ;
struct TYPE_4__ {int num_tx_queues; int vsi_num; } ;
struct ixl_vf {TYPE_1__ vsi; int vf_num; } ;
struct ixl_pf {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_2 (struct ixl_pf*,struct ixl_vf*,int ) ;
 scalar_t__ FUNC_3 (struct ixl_pf*,struct ixl_vf*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct ixl_pf*,struct ixl_vf*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(struct ixl_pf *VAR_2, struct ixl_vf *VAR_3, void *VAR_4,
    uint16_t VAR_5)
{
 struct virtchnl_vsi_queue_config_info *VAR_6;
 struct virtchnl_queue_pair_info *VAR_7;
 uint16_t VAR_8;
 int VAR_9;

 if (VAR_5 < sizeof(*VAR_6)) {
  FUNC_1(VAR_2, VAR_3, VAR_1,
      VAR_0);
  return;
 }

 VAR_6 = VAR_4;
 if (VAR_6->num_queue_pairs == 0 || VAR_6->num_queue_pairs > VAR_3->vsi.num_tx_queues) {
  FUNC_0(VAR_2->dev, "VF %d: invalid # of qpairs (msg has %d, VSI has %d)\n",
      VAR_3->vf_num, VAR_6->num_queue_pairs, VAR_3->vsi.num_tx_queues);
  FUNC_1(VAR_2, VAR_3, VAR_1,
      VAR_0);
  return;
 }

 VAR_8 = sizeof(*VAR_6) + VAR_6->num_queue_pairs * sizeof(*VAR_7);
 if (VAR_5 != VAR_8) {
  FUNC_0(VAR_2->dev, "VF %d: size of recvd message (%d) does not match expected size (%d)\n",
      VAR_3->vf_num, VAR_5, VAR_8);
  FUNC_1(VAR_2, VAR_3, VAR_1,
      VAR_0);
  return;
 }

 if (VAR_6->vsi_id != VAR_3->vsi.vsi_num) {
  FUNC_0(VAR_2->dev, "VF %d: VSI id in recvd message (%d) does not match expected id (%d)\n",
      VAR_3->vf_num, VAR_6->vsi_id, VAR_3->vsi.vsi_num);
  FUNC_1(VAR_2, VAR_3, VAR_1,
      VAR_0);
  return;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->num_queue_pairs; VAR_9++) {
  VAR_7 = &VAR_6->qpair[VAR_9];

  if (VAR_7->txq.vsi_id != VAR_3->vsi.vsi_num ||
      VAR_7->rxq.vsi_id != VAR_3->vsi.vsi_num ||
      VAR_7->txq.queue_id != VAR_7->rxq.queue_id ||
      VAR_7->txq.queue_id >= VAR_3->vsi.num_tx_queues) {

   FUNC_1(VAR_2, VAR_3,
       VAR_1, VAR_0);
   return;
  }

  if (FUNC_4(VAR_2, VAR_3, &VAR_7->txq) != 0) {
   FUNC_1(VAR_2, VAR_3,
       VAR_1, VAR_0);
   return;
  }

  if (FUNC_3(VAR_2, VAR_3, &VAR_7->rxq) != 0) {
   FUNC_1(VAR_2, VAR_3,
       VAR_1, VAR_0);
   return;
  }
 }

 FUNC_2(VAR_2, VAR_3, VAR_1);
}
