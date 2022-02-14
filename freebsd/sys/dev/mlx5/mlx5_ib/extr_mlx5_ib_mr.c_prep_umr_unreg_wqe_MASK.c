
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_umr_wr {int mkey; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_send_wr {int send_flags; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_umr_wr* FUNC_0 (struct ib_send_wr*) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_3,
          struct ib_send_wr *VAR_4, u32 VAR_5)
{
 struct mlx5_umr_wr *VAR_6 = FUNC_0(VAR_4);

 VAR_4->send_flags = VAR_1 | VAR_0;
 VAR_4->opcode = VAR_2;
 VAR_6->mkey = VAR_5;
}
