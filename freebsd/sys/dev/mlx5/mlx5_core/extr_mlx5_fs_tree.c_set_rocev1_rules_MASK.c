
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_rule_node {int match_criteria_enable; int list; int match_value; int match_criteria; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mlx5_flow_rule_node* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_3(struct list_head *VAR_6)
{
 struct mlx5_flow_rule_node *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->match_criteria_enable =
  1 << VAR_2;
 FUNC_0(VAR_5, VAR_7->match_criteria, VAR_4,
   0xffff);
 FUNC_0(VAR_5, VAR_7->match_value, VAR_4,
   VAR_3);

 FUNC_2(&VAR_7->list, VAR_6);

 return 0;
}
