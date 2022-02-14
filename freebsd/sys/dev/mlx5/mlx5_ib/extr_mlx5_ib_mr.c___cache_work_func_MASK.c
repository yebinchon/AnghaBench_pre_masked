
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_mr_cache {int wq; scalar_t__ last_add; struct mlx5_cache_ent* ent; scalar_t__ stopped; } ;
struct mlx5_ib_dev {int fill_delay; struct mlx5_mr_cache cache; } ;
struct mlx5_cache_ent {int cur; int limit; int dwork; int work; int order; struct mlx5_ib_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_ib_dev*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mlx5_ib_dev*,int ) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct mlx5_ib_dev*,int,int) ;
 int FUNC_9 (struct mlx5_mr_cache*) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct mlx5_cache_ent *VAR_3)
{
 struct mlx5_ib_dev *VAR_4 = VAR_3->dev;
 struct mlx5_mr_cache *VAR_5 = &VAR_4->cache;
 int VAR_6 = FUNC_5(VAR_4, VAR_3->order);
 int VAR_7;

 if (VAR_5->stopped)
  return;

 VAR_3 = &VAR_4->cache.ent[VAR_6];
 if (VAR_3->cur < 2 * VAR_3->limit && !VAR_4->fill_delay) {
  VAR_7 = FUNC_0(VAR_4, VAR_6, 1);
  if (VAR_3->cur < 2 * VAR_3->limit) {
   if (VAR_7 == -VAR_0) {
    FUNC_1(VAR_4, "returned eagain, order %d\n",
         VAR_6 + 2);
    FUNC_6(VAR_5->wq, &VAR_3->dwork,
         FUNC_3(3));
   } else if (VAR_7) {
    FUNC_2(VAR_4, "command failed order %d, err %d\n",
          VAR_6 + 2, VAR_7);
    FUNC_6(VAR_5->wq, &VAR_3->dwork,
         FUNC_3(1000));
   } else {
    FUNC_7(VAR_5->wq, &VAR_3->work);
   }
  }
 } else if (VAR_3->cur > 2 * VAR_3->limit) {
  if (!FUNC_4() && !FUNC_9(VAR_5) &&
      FUNC_10(VAR_2, VAR_5->last_add + 300 * VAR_1)) {
   FUNC_8(VAR_4, VAR_6, 1);
   if (VAR_3->cur > VAR_3->limit)
    FUNC_7(VAR_5->wq, &VAR_3->work);
  } else {
   FUNC_6(VAR_5->wq, &VAR_3->dwork, 300 * VAR_1);
  }
 }
}
