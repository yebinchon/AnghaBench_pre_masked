
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wq {unsigned int head; unsigned int tail; unsigned int max_post; } ;
struct mlx5_cq {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5_wq *VAR_0, int VAR_1, struct mlx5_cq *VAR_2)
{
 unsigned VAR_3;

 VAR_3 = VAR_0->head - VAR_0->tail;
 if (VAR_3 + VAR_1 < VAR_0->max_post)
  return 0;

 FUNC_0(&VAR_2->lock);
 VAR_3 = VAR_0->head - VAR_0->tail;
 FUNC_1(&VAR_2->lock);

 return VAR_3 + VAR_1 >= VAR_0->max_post;
}
