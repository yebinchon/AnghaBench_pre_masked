
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_cqe64 {int sop_drop_qpn; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mlx5_cqe64 *VAR_0, uint32_t VAR_1)
{
 return VAR_1 == (FUNC_0(VAR_0->sop_drop_qpn) & 0xffffff);
}
