
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_cq_moderation_mode; int num_tc; int hw_lro_en; int cqe_zipping_en; int num_channels; int channels_rsss; scalar_t__ default_vlan_prio; int lro_wqe_sz; int tx_min_inline_mode; int tx_max_inline; scalar_t__ rx_hash_log_tbl_sz; int min_rx_wqes; int tx_cq_moderation_pkts; int tx_cq_moderation_usec; int rx_cq_moderation_pkts; int rx_cq_moderation_usec; int log_rq_size; int log_sq_size; } ;
struct mlx5e_priv {int counter_set_id; int num_tc; int set_rx_mode_work; int update_carrier_work; int update_stats_work; TYPE_1__ params; scalar_t__ default_vlan_prio; scalar_t__ queue_mapping_channel_mask; scalar_t__ order_base_2_num_channels; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_10 ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct mlx5_core_dev *VAR_14,
    struct mlx5e_priv *VAR_15,
    int VAR_16)
{
 int VAR_17;





 VAR_15->params.log_sq_size =
     VAR_1;
 VAR_15->params.log_rq_size =
     VAR_0;
 VAR_15->params.rx_cq_moderation_usec =
     FUNC_1(VAR_14, VAR_10) ?
     VAR_6 :
     VAR_5;
 VAR_15->params.rx_cq_moderation_mode =
     FUNC_1(VAR_14, VAR_10) ? 1 : 0;
 VAR_15->params.rx_cq_moderation_pkts =
     VAR_4;
 VAR_15->params.tx_cq_moderation_usec =
     VAR_9;
 VAR_15->params.tx_cq_moderation_pkts =
     VAR_8;
 VAR_15->params.min_rx_wqes =
     VAR_3;
 VAR_15->params.rx_hash_log_tbl_sz =
     (FUNC_4(VAR_16) >
     VAR_7) ?
     FUNC_4(VAR_16) :
     VAR_7;
 VAR_15->params.num_tc = 1;
 VAR_15->params.default_vlan_prio = 0;
 VAR_15->counter_set_id = -1;
 VAR_15->params.tx_max_inline = FUNC_3(VAR_14);

 VAR_17 = FUNC_2(VAR_14, &VAR_15->params.tx_min_inline_mode);
 if (VAR_17)
  return (VAR_17);





 VAR_15->params.hw_lro_en = 0;
 VAR_15->params.lro_wqe_sz = VAR_2;






 VAR_15->params.cqe_zipping_en = 0;

 VAR_15->mdev = VAR_14;
 VAR_15->params.num_channels = VAR_16;
 VAR_15->params.channels_rsss = 1;
 VAR_15->order_base_2_num_channels = FUNC_4(VAR_16);
 VAR_15->queue_mapping_channel_mask =
     FUNC_5(VAR_16) - 1;
 VAR_15->num_tc = VAR_15->params.num_tc;
 VAR_15->default_vlan_prio = VAR_15->params.default_vlan_prio;

 FUNC_0(&VAR_15->update_stats_work, VAR_13);
 FUNC_0(&VAR_15->update_carrier_work, VAR_12);
 FUNC_0(&VAR_15->set_rx_mode_work, VAR_11);

 return (0);
}
