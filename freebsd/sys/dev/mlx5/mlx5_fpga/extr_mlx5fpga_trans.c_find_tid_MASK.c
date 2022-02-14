
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx5_fpga_trans_priv {int dummy; } ;
struct mlx5_fpga_device {TYPE_1__* trans; } ;
struct TYPE_2__ {struct mlx5_fpga_trans_priv* transactions; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mlx5_fpga_device*,char*,size_t) ;

__attribute__((used)) static struct mlx5_fpga_trans_priv *FUNC_1(struct mlx5_fpga_device *VAR_1,
          u8 VAR_2)
{
 if (VAR_2 >= VAR_0) {
  FUNC_0(VAR_1, "Unexpected transaction ID %u\n", VAR_2);
  return ((void*)0);
 }
 return &VAR_1->trans->transactions[VAR_2];
}
