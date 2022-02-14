
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_flow_table {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (struct mlx5e_flow_table*,int *,int) ;

__attribute__((used)) static int
FUNC_4(struct mlx5e_flow_table *VAR_2)
{
 u32 *VAR_3;
 int VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 VAR_3 = FUNC_2(VAR_4);
 if (!VAR_3)
  return (-VAR_0);

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_3);
 return (VAR_5);
}
