
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cq {int cons_index; int * dbrec; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mlx5_cq *VAR_1)
{
 VAR_1->dbrec[VAR_0] = FUNC_0(VAR_1->cons_index & 0xffffff);
}
