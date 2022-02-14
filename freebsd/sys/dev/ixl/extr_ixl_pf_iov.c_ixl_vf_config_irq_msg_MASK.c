
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct virtchnl_vector_map {scalar_t__ vector_id; scalar_t__ vsi_id; scalar_t__ rxq_map; scalar_t__ txq_map; scalar_t__ rxitr_idx; scalar_t__ txitr_idx; } ;
struct virtchnl_irq_map_info {int num_vectors; struct virtchnl_vector_map* vecmap; } ;
struct TYPE_4__ {scalar_t__ vsi_num; int num_rx_queues; int num_tx_queues; } ;
struct ixl_vf {TYPE_2__ vsi; } ;
struct TYPE_3__ {scalar_t__ num_msix_vectors_vf; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_2 (struct ixl_pf*,struct ixl_vf*,int ) ;
 int FUNC_3 (struct ixl_pf*,struct ixl_vf*,struct virtchnl_vector_map*) ;

__attribute__((used)) static void
FUNC_4(struct ixl_pf *VAR_3, struct ixl_vf *VAR_4, void *VAR_5,
    uint16_t VAR_6)
{
 struct virtchnl_irq_map_info *VAR_7;
 struct virtchnl_vector_map *VAR_8;
 struct i40e_hw *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_9 = &VAR_3->hw;

 if (VAR_6 < sizeof(*VAR_7)) {
  FUNC_1(VAR_3, VAR_4, VAR_2,
      VAR_0);
  return;
 }

 VAR_7 = VAR_5;
 if (VAR_7->num_vectors == 0) {
  FUNC_1(VAR_3, VAR_4, VAR_2,
      VAR_0);
  return;
 }

 if (VAR_6 != sizeof(*VAR_7) + VAR_7->num_vectors * sizeof(*VAR_8)) {
  FUNC_1(VAR_3, VAR_4, VAR_2,
      VAR_0);
  return;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->num_vectors; VAR_10++) {
  VAR_8 = &VAR_7->vecmap[VAR_10];

  if ((VAR_8->vector_id >= VAR_9->func_caps.num_msix_vectors_vf) ||
      VAR_8->vsi_id != VAR_4->vsi.vsi_num) {
   FUNC_1(VAR_3, VAR_4,
       VAR_2, VAR_0);
   return;
  }

  if (VAR_8->rxq_map != 0) {
   VAR_12 = FUNC_0(VAR_8->rxq_map) - 1;
   if (VAR_12 >= VAR_4->vsi.num_rx_queues) {
    FUNC_1(VAR_3, VAR_4,
        VAR_2,
        VAR_0);
    return;
   }
  }

  if (VAR_8->txq_map != 0) {
   VAR_11 = FUNC_0(VAR_8->txq_map) - 1;
   if (VAR_11 >= VAR_4->vsi.num_tx_queues) {
    FUNC_1(VAR_3, VAR_4,
        VAR_2,
        VAR_0);
    return;
   }
  }

  if (VAR_8->rxitr_idx > VAR_1 ||
      VAR_8->txitr_idx > VAR_1) {
   FUNC_1(VAR_3, VAR_4,
       VAR_2,
       VAR_0);
   return;
  }

  FUNC_3(VAR_3, VAR_4, VAR_8);
 }

 FUNC_2(VAR_3, VAR_4, VAR_2);
}
