
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ fatal_error; } ;
struct TYPE_4__ {TYPE_1__ health; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_2)
{
 u8 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 == VAR_0) {
  if (VAR_2->priv.health.fatal_error != VAR_1)
   FUNC_0(VAR_2,
       "NIC SW reset is already progress\n");
  else
   FUNC_0(VAR_2,
       "Communication with FW over the PCI link is down\n");
 } else {
  FUNC_0(VAR_2, "NIC mode %d\n", VAR_3);
 }

 FUNC_1(VAR_2);
}
