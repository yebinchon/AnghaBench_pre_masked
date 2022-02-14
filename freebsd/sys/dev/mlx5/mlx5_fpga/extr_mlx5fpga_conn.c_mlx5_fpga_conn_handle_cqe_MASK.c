
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_fpga_conn {int fdev; } ;
struct mlx5_err_cqe {int syndrome; } ;
struct mlx5_cqe64 {int op_own; } ;






 int FUNC_0 (struct mlx5_fpga_conn*,struct mlx5_cqe64*,int) ;
 int FUNC_1 (struct mlx5_fpga_conn*,struct mlx5_cqe64*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct mlx5_fpga_conn *VAR_0,
          struct mlx5_cqe64 *VAR_1)
{
 u8 VAR_2, VAR_3 = 0;

 VAR_2 = VAR_1->op_own >> 4;

 switch (VAR_2) {
 case 130:
  VAR_3 = ((struct mlx5_err_cqe *)VAR_1)->syndrome;

 case 131:
  FUNC_1(VAR_0, VAR_1, VAR_3);
  break;

 case 129:
  VAR_3 = ((struct mlx5_err_cqe *)VAR_1)->syndrome;

 case 128:
  FUNC_0(VAR_0, VAR_1, VAR_3);
  break;
 default:
  FUNC_2(VAR_0->fdev, "Unexpected cqe opcode %u\n",
          VAR_2);
 }
}
