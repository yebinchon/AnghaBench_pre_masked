
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pg_wq; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(struct mlx5_core_dev *VAR_1)
{
 VAR_1->priv.pg_wq = FUNC_0("mlx5_page_allocator");
 if (!VAR_1->priv.pg_wq)
  return -VAR_0;

 return 0;
}
