
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct TYPE_9__ {struct mlx5_flow_rule** active_vlans_ft_rule; struct mlx5_flow_rule* any_svlan_ft_rule; struct mlx5_flow_rule* any_cvlan_ft_rule; struct mlx5_flow_rule* untagged_ft_rule; } ;
struct TYPE_7__ {int t; } ;
struct TYPE_6__ {struct mlx5_flow_table* t; } ;
struct TYPE_8__ {TYPE_2__ main; TYPE_1__ vlan; } ;
struct mlx5e_priv {int ifp; TYPE_4__ vlan; TYPE_3__ fts; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_rule {int dummy; } ;
struct mlx5_flow_destination {int ft; int type; } ;
typedef enum mlx5e_vlan_rule_type { ____Placeholder_mlx5e_vlan_rule_type } mlx5e_vlan_rule_type ;
struct TYPE_10__ {int first_vid; int cvlan_tag; int svlan_tag; } ;


 scalar_t__ FUNC_0 (struct mlx5_flow_rule*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,size_t) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct mlx5_flow_rule*) ;
 int VAR_4 ;
 struct mlx5_flow_rule* FUNC_4 (struct mlx5_flow_table*,int ,int *,int *,int ,int ,struct mlx5_flow_destination*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 TYPE_5__ VAR_5 ;

__attribute__((used)) static int
FUNC_7(struct mlx5e_priv *VAR_6,
    enum mlx5e_vlan_rule_type VAR_7, u16 VAR_8,
    u32 *VAR_9, u32 *VAR_10)
{
 struct mlx5_flow_table *VAR_11 = VAR_6->fts.vlan.t;
 struct mlx5_flow_destination VAR_12 = {};
 u8 VAR_13 = 0;
 struct mlx5_flow_rule **VAR_14;
 int VAR_15 = 0;

 VAR_12.type = VAR_1;
 VAR_12.ft = VAR_6->fts.main.t;

 VAR_13 = VAR_3;

 switch (VAR_7) {
 case 128:
  VAR_14 = &VAR_6->vlan.untagged_ft_rule;
  FUNC_2(VAR_4, VAR_9, VAR_5.cvlan_tag);
  break;
 case 130:
  VAR_14 = &VAR_6->vlan.any_cvlan_ft_rule;
  FUNC_2(VAR_4, VAR_9, VAR_5.cvlan_tag);
  FUNC_1(VAR_4, VAR_10, VAR_5.cvlan_tag, 1);
  break;
 case 129:
  VAR_14 = &VAR_6->vlan.any_svlan_ft_rule;
  FUNC_2(VAR_4, VAR_9, VAR_5.svlan_tag);
  FUNC_1(VAR_4, VAR_10, VAR_5.svlan_tag, 1);
  break;
 default:
  VAR_14 = &VAR_6->vlan.active_vlans_ft_rule[VAR_8];
  FUNC_2(VAR_4, VAR_9, VAR_5.cvlan_tag);
  FUNC_1(VAR_4, VAR_10, VAR_5.cvlan_tag, 1);
  FUNC_2(VAR_4, VAR_9, VAR_5.first_vid);
  FUNC_1(VAR_4, VAR_10, VAR_5.first_vid, VAR_8);
  FUNC_6(VAR_6);
  break;
 }

 *VAR_14 = FUNC_4(VAR_11, VAR_13, VAR_9, VAR_10,
         VAR_0,
         VAR_2,
         &VAR_12);

 if (FUNC_0(*VAR_14)) {
  VAR_15 = FUNC_3(*VAR_14);
  *VAR_14 = ((void*)0);
  FUNC_5(VAR_6->ifp, "add rule failed\n");
 }

 return (VAR_15);
}
