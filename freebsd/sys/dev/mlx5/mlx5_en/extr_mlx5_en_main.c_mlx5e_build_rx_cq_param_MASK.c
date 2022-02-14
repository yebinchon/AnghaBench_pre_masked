
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_dim_cq_moder {int usec; int pkts; } ;
struct TYPE_2__ {int log_rq_size; int rx_cq_moderation_mode; int rx_cq_moderation_usec; int rx_cq_moderation_pkts; scalar_t__ cqe_zipping_en; } ;
struct mlx5e_priv {int mdev; TYPE_1__ params; } ;
struct mlx5e_cq_param {void* cqc; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,void*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_cq_param*) ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_cq_param*) ;
 int FUNC_4 (struct mlx5e_priv*,int ,struct net_dim_cq_moder*) ;

__attribute__((used)) static void
FUNC_5(struct mlx5e_priv *VAR_12,
    struct mlx5e_cq_param *VAR_13)
{
 struct net_dim_cq_moder VAR_14;
 void *VAR_15 = VAR_13->cqc;
 if (VAR_12->params.cqe_zipping_en) {
  FUNC_1(VAR_15, VAR_15, VAR_11, VAR_0);
  FUNC_1(VAR_15, VAR_15, VAR_9, 1);
 }

 FUNC_1(VAR_15, VAR_15, VAR_10, VAR_12->params.log_rq_size);

 switch (VAR_12->params.rx_cq_moderation_mode) {
 case 0:
  FUNC_1(VAR_15, VAR_15, VAR_6, VAR_12->params.rx_cq_moderation_usec);
  FUNC_1(VAR_15, VAR_15, VAR_5, VAR_12->params.rx_cq_moderation_pkts);
  FUNC_1(VAR_15, VAR_15, VAR_7, VAR_2);
  break;
 case 1:
  FUNC_1(VAR_15, VAR_15, VAR_6, VAR_12->params.rx_cq_moderation_usec);
  FUNC_1(VAR_15, VAR_15, VAR_5, VAR_12->params.rx_cq_moderation_pkts);
  if (FUNC_0(VAR_12->mdev, VAR_8))
   FUNC_1(VAR_15, VAR_15, VAR_7, VAR_1);
  else
   FUNC_1(VAR_15, VAR_15, VAR_7, VAR_2);
  break;
 case 2:
  FUNC_4(VAR_12, VAR_4, &VAR_14);
  FUNC_1(VAR_15, VAR_15, VAR_6, VAR_14.usec);
  FUNC_1(VAR_15, VAR_15, VAR_5, VAR_14.pkts);
  FUNC_1(VAR_15, VAR_15, VAR_7, VAR_2);
  break;
 case 3:
  FUNC_4(VAR_12, VAR_3, &VAR_14);
  FUNC_1(VAR_15, VAR_15, VAR_6, VAR_14.usec);
  FUNC_1(VAR_15, VAR_15, VAR_5, VAR_14.pkts);
  if (FUNC_0(VAR_12->mdev, VAR_8))
   FUNC_1(VAR_15, VAR_15, VAR_7, VAR_1);
  else
   FUNC_1(VAR_15, VAR_15, VAR_7, VAR_2);
  break;
 default:
  break;
 }

 FUNC_3(VAR_12, VAR_13);

 FUNC_2(VAR_12, VAR_13);
}
