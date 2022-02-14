
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_net_trans_rule_hw_ctrl {int dummy; } ;
struct _rule_hw {int size; } ;



__attribute__((used)) static u32 FUNC_0(void *VAR_0)
{
 u32 VAR_1 = sizeof(struct mlx4_net_trans_rule_hw_ctrl);
 struct _rule_hw *VAR_2;

 VAR_2 = (struct _rule_hw *)(VAR_0 + VAR_1);

 while (VAR_2->size) {
  VAR_1 += VAR_2->size * sizeof(u32);
  VAR_2 += 1;
 }
 return VAR_1;
}
