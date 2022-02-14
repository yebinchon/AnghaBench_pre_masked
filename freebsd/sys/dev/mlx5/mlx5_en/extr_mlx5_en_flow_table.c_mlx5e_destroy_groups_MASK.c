
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_flow_table {int num_groups; int ** g; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct mlx5e_flow_table *VAR_0)
{
 int VAR_1;

 for (VAR_1 = VAR_0->num_groups - 1; VAR_1 >= 0; VAR_1--) {
  if (!FUNC_0(VAR_0->g[VAR_1]))
   FUNC_1(VAR_0->g[VAR_1]);
  VAR_0->g[VAR_1] = ((void*)0);
 }
 VAR_0->num_groups = 0;
}
