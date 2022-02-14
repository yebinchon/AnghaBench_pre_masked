
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_uars; int reserved_uars; } ;
struct mlx4_dev {TYPE_2__ caps; int uar_page_shift; } ;
struct TYPE_4__ {int bitmap; } ;
struct TYPE_6__ {TYPE_1__ uar_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int ,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*,int ) ;
 int FUNC_2 (struct mlx4_dev*,char*,...) ;
 int FUNC_3 (struct mlx4_dev*) ;
 TYPE_3__* FUNC_4 (struct mlx4_dev*) ;

int FUNC_5(struct mlx4_dev *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_1, "uar_page_shift = %d", VAR_1->uar_page_shift);
 FUNC_1(VAR_1, "Effective reserved_uars=%d", VAR_1->caps.reserved_uars);

 if (VAR_1->caps.num_uars <= VAR_2) {
  FUNC_2(VAR_1, "Only %d UAR pages (need more than %d)\n",
    VAR_1->caps.num_uars, VAR_2);
  FUNC_2(VAR_1, "Increase firmware log2_uar_bar_megabytes?\n");
  return -VAR_0;
 }

 return FUNC_0(&FUNC_4(VAR_1)->uar_table.bitmap,
    VAR_1->caps.num_uars, VAR_1->caps.num_uars - 1,
    VAR_1->caps.reserved_uars, 0);
}
