
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct query_params {int cpi; } ;
struct TYPE_3__ {int def_port; int def_mcast_pri_port; int def_mcast_not_port; int life_state; int flags; int mcast_top; int enforce_cap; int lids_per_port; int lin_top; int mcast_cap; int rand_cap; int lin_cap; } ;
struct TYPE_4__ {TYPE_1__ switch_info; int lid; } ;
typedef TYPE_2__ ib_switch_info_record_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, struct query_params *VAR_2)
{
 ib_switch_info_record_t *VAR_3 = VAR_1;
 uint32_t VAR_4 = FUNC_1(&VAR_2->cpi);

 FUNC_2("SwitchInfoRecord dump:\n"
  "\t\tRID\n"
  "\t\tLID.....................................%u\n"
  "\t\tSwitchInfo dump:\n"
  "\t\tLinearFDBCap............................0x%X\n"
  "\t\tRandomFDBCap............................0x%X\n"
  "\t\tMulticastFDBCap.........................0x%X\n"
  "\t\tLinearFDBTop............................0x%X\n"
  "\t\tDefaultPort.............................%u\n"
  "\t\tDefaultMulticastPrimaryPort.............%u\n"
  "\t\tDefaultMulticastNotPrimaryPort..........%u\n"
  "\t\tLifeTimeValue/PortStateChange/OpSL2VL...0x%X\n"
  "\t\tLIDsPerPort.............................0x%X\n"
  "\t\tPartitionEnforcementCap.................0x%X\n"
  "\t\tflags...................................0x%X\n",
  FUNC_0(VAR_3->lid),
  FUNC_0(VAR_3->switch_info.lin_cap),
  FUNC_0(VAR_3->switch_info.rand_cap),
  FUNC_0(VAR_3->switch_info.mcast_cap),
  FUNC_0(VAR_3->switch_info.lin_top),
  VAR_3->switch_info.def_port,
  VAR_3->switch_info.def_mcast_pri_port,
  VAR_3->switch_info.def_mcast_not_port,
  VAR_3->switch_info.life_state,
  FUNC_0(VAR_3->switch_info.lids_per_port),
  FUNC_0(VAR_3->switch_info.enforce_cap),
  VAR_3->switch_info.flags);
 if (VAR_4 & VAR_0)
  FUNC_2("\t\tMulticastFDBTop.........................0x%X\n",
         FUNC_0(VAR_3->switch_info.mcast_top));
}
