
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_qp_context {int srqn; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct mlx4_qp_context *VAR_0)
{
 return FUNC_0(VAR_0->srqn) & 0x1ffffff;
}
