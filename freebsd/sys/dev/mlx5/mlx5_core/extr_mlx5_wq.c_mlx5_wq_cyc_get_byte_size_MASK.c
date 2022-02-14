
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_wq_cyc {int log_stride; } ;


 int FUNC_0 (struct mlx5_wq_cyc*) ;

__attribute__((used)) static u32 FUNC_1(struct mlx5_wq_cyc *VAR_0)
{
 return FUNC_0(VAR_0) << VAR_0->log_stride;
}
