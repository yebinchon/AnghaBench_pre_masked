
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mpt_bitmap; } ;
struct mlx4_priv {TYPE_1__ mr_table; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

void FUNC_2(struct mlx4_dev *VAR_1, u32 VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(&VAR_3->mr_table.mpt_bitmap, VAR_2, VAR_0);
}
