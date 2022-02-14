
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5e_priv {int ifp; } ;
typedef enum mlx5e_vlan_rule_type { ____Placeholder_mlx5e_vlan_rule_type } mlx5e_vlan_rule_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5e_priv*,int,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct mlx5e_priv *VAR_2,
    enum mlx5e_vlan_rule_type VAR_3, u16 VAR_4)
{
 u32 *VAR_5;
 u32 *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_3(FUNC_0(VAR_1));
 VAR_5 = FUNC_3(FUNC_0(VAR_1));
 if (!VAR_6 || !VAR_5) {
  FUNC_2(VAR_2->ifp, "alloc failed\n");
  VAR_7 = -VAR_0;
  goto add_vlan_rule_out;
 }

 VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6);

add_vlan_rule_out:
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);

 return (VAR_7);
}
