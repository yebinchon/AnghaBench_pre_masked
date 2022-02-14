
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ena_com_dev_get_features_ctx {int ind_table; int llq; int hw_hints; int offload; int aenq; int max_queues; int max_queue_ext; int dev_attr; } ;
struct ena_com_dev {int supported_features; int tx_max_header_size; } ;
struct TYPE_4__ {int max_tx_header_size; } ;
struct TYPE_6__ {int supported_features; scalar_t__ version; int max_header_size; TYPE_1__ max_queue_ext; } ;
struct TYPE_5__ {TYPE_3__ ind_table; TYPE_3__ llq; TYPE_3__ hw_hints; TYPE_3__ offload; TYPE_3__ aenq; TYPE_3__ max_queue; TYPE_3__ max_queue_ext; TYPE_3__ dev_attr; } ;
struct ena_admin_get_feat_resp {TYPE_2__ u; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,scalar_t__) ;
 int FUNC_2 (int *,TYPE_3__*,int) ;
 int FUNC_3 (int *,int,int) ;

int FUNC_4(struct ena_com_dev *VAR_11,
         struct ena_com_dev_get_features_ctx *VAR_12)
{
 struct ena_admin_get_feat_resp VAR_13;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_11, &VAR_13,
     VAR_2, 0);
 if (VAR_14)
  return VAR_14;

 FUNC_2(&VAR_12->dev_attr, &VAR_13.u.dev_attr,
        sizeof(VAR_13.u.dev_attr));
 VAR_11->supported_features = VAR_13.u.dev_attr.supported_features;

 if (VAR_11->supported_features & FUNC_0(VAR_5)) {
  VAR_14 = FUNC_1(VAR_11, &VAR_13,
      VAR_5,
      VAR_10);
  if (VAR_14)
   return VAR_14;

  if (VAR_13.u.max_queue_ext.version != VAR_10)
   return -VAR_0;

  FUNC_2(&VAR_12->max_queue_ext, &VAR_13.u.max_queue_ext,
         sizeof(VAR_13.u.max_queue_ext));
  VAR_11->tx_max_header_size =
   VAR_13.u.max_queue_ext.max_queue_ext.max_tx_header_size;
 } else {
  VAR_14 = FUNC_1(VAR_11, &VAR_13,
      VAR_6, 0);
  FUNC_2(&VAR_12->max_queues, &VAR_13.u.max_queue,
         sizeof(VAR_13.u.max_queue));
  VAR_11->tx_max_header_size =
   VAR_13.u.max_queue.max_header_size;

  if (VAR_14)
   return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_11, &VAR_13,
     VAR_1, 0);
 if (VAR_14)
  return VAR_14;

 FUNC_2(&VAR_12->aenq, &VAR_13.u.aenq,
        sizeof(VAR_13.u.aenq));

 VAR_14 = FUNC_1(VAR_11, &VAR_13,
     VAR_8, 0);
 if (VAR_14)
  return VAR_14;

 FUNC_2(&VAR_12->offload, &VAR_13.u.offload,
        sizeof(VAR_13.u.offload));




 VAR_14 = FUNC_1(VAR_11, &VAR_13, VAR_3, 0);

 if (!VAR_14)
  FUNC_2(&VAR_12->hw_hints, &VAR_13.u.hw_hints,
         sizeof(VAR_13.u.hw_hints));
 else if (VAR_14 == VAR_9)
  FUNC_3(&VAR_12->hw_hints, 0x0, sizeof(VAR_12->hw_hints));
 else
  return VAR_14;

 VAR_14 = FUNC_1(VAR_11, &VAR_13, VAR_4, 0);
 if (!VAR_14)
  FUNC_2(&VAR_12->llq, &VAR_13.u.llq,
         sizeof(VAR_13.u.llq));
 else if (VAR_14 == VAR_9)
  FUNC_3(&VAR_12->llq, 0x0, sizeof(VAR_12->llq));
 else
  return VAR_14;

 VAR_14 = FUNC_1(VAR_11, &VAR_13,
     VAR_7, 0);
 if (!VAR_14)
  FUNC_2(&VAR_12->ind_table, &VAR_13.u.ind_table,
         sizeof(VAR_13.u.ind_table));
 else if (VAR_14 == VAR_9)
  FUNC_3(&VAR_12->ind_table, 0x0,
         sizeof(VAR_12->ind_table));
 else
  return VAR_14;

 return 0;
}
