
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_mr_table {int lock; int tree; } ;
struct mlx5_mr_cache {scalar_t__ last_add; struct mlx5_cache_ent* ent; } ;
struct TYPE_6__ {int key; } ;
struct mlx5_ib_mr {TYPE_3__ mmkey; int list; int out; int order; struct mlx5_ib_dev* dev; } ;
struct mlx5_ib_dev {int fill_delay; TYPE_2__* mdev; int delay_timer; struct mlx5_mr_cache cache; } ;
struct mlx5_cache_ent {int lock; int size; int cur; int head; int pending; } ;
struct TYPE_4__ {int mkey_lock; int mkey_key; struct mlx5_mr_table mr_table; } ;
struct TYPE_5__ {TYPE_1__ priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mlx5_ib_mr*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct mlx5_ib_dev*,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int *,int ,TYPE_3__*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(int VAR_4, void *VAR_5)
{
 struct mlx5_ib_mr *VAR_6 = VAR_5;
 struct mlx5_ib_dev *VAR_7 = VAR_6->dev;
 struct mlx5_mr_cache *VAR_8 = &VAR_7->cache;
 int VAR_9 = FUNC_7(VAR_7, VAR_6->order);
 struct mlx5_cache_ent *VAR_10 = &VAR_8->ent[VAR_9];
 u8 VAR_11;
 unsigned long VAR_12;
 struct mlx5_mr_table *VAR_13 = &VAR_7->mdev->priv.mr_table;
 int VAR_14;

 FUNC_10(&VAR_10->lock, VAR_12);
 VAR_10->pending--;
 FUNC_11(&VAR_10->lock, VAR_12);
 if (VAR_4) {
  FUNC_3(VAR_7, "async reg mr failed. status %d\n", VAR_4);
  FUNC_1(VAR_6);
  VAR_7->fill_delay = 1;
  FUNC_6(&VAR_7->delay_timer, VAR_2 + VAR_0);
  return;
 }

 FUNC_10(&VAR_7->mdev->priv.mkey_lock, VAR_12);
 VAR_11 = VAR_7->mdev->priv.mkey_key++;
 FUNC_11(&VAR_7->mdev->priv.mkey_lock, VAR_12);
 VAR_6->mmkey.key = FUNC_4(FUNC_0(VAR_1, VAR_6->out, VAR_3)) | VAR_11;

 VAR_8->last_add = VAR_2;

 FUNC_10(&VAR_10->lock, VAR_12);
 FUNC_2(&VAR_6->list, &VAR_10->head);
 VAR_10->cur++;
 VAR_10->size++;
 FUNC_11(&VAR_10->lock, VAR_12);

 FUNC_10(&VAR_13->lock, VAR_12);
 VAR_14 = FUNC_9(&VAR_13->tree, FUNC_5(VAR_6->mmkey.key),
    &VAR_6->mmkey);
 if (VAR_14)
  FUNC_8("Error inserting to mkey tree. 0x%x\n", -VAR_14);
 FUNC_11(&VAR_13->lock, VAR_12);
}
