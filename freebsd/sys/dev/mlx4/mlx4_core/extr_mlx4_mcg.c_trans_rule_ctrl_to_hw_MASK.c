
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_net_trans_rule_hw_ctrl {int flags; int qpn; int port; int prio; int type; } ;
struct mlx4_net_trans_rule {scalar_t__ queue_mode; size_t promisc_mode; int qpn; int port; int priority; scalar_t__ allow_loopback; scalar_t__ exclusive; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mlx4_net_trans_rule *VAR_2,
      struct mlx4_net_trans_rule_hw_ctrl *VAR_3)
{
 u8 VAR_4 = 0;

 VAR_4 = VAR_2->queue_mode == VAR_0 ? 1 : 0;
 VAR_4 |= VAR_2->exclusive ? (1 << 2) : 0;
 VAR_4 |= VAR_2->allow_loopback ? (1 << 3) : 0;

 VAR_3->flags = VAR_4;
 VAR_3->type = VAR_1[VAR_2->promisc_mode];
 VAR_3->prio = FUNC_0(VAR_2->priority);
 VAR_3->port = VAR_2->port;
 VAR_3->qpn = FUNC_1(VAR_2->qpn);
}
