
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_vport_state {int default_qos; int default_vlan; int tx_rate; int member_0; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,char*,...) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*,int,struct mlx4_vport_state*) ;

__attribute__((used)) static bool FUNC_2(struct mlx4_dev *VAR_1, int VAR_2,
           struct mlx4_vport_state *VAR_3,
           int VAR_4, int VAR_5)
{
 struct mlx4_vport_state VAR_6 = {0};

 if (!FUNC_1(VAR_1, VAR_2, VAR_3) ||
     !VAR_3->tx_rate)
  return 1;

 VAR_6.default_qos = VAR_5;
 VAR_6.default_vlan = VAR_4;






 if (FUNC_1(VAR_1, VAR_2, &VAR_6))
  return 1;

 FUNC_0(VAR_1, "Cannot change VF state to %s while rate is set\n",
    (VAR_4 == VAR_0) ? "VGT" : "VST");

 if (VAR_4 != VAR_0)
  FUNC_0(VAR_1, "VST priority %d not supported for QoS\n", VAR_5);

 FUNC_0(VAR_1, "Please set rate to 0 prior to this VF state change\n");

 return 0;
}
