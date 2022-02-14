
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct debug_monitor_state {int* dbg_bcr; int* dbg_wcr; } ;
typedef enum dbg_t { ____Placeholder_dbg_t } dbg_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct debug_monitor_state *VAR_3, enum dbg_t VAR_4)
{
 uint64_t *VAR_5;
 u_int VAR_6, VAR_7;

 switch(VAR_4) {
 case 129:
  VAR_6 = VAR_1;
  VAR_5 = VAR_3->dbg_bcr;
  break;
 case 128:
  VAR_6 = VAR_2;
  VAR_5 = VAR_3->dbg_wcr;
  break;
 default:
  FUNC_0("Unsupported debug type\n");
  return (VAR_7);
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if ((VAR_5[VAR_7] & VAR_0) == 0)
   return (VAR_7);
 }

 return (-1);
}
