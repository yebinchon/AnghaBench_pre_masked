
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct net_dim_cq_moder {int pkts; int usec; } ;
struct TYPE_5__ {int mcq; } ;
struct TYPE_4__ {int profile_ix; scalar_t__ state; int mode; int work; } ;
struct mlx5e_rq {TYPE_2__ cq; int mtx; TYPE_1__ dim; } ;
struct TYPE_6__ {int rx_cq_moderation_mode; int rx_cq_moderation_pkts; int rx_cq_moderation_usec; } ;
struct mlx5e_priv {TYPE_3__ params; int mdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int *,int ,int ,int ) ;
 int FUNC_4 (struct mlx5e_priv*,int ,struct net_dim_cq_moder*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct mlx5e_priv *VAR_7, struct mlx5e_rq *VAR_8)
{

 if (FUNC_0(VAR_7->mdev, VAR_6)) {
  uint8_t VAR_9;
  uint8_t VAR_10;
  int VAR_11;

  switch (VAR_7->params.rx_cq_moderation_mode) {
  case 0:
  case 2:
   VAR_9 = VAR_2;
   VAR_10 = VAR_5;
   break;
  default:
   VAR_9 = VAR_1;
   VAR_10 = VAR_4;
   break;
  }


  FUNC_5(&VAR_8->mtx);
  VAR_8->dim.mode = VAR_3;
  FUNC_6(&VAR_8->mtx);


  FUNC_1(&VAR_8->dim.work);

  if (VAR_7->params.rx_cq_moderation_mode >= 2) {
   struct net_dim_cq_moder VAR_12;

   FUNC_4(VAR_7, VAR_10, &VAR_12);

   VAR_11 = FUNC_3(VAR_7->mdev, &VAR_8->cq.mcq,
       VAR_12.usec, VAR_12.pkts, VAR_9);


   FUNC_5(&VAR_8->mtx);
   VAR_8->dim.mode = VAR_10;
   VAR_8->dim.state = 0;
   VAR_8->dim.profile_ix = VAR_0;
   FUNC_6(&VAR_8->mtx);
  } else {
   VAR_11 = FUNC_3(VAR_7->mdev, &VAR_8->cq.mcq,
       VAR_7->params.rx_cq_moderation_usec,
       VAR_7->params.rx_cq_moderation_pkts,
       VAR_9);
  }
  return (VAR_11);
 }

 return (FUNC_2(VAR_7->mdev, &VAR_8->cq.mcq,
     VAR_7->params.rx_cq_moderation_usec,
     VAR_7->params.rx_cq_moderation_pkts));
}
