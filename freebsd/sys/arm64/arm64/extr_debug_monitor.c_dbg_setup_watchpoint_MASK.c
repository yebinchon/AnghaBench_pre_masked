
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int u_int ;
struct debug_monitor_state {int dbg_flags; int* dbg_wcr; int dbg_enable_count; int * dbg_wvr; } ;
typedef enum dbg_access_t { ____Placeholder_dbg_access_t } dbg_access_t ;


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
 int VAR_11 ;
 int VAR_12 ;




 int FUNC_0 (struct debug_monitor_state*,int ) ;
 int FUNC_1 (struct debug_monitor_state*) ;
 int VAR_13 ;
 struct debug_monitor_state VAR_14 ;
 int FUNC_2 (char*,...) ;

int
FUNC_3(struct debug_monitor_state *VAR_15, vm_offset_t VAR_16,
    vm_size_t VAR_17, enum dbg_access_t VAR_18)
{
 uint64_t VAR_19, VAR_20, VAR_21;
 u_int VAR_22;

 if (VAR_15 == ((void*)0))
  VAR_15 = &VAR_14;

 VAR_22 = FUNC_0(VAR_15, VAR_2);
 if (VAR_22 == -1) {
  FUNC_2("Can not find slot for watchpoint, max %d"
      " watchpoints supported\n", VAR_13);
  return (VAR_22);
 }

 switch(VAR_17) {
 case 1:
  VAR_19 = VAR_4;
  break;
 case 2:
  VAR_19 = VAR_5;
  break;
 case 4:
  VAR_19 = VAR_6;
  break;
 case 8:
  VAR_19 = VAR_7;
  break;
 default:
  FUNC_2("Unsupported address size for watchpoint\n");
  return (-1);
 }

 if ((VAR_15->dbg_flags & VAR_1) == 0)
  VAR_20 = VAR_11;
 else
  VAR_20 = VAR_12;

 switch(VAR_18) {
 case 128:
  VAR_21 = VAR_3;
  break;
 case 131:
  VAR_21 = VAR_8;
  break;
 case 129:
  VAR_21 = VAR_9;
  break;
 case 130:
  VAR_21 = VAR_8 | VAR_9;
  break;
 default:
  FUNC_2("Unsupported exception level for watchpoint\n");
  return (-1);
 }

 VAR_15->dbg_wvr[VAR_22] = VAR_16;
 VAR_15->dbg_wcr[VAR_22] = VAR_19 | VAR_21 | VAR_20 | VAR_10;
 VAR_15->dbg_enable_count++;
 VAR_15->dbg_flags |= VAR_0;

 FUNC_1(VAR_15);
 return (0);
}
