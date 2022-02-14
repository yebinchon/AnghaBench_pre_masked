
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_dev {int dummy; } ;
struct TYPE_3__ {int fw_icm; } ;
struct TYPE_4__ {TYPE_1__ fw; } ;


 int FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int ,int ) ;
 int FUNC_2 (struct mlx4_dev*) ;
 TYPE_2__* FUNC_3 (struct mlx4_dev*) ;

__attribute__((used)) static void FUNC_4(struct mlx4_dev *VAR_0)
{
 if (!FUNC_2(VAR_0)) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0, FUNC_3(VAR_0)->fw.fw_icm, 0);
 }
}
