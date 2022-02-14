
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_mr_cache {int wq; struct mlx5_cache_ent* ent; } ;
struct mlx5_ib_mr {int list; int order; } ;
struct mlx5_ib_dev {struct mlx5_mr_cache cache; } ;
struct mlx5_cache_ent {int cur; int limit; int work; int lock; int head; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*,int ,int) ;
 int FUNC_2 (struct mlx5_ib_dev*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mlx5_ib_dev *VAR_1, struct mlx5_ib_mr *VAR_2)
{
 struct mlx5_mr_cache *VAR_3 = &VAR_1->cache;
 struct mlx5_cache_ent *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2->order);
 if (VAR_6 < 0 || VAR_6 >= VAR_0) {
  FUNC_1(VAR_1, "order %d, cache index %d\n", VAR_2->order, VAR_6);
  return;
 }
 VAR_4 = &VAR_3->ent[VAR_6];
 FUNC_4(&VAR_4->lock);
 FUNC_0(&VAR_2->list, &VAR_4->head);
 VAR_4->cur++;
 if (VAR_4->cur > 2 * VAR_4->limit)
  VAR_5 = 1;
 FUNC_5(&VAR_4->lock);

 if (VAR_5)
  FUNC_3(VAR_3->wq, &VAR_4->work);
}
