
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_cq_moderation_mode; int tx_cq_moderation_pkts; int tx_cq_moderation_usec; int log_sq_size; } ;
struct mlx5e_priv {int mdev; TYPE_1__ params; } ;
struct mlx5e_cq_param {void* cqc; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_cq_param*) ;

__attribute__((used)) static void
FUNC_3(struct mlx5e_priv *VAR_7,
    struct mlx5e_cq_param *VAR_8)
{
 void *VAR_9 = VAR_8->cqc;

 FUNC_1(VAR_9, VAR_9, VAR_6, VAR_7->params.log_sq_size);
 FUNC_1(VAR_9, VAR_9, VAR_3, VAR_7->params.tx_cq_moderation_usec);
 FUNC_1(VAR_9, VAR_9, VAR_2, VAR_7->params.tx_cq_moderation_pkts);

 switch (VAR_7->params.tx_cq_moderation_mode) {
 case 0:
  FUNC_1(VAR_9, VAR_9, VAR_4, VAR_1);
  break;
 default:
  if (FUNC_0(VAR_7->mdev, VAR_5))
   FUNC_1(VAR_9, VAR_9, VAR_4, VAR_0);
  else
   FUNC_1(VAR_9, VAR_9, VAR_4, VAR_1);
  break;
 }

 FUNC_2(VAR_7, VAR_8);
}
