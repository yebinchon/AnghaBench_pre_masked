
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct debug_monitor_state {scalar_t__* dbg_wcr; scalar_t__* dbg_wvr; scalar_t__* dbg_bcr; scalar_t__* dbg_bvr; } ;
typedef enum dbg_t { ____Placeholder_dbg_t } dbg_t ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct debug_monitor_state *VAR_3, enum dbg_t VAR_4,
    vm_offset_t VAR_5)
{
 uint64_t *VAR_6, *VAR_7;
 u_int VAR_8, VAR_9;

 switch(VAR_4) {
 case 129:
  VAR_8 = VAR_1;
  VAR_6 = VAR_3->dbg_bvr;
  VAR_7 = VAR_3->dbg_bcr;
  break;
 case 128:
  VAR_8 = VAR_2;
  VAR_6 = VAR_3->dbg_wvr;
  VAR_7 = VAR_3->dbg_wcr;
  break;
 default:
  FUNC_0("Unsupported debug type\n");
  return (VAR_9);
 }

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (VAR_6[VAR_9] == VAR_5 &&
      (VAR_7[VAR_9] & VAR_0) != 0)
   return (VAR_9);
 }

 return (-1);
}
