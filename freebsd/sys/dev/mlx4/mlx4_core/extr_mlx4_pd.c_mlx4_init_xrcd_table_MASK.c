
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_priv {int xrcd_bitmap; } ;
struct TYPE_2__ {scalar_t__ reserved_xrcds; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int FUNC_0 (int *,int,int,scalar_t__,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->xrcd_bitmap, (1 << 16),
    (1 << 16) - 1, VAR_0->caps.reserved_xrcds + 1, 0);
}
