
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_qp {int rss_qp; int verbs_qp; } ;
struct mlx5_create_qp_resp_ex {int ibv_resp; } ;
struct mlx5_create_qp_ex_rss {int rx_key_len; int ibv_cmd; int rx_hash_key; int rx_hash_function; int rx_hash_fields_mask; } ;
struct TYPE_2__ {int rx_hash_key_len; int rx_hash_key; int rx_hash_function; int rx_hash_fields_mask; } ;
struct ibv_qp_init_attr_ex {TYPE_1__ rx_hash_conf; } ;
struct ibv_context {int dummy; } ;
typedef int resp ;
typedef int cmd_ex_rss ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_context*,int *,int,struct ibv_qp_init_attr_ex*,int *,int,int,int *,int,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ibv_context *VAR_2,
     struct ibv_qp_init_attr_ex *VAR_3,
     struct mlx5_qp *VAR_4)
{
 struct mlx5_create_qp_ex_rss VAR_5 = {};
 struct mlx5_create_qp_resp_ex VAR_6 = {};
 int VAR_7;

 if (VAR_3->rx_hash_conf.rx_hash_key_len > sizeof(VAR_5.rx_hash_key)) {
  VAR_1 = VAR_0;
  return VAR_1;
 }

 VAR_5.rx_hash_fields_mask = VAR_3->rx_hash_conf.rx_hash_fields_mask;
 VAR_5.rx_hash_function = VAR_3->rx_hash_conf.rx_hash_function;
 VAR_5.rx_key_len = VAR_3->rx_hash_conf.rx_hash_key_len;
 FUNC_1(VAR_5.rx_hash_key, VAR_3->rx_hash_conf.rx_hash_key,
   VAR_3->rx_hash_conf.rx_hash_key_len);

 VAR_7 = FUNC_0(VAR_2, &VAR_4->verbs_qp,
         sizeof(VAR_4->verbs_qp), VAR_3,
         &VAR_5.ibv_cmd, sizeof(VAR_5.ibv_cmd),
         sizeof(VAR_5), &VAR_6.ibv_resp,
         sizeof(VAR_6.ibv_resp), sizeof(VAR_6));
 if (VAR_7)
  return VAR_7;

 VAR_4->rss_qp = 1;
 return 0;
}
