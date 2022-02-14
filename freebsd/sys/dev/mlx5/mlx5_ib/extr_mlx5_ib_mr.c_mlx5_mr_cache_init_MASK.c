
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_mr_cache {int wq; struct mlx5_cache_ent* ent; } ;
struct mlx5_ib_dev {TYPE_3__* mdev; int delay_timer; int slow_path_mutex; struct mlx5_mr_cache cache; } ;
struct mlx5_cache_ent {int order; int limit; int work; int dwork; struct mlx5_ib_dev* dev; int lock; int head; } ;
struct TYPE_6__ {TYPE_2__* profile; } ;
struct TYPE_5__ {int mask; TYPE_1__* mr_cache; } ;
struct TYPE_4__ {int limit; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct mlx5_ib_dev*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ,unsigned long) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mlx5_ib_dev *VAR_7)
{
 struct mlx5_mr_cache *VAR_8 = &VAR_7->cache;
 struct mlx5_cache_ent *VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_5(&VAR_7->slow_path_mutex);
 VAR_8->wq = FUNC_3("mkey_cache", VAR_3);
 if (!VAR_8->wq) {
  FUNC_4(VAR_7, "failed to create work queue\n");
  return -VAR_0;
 }

 FUNC_7(&VAR_7->delay_timer, VAR_5, (unsigned long)VAR_7);
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_1(&VAR_8->ent[VAR_11].head);
  FUNC_8(&VAR_8->ent[VAR_11].lock);

  VAR_9 = &VAR_8->ent[VAR_11];
  FUNC_1(&VAR_9->head);
  FUNC_8(&VAR_9->lock);
  VAR_9->order = VAR_11 + 2;
  VAR_9->dev = VAR_7;

  if (VAR_7->mdev->profile->mask & VAR_2)
   VAR_10 = VAR_7->mdev->profile->mr_cache[VAR_11].limit;
  else
   VAR_10 = 0;

  FUNC_2(&VAR_9->work, VAR_4);
  FUNC_0(&VAR_9->dwork, VAR_6);
  VAR_9->limit = VAR_10;
  FUNC_6(VAR_8->wq, &VAR_9->work);
 }

 return 0;
}
