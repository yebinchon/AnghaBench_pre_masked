
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_2__ {int * catas_wq; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mlx4_dev *VAR_0)
{
 if (VAR_0->persist->catas_wq) {
  FUNC_0(VAR_0->persist->catas_wq);
  VAR_0->persist->catas_wq = ((void*)0);
 }
}
