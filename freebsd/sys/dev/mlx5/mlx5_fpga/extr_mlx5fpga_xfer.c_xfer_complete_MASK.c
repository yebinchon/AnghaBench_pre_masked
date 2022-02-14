
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfer_state {int status; struct mlx5_fpga_transaction* xfer; } ;
struct mlx5_fpga_transaction {int (* complete1 ) (struct mlx5_fpga_transaction const*,int ) ;} ;


 int FUNC_0 (struct xfer_state*) ;
 int FUNC_1 (struct mlx5_fpga_transaction const*,int ) ;

__attribute__((used)) static void FUNC_2(struct xfer_state *VAR_0)
{
 const struct mlx5_fpga_transaction *VAR_1 = VAR_0->xfer;
 u8 VAR_2 = VAR_0->status;

 FUNC_0(VAR_0);
 VAR_1->complete1(VAR_1, VAR_2);
}
