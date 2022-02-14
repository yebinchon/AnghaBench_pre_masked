
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_3__ {int sensor_warning_lsb; int sensor_warning_msb; } ;
struct TYPE_4__ {TYPE_1__ temp_warning; } ;
struct mlx5_eqe {TYPE_2__ data; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct mlx5_core_dev *VAR_0, struct mlx5_eqe *VAR_1)
{

 FUNC_1(VAR_0,
     "High temperature on sensors with bit set %#jx %#jx\n",
     (uintmax_t)FUNC_0(VAR_1->data.temp_warning.sensor_warning_msb),
     (uintmax_t)FUNC_0(VAR_1->data.temp_warning.sensor_warning_lsb));
}
