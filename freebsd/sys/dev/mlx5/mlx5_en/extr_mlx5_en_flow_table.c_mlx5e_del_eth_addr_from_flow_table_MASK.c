
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_eth_addr_info {int tt_vec; int * ft_rule; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct mlx5e_priv *VAR_11,
    struct mlx5e_eth_addr_info *VAR_12)
{
 if (VAR_12->tt_vec & (1 << VAR_8))
  FUNC_0(VAR_12->ft_rule[VAR_8]);

 if (VAR_12->tt_vec & (1 << VAR_3))
  FUNC_0(VAR_12->ft_rule[VAR_3]);

 if (VAR_12->tt_vec & (1 << VAR_7))
  FUNC_0(VAR_12->ft_rule[VAR_7]);

 if (VAR_12->tt_vec & (1 << VAR_2))
  FUNC_0(VAR_12->ft_rule[VAR_2]);

 if (VAR_12->tt_vec & (1 << VAR_9))
  FUNC_0(VAR_12->ft_rule[VAR_9]);

 if (VAR_12->tt_vec & (1 << VAR_4))
  FUNC_0(VAR_12->ft_rule[VAR_4]);

 if (VAR_12->tt_vec & (1 << VAR_10))
  FUNC_0(VAR_12->ft_rule[VAR_10]);

 if (VAR_12->tt_vec & (1 << VAR_5))
  FUNC_0(VAR_12->ft_rule[VAR_5]);

 if (VAR_12->tt_vec & (1 << VAR_6))
  FUNC_0(VAR_12->ft_rule[VAR_6]);

 if (VAR_12->tt_vec & (1 << VAR_1))
  FUNC_0(VAR_12->ft_rule[VAR_1]);

 if (VAR_12->tt_vec & (1 << VAR_0))
  FUNC_0(VAR_12->ft_rule[VAR_0]);


 VAR_12->tt_vec = 0;
}
