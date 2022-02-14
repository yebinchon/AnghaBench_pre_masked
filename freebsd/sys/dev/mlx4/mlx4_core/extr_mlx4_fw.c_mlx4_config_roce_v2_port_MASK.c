
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_config_dev {int roce_v2_udp_dport; int update_flags; } ;
typedef int config_dev ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_config_dev*,int ,int) ;
 int FUNC_3 (struct mlx4_dev*,struct mlx4_config_dev*) ;

int FUNC_4(struct mlx4_dev *VAR_1, u16 VAR_2)
{
 struct mlx4_config_dev VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.update_flags = FUNC_1(VAR_0);
 VAR_3.roce_v2_udp_dport = FUNC_0(VAR_2);

 return FUNC_3(VAR_1, &VAR_3);
}
