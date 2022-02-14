
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dump_rege; int dump_lock; scalar_t__ dump_copyout; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct mlx5_core_dev *VAR_1)
{

 FUNC_3(&VAR_1->dump_lock);
 while (VAR_1->dump_copyout)
  FUNC_2(&VAR_1->dump_copyout, &VAR_1->dump_lock, 0, "mlx5fwc", 0);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->dump_lock);
 FUNC_0(VAR_1->dump_rege, VAR_0);
}
