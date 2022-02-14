
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_flow_rules_list {int head; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_flow_rules_list* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_flow_rules_list*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct mlx5_flow_rules_list *FUNC_5(u8 VAR_3)
{
 int VAR_4 = 0;
 struct mlx5_flow_rules_list *VAR_5 =
  FUNC_1(sizeof(*VAR_5), VAR_0);

 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->head);

 if (VAR_3 & VAR_1) {
  VAR_4 = FUNC_3(&VAR_5->head);
  if (VAR_4)
   goto free_list;
 }
 if (VAR_3 & VAR_2)
  VAR_4 = FUNC_4(&VAR_5->head);
 if (VAR_4)
  goto free_list;

 return VAR_5;

free_list:
 FUNC_2(VAR_5);
 return ((void*)0);
}
