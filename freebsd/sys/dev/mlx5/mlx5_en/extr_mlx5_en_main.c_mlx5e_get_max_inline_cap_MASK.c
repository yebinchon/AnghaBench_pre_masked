
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u16 ;
struct mlx5e_tx_wqe {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;

__attribute__((used)) static u16
FUNC_1(struct mlx5_core_dev *VAR_2)
{
 uint32_t VAR_3 = (1U << FUNC_0(VAR_2, VAR_1)) / 2U;

 VAR_3 -= sizeof(struct mlx5e_tx_wqe) - 2;


 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 return (VAR_3);
}
