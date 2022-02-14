
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cq {int cons_index; int * set_ci_db; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct mlx4_cq *VAR_0)
{
 *VAR_0->set_ci_db = FUNC_0(VAR_0->cons_index & 0xffffff);
}
