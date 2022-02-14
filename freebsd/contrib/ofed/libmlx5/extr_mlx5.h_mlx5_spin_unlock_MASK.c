
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_spinlock {scalar_t__ in_use; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct mlx5_spinlock *VAR_1)
{
 if (!VAR_0)
  return FUNC_0(&VAR_1->lock);

 VAR_1->in_use = 0;

 return 0;
}
