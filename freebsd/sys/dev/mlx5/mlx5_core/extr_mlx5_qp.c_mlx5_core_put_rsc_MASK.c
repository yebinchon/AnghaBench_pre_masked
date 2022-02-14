
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_rsc_common {int free; int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx5_core_rsc_common *VAR_0)
{
 if (FUNC_0(&VAR_0->refcount))
  FUNC_1(&VAR_0->free);
}
