
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int u_int ;
struct debug_monitor_state {scalar_t__ dbg_enable_count; int dbg_flags; scalar_t__* dbg_wcr; scalar_t__* dbg_wvr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct debug_monitor_state*,int ,int ) ;
 int FUNC_1 (struct debug_monitor_state*) ;
 struct debug_monitor_state VAR_2 ;
 int FUNC_2 (char*,int ) ;

int
FUNC_3(struct debug_monitor_state *VAR_3, vm_offset_t VAR_4,
    vm_size_t VAR_5)
{
 u_int VAR_6;

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_2;

 VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_4);
 if (VAR_6 == -1) {
  FUNC_2("Can not find watchpoint for address 0%lx\n", VAR_4);
  return (VAR_6);
 }

 VAR_3->dbg_wvr[VAR_6] = 0;
 VAR_3->dbg_wcr[VAR_6] = 0;
 VAR_3->dbg_enable_count--;
 if (VAR_3->dbg_enable_count == 0)
  VAR_3->dbg_flags &= ~VAR_0;

 FUNC_1(VAR_3);
 return (0);
}
