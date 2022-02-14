
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int ** active_vlans_ft_rule; int * any_svlan_ft_rule; int * any_cvlan_ft_rule; int * untagged_ft_rule; } ;
struct mlx5e_priv {TYPE_1__ vlan; } ;
typedef enum mlx5e_vlan_rule_type { ____Placeholder_mlx5e_vlan_rule_type } mlx5e_vlan_rule_type ;






 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5e_priv*) ;

__attribute__((used)) static void
FUNC_2(struct mlx5e_priv *VAR_0,
    enum mlx5e_vlan_rule_type VAR_1, u16 VAR_2)
{
 switch (VAR_1) {
 case 128:
  if (VAR_0->vlan.untagged_ft_rule) {
   FUNC_0(VAR_0->vlan.untagged_ft_rule);
   VAR_0->vlan.untagged_ft_rule = ((void*)0);
  }
  break;
 case 131:
  if (VAR_0->vlan.any_cvlan_ft_rule) {
   FUNC_0(VAR_0->vlan.any_cvlan_ft_rule);
   VAR_0->vlan.any_cvlan_ft_rule = ((void*)0);
  }
  break;
 case 130:
  if (VAR_0->vlan.any_svlan_ft_rule) {
   FUNC_0(VAR_0->vlan.any_svlan_ft_rule);
   VAR_0->vlan.any_svlan_ft_rule = ((void*)0);
  }
  break;
 case 129:
  if (VAR_0->vlan.active_vlans_ft_rule[VAR_2]) {
   FUNC_0(VAR_0->vlan.active_vlans_ft_rule[VAR_2]);
   VAR_0->vlan.active_vlans_ft_rule[VAR_2] = ((void*)0);
  }
  FUNC_1(VAR_0);
  break;
 default:
  break;
 }
}
