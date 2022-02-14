
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_wq {unsigned int head; unsigned int tail; unsigned int max_post; } ;
struct mlx4_ib_cq {int lock; } ;
struct ib_cq {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx4_ib_cq* FUNC_3 (struct ib_cq*) ;

__attribute__((used)) static int FUNC_4(struct mlx4_ib_wq *VAR_0, int VAR_1, struct ib_cq *VAR_2)
{
 unsigned VAR_3;
 struct mlx4_ib_cq *VAR_4;

 VAR_3 = VAR_0->head - VAR_0->tail;
 if (FUNC_0(VAR_3 + VAR_1 < VAR_0->max_post))
  return 0;

 VAR_4 = FUNC_3(VAR_2);
 FUNC_1(&VAR_4->lock);
 VAR_3 = VAR_0->head - VAR_0->tail;
 FUNC_2(&VAR_4->lock);

 return VAR_3 + VAR_1 >= VAR_0->max_post;
}
