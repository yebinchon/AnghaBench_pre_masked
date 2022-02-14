
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_uar {int index; int pfn; int * map; } ;
struct TYPE_5__ {int uar_page_size; } ;
struct mlx4_dev {TYPE_2__* persist; TYPE_1__ caps; } ;
struct TYPE_7__ {int bitmap; } ;
struct TYPE_8__ {TYPE_3__ uar_table; } ;
struct TYPE_6__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 TYPE_4__* FUNC_2 (struct mlx4_dev*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct mlx4_dev *VAR_2, struct mlx4_uar *VAR_3)
{
 int VAR_4;

 VAR_3->index = FUNC_0(&FUNC_2(VAR_2)->uar_table.bitmap);
 if (VAR_3->index == -1)
  return -VAR_0;

 if (FUNC_1(VAR_2))
  VAR_4 = VAR_3->index % ((int)FUNC_3(VAR_2->persist->pdev,
            2) /
           VAR_2->caps.uar_page_size);
 else
  VAR_4 = VAR_3->index;
 VAR_3->pfn = (FUNC_4(VAR_2->persist->pdev, 2) >> VAR_1)
      + VAR_4;
 VAR_3->map = ((void*)0);
 return 0;
}
