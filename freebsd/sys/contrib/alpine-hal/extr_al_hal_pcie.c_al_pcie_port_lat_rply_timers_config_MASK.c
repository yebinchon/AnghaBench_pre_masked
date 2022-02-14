
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_1__* port_regs; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;
struct al_pcie_latency_replay_timers {int replay_timer_limit; int round_trip_lat_limit; } ;
struct TYPE_2__ {int ack_lat_rply_timer; } ;


 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(
 struct al_pcie_port *VAR_0,
 const struct al_pcie_latency_replay_timers *VAR_1)
{
 struct al_pcie_regs *VAR_2 = VAR_0->regs;
 uint32_t VAR_3 = 0;

 FUNC_0(VAR_3, 0xFFFF, 0, VAR_1->round_trip_lat_limit);
 FUNC_0(VAR_3, 0xFFFF0000, 16, VAR_1->replay_timer_limit);

 FUNC_1(&VAR_2->port_regs->ack_lat_rply_timer, VAR_3);
 return 0;
}
