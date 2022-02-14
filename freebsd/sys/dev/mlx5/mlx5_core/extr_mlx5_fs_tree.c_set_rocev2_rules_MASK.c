
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_rule_node {int match_criteria_enable; int list; int match_value; int match_criteria; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mlx5_flow_rule_node*) ;
 struct mlx5_flow_rule_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct list_head *VAR_9)
{
 struct mlx5_flow_rule_node *VAR_10;
 struct mlx5_flow_rule_node *VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11) {
  FUNC_1(VAR_10);
  return -VAR_0;
 }

 VAR_10->match_criteria_enable =
  1 << VAR_3;
 FUNC_0(VAR_6, VAR_10->match_criteria, VAR_5,
   0xffff);
 FUNC_0(VAR_6, VAR_10->match_value, VAR_5,
   0x0800);
 FUNC_0(VAR_6, VAR_10->match_criteria, VAR_7,
   0xff);
 FUNC_0(VAR_6, VAR_10->match_value, VAR_7,
   VAR_2);
 FUNC_0(VAR_6, VAR_10->match_criteria, VAR_8,
   0xffff);
 FUNC_0(VAR_6, VAR_10->match_value, VAR_8,
   VAR_4);

 VAR_11->match_criteria_enable =
  1 << VAR_3;
 FUNC_0(VAR_6, VAR_11->match_criteria, VAR_5,
   0xffff);
 FUNC_0(VAR_6, VAR_11->match_value, VAR_5,
   0x86dd);
 FUNC_0(VAR_6, VAR_11->match_criteria, VAR_7,
   0xff);
 FUNC_0(VAR_6, VAR_11->match_value, VAR_7,
   VAR_2);
 FUNC_0(VAR_6, VAR_11->match_criteria, VAR_8,
   0xffff);
 FUNC_0(VAR_6, VAR_11->match_value, VAR_8,
   VAR_4);

 FUNC_3(&VAR_10->list, VAR_9);
 FUNC_3(&VAR_11->list, VAR_9);

 return 0;
}
