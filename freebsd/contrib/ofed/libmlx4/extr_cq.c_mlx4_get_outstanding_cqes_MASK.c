
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx4_cq {int cons_index; } ;


 scalar_t__ FUNC_0 (struct mlx4_cq*,int) ;

int FUNC_1(struct mlx4_cq *VAR_0)
{
 uint32_t VAR_1;

 for (VAR_1 = VAR_0->cons_index; FUNC_0(VAR_0, VAR_1); ++VAR_1)
  ;

 return VAR_1 - VAR_0->cons_index;
}
