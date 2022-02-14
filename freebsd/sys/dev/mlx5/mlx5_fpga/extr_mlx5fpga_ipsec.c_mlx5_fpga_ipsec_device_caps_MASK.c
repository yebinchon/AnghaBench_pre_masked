
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_fpga_device {TYPE_1__* ipsec; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*) ;

u32 FUNC_2(struct mlx5_core_dev *VAR_8)
{
 struct mlx5_fpga_device *VAR_9 = VAR_8->fpga;
 u32 VAR_10 = 0;

 if (FUNC_1(VAR_8))
  VAR_10 |= VAR_0;
 else
  return VAR_10;

 if (!VAR_9->ipsec)
  return VAR_10;

 if (FUNC_0(VAR_5, VAR_9->ipsec->caps, VAR_4))
  VAR_10 |= VAR_1;

 if (FUNC_0(VAR_5, VAR_9->ipsec->caps, VAR_6))
  VAR_10 |= VAR_2;

 if (FUNC_0(VAR_5, VAR_9->ipsec->caps, VAR_7))
  VAR_10 |= VAR_3;

 return VAR_10;
}
