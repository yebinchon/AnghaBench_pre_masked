
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_2__ {int catas_wq; int catas_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

int FUNC_2(struct mlx4_dev *VAR_2)
{
 FUNC_0(&VAR_2->persist->catas_work, VAR_1);
 VAR_2->persist->catas_wq = FUNC_1("mlx4_health");
 if (!VAR_2->persist->catas_wq)
  return -VAR_0;

 return 0;
}
