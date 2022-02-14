
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int * dump_data; int dump_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct mlx5_core_dev *VAR_2)
{

 FUNC_1(&VAR_2->dump_lock, VAR_0);
 FUNC_0(VAR_2->dump_data, VAR_1);
 VAR_2->dump_data = ((void*)0);
}
