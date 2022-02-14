
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clock_offset; int clock_bar; } ;
struct mlx4_priv {TYPE_1__ fw; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_clock_params {int size; int offset; int bar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_3,
       struct mlx4_clock_params *VAR_4)
{
 struct mlx4_priv *VAR_5 = FUNC_1(VAR_3);

 if (FUNC_0(VAR_3))
  return -VAR_1;

 if (!VAR_4)
  return -VAR_0;

 VAR_4->bar = VAR_5->fw.clock_bar;
 VAR_4->offset = VAR_5->fw.clock_offset;
 VAR_4->size = VAR_2;

 return 0;
}
