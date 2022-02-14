
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int mcq; } ;
struct mlx5e_sq {TYPE_1__ cq; } ;
struct TYPE_4__ {int tx_cq_moderation_mode; int tx_cq_moderation_pkts; int tx_cq_moderation_usec; } ;
struct mlx5e_priv {TYPE_2__ params; int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct mlx5e_priv *VAR_3, struct mlx5e_sq *VAR_4)
{

 if (FUNC_0(VAR_3->mdev, VAR_2)) {
  uint8_t VAR_5;

  switch (VAR_3->params.tx_cq_moderation_mode) {
  case 0:
  case 2:
   VAR_5 = VAR_1;
   break;
  default:
   VAR_5 = VAR_0;
   break;
  }

  return (FUNC_2(VAR_3->mdev, &VAR_4->cq.mcq,
      VAR_3->params.tx_cq_moderation_usec,
      VAR_3->params.tx_cq_moderation_pkts,
      VAR_5));
 }

 return (FUNC_1(VAR_3->mdev, &VAR_4->cq.mcq,
     VAR_3->params.tx_cq_moderation_usec,
     VAR_3->params.tx_cq_moderation_pkts));
}
