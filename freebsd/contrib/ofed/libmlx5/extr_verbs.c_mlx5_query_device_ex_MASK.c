
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int caps; } ;
struct TYPE_5__ {int rx_hash_function; int rx_hash_fields_mask; } ;
struct mlx5_query_device_ex_resp {int cqe_comp_caps; scalar_t__ support_multi_pkt_send_wqe; TYPE_3__ packet_pacing_caps; TYPE_2__ rss_caps; int tso_caps; int ibv_resp; int ibv_cmd; } ;
struct mlx5_query_device_ex {int cqe_comp_caps; scalar_t__ support_multi_pkt_send_wqe; TYPE_3__ packet_pacing_caps; TYPE_2__ rss_caps; int tso_caps; int ibv_resp; int ibv_cmd; } ;
struct mlx5_context {int cmds_supp_uhw; int cqe_comp_caps; int vendor_cap_flags; } ;
struct ibv_query_device_ex_input {int dummy; } ;
struct ibv_device_attr {int fw_ver; } ;
struct TYPE_4__ {int rx_hash_function; int rx_hash_fields_mask; } ;
struct ibv_device_attr_ex {struct ibv_device_attr orig_attr; int packet_pacing_caps; TYPE_1__ rss_caps; int tso_caps; } ;
struct ibv_context {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_context*,struct ibv_query_device_ex_input const*,struct ibv_device_attr_ex*,size_t,int*,int *,int,int,int *,int,int) ;
 int FUNC_1 (struct mlx5_query_device_ex_resp*,int ,int) ;
 int FUNC_2 (int ,int,char*,unsigned int,unsigned int,unsigned int) ;
 struct mlx5_context* FUNC_3 (struct ibv_context*) ;

int FUNC_4(struct ibv_context *VAR_2,
    const struct ibv_query_device_ex_input *VAR_3,
    struct ibv_device_attr_ex *VAR_4,
    size_t VAR_5)
{
 struct mlx5_context *VAR_6 = FUNC_3(VAR_2);
 struct mlx5_query_device_ex_resp VAR_7;
 struct mlx5_query_device_ex VAR_8;
 struct ibv_device_attr *VAR_9;
 uint64_t VAR_10;
 unsigned VAR_11;
 unsigned VAR_12;
 unsigned VAR_13;
 int VAR_14;
 int VAR_15 = VAR_6->cmds_supp_uhw &
  VAR_0;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_14 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
          &VAR_10,
          &VAR_8.ibv_cmd, sizeof(VAR_8.ibv_cmd), sizeof(VAR_8),
          &VAR_7.ibv_resp, sizeof(VAR_7.ibv_resp),
          VAR_15 ? sizeof(VAR_7) : sizeof(VAR_7.ibv_resp));
 if (VAR_14)
  return VAR_14;

 VAR_4->tso_caps = VAR_7.tso_caps;
 VAR_4->rss_caps.rx_hash_fields_mask = VAR_7.rss_caps.rx_hash_fields_mask;
 VAR_4->rss_caps.rx_hash_function = VAR_7.rss_caps.rx_hash_function;
 VAR_4->packet_pacing_caps = VAR_7.packet_pacing_caps.caps;

 if (VAR_7.support_multi_pkt_send_wqe)
  VAR_6->vendor_cap_flags |= VAR_1;

 VAR_6->cqe_comp_caps = VAR_7.cqe_comp_caps;

 VAR_12 = (VAR_10 >> 32) & 0xffff;
 VAR_13 = (VAR_10 >> 16) & 0xffff;
 VAR_11 = VAR_10 & 0xffff;
 VAR_9 = &VAR_4->orig_attr;
 FUNC_2(VAR_9->fw_ver, sizeof(VAR_9->fw_ver), "%d.%d.%04d",
   VAR_12, VAR_13, VAR_11);

 return 0;
}
