
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct mlx5_err_cqe {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_0, struct mlx5_err_cqe *VAR_1)
{
 __be32 *VAR_2 = (__be32 *)VAR_1;
 int VAR_3;

 FUNC_1(VAR_0, "dump error cqe\n");
 for (VAR_3 = 0; VAR_3 < sizeof(*VAR_1) / 16; VAR_3++, VAR_2 += 4)
  FUNC_2("%08x %08x %08x %08x\n", FUNC_0(VAR_2[0]),
   FUNC_0(VAR_2[1]), FUNC_0(VAR_2[2]),
   FUNC_0(VAR_2[3]));
}
