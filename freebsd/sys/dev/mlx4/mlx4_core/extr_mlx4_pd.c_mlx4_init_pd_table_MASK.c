
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_priv {int pd_bitmap; } ;
struct TYPE_2__ {int reserved_pds; int num_pds; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(&VAR_2->pd_bitmap, VAR_1->caps.num_pds,
    (1 << VAR_0) - 1,
     VAR_1->caps.reserved_pds, 0);
}
