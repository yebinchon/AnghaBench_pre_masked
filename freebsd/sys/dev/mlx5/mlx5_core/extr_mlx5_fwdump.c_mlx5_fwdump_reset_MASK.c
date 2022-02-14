
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dump_valid; int dump_lock; scalar_t__ dump_copyout; int * dump_data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct mlx5_core_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = 0;
 FUNC_1(&VAR_1->dump_lock);
 if (VAR_1->dump_data != ((void*)0)) {
  while (VAR_1->dump_copyout) {
   FUNC_0(&VAR_1->dump_copyout, &VAR_1->dump_lock,
       0, "mlx5fwr", 0);
  }
  VAR_1->dump_valid = 0;
 } else {
  VAR_2 = VAR_0;
 }
 FUNC_2(&VAR_1->dump_lock);
 return (VAR_2);
}
