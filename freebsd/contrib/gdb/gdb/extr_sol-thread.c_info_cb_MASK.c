
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ti_type; int ti_state; scalar_t__ ti_startfunc; scalar_t__ ti_pc; int ti_lid; int ti_tid; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef int td_err_e ;
struct minimal_symbol {int dummy; } ;


 int FUNC_0 (struct minimal_symbol*) ;
 int VAR_0 ;





 scalar_t__ VAR_1 ;


 struct minimal_symbol* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6 (const td_thrhandle_t *VAR_2, void *VAR_3)
{
  td_err_e VAR_4;
  td_thrinfo_t VAR_5;

  if ((VAR_4 = FUNC_2 (VAR_2, &VAR_5)) == VAR_0)
    {
      FUNC_4 ("%s thread #%d, lwp %d, ",
         VAR_5.ti_type == VAR_1 ? "system" : "user  ",
         VAR_5.ti_tid, VAR_5.ti_lid);
      switch (VAR_5.ti_state)
 {
 default:
 case 129:
   FUNC_4 ("<unknown state>");
   break;
 case 131:
   FUNC_4 ("(stopped)");
   break;
 case 133:
   FUNC_4 ("(run)    ");
   break;
 case 134:
   FUNC_4 ("(active) ");
   break;
 case 128:
   FUNC_4 ("(zombie) ");
   break;
 case 132:
   FUNC_4 ("(asleep) ");
   break;
 case 130:
   FUNC_4 ("(stopped asleep)");
   break;
 }

      if (VAR_5.ti_startfunc != 0)
 {
   struct minimal_symbol *VAR_6;
   VAR_6 = FUNC_1 (VAR_5.ti_startfunc);
   if (VAR_6)
     FUNC_4 ("   startfunc: %s\n", FUNC_0 (VAR_6));
   else
     FUNC_4 ("   startfunc: 0x%s\n", FUNC_3 (VAR_5.ti_startfunc));
 }


      if (VAR_5.ti_state == 132)
 {
   struct minimal_symbol *VAR_7;
   VAR_7 = FUNC_1 (VAR_5.ti_pc);
   if (VAR_7)
     FUNC_4 (" - Sleep func: %s\n", FUNC_0 (VAR_7));
   else
     FUNC_4 (" - Sleep func: 0x%s\n", FUNC_3 (VAR_5.ti_startfunc));
 }


      if (VAR_5.ti_state != 132 && VAR_5.ti_startfunc == 0)
 FUNC_4 ("\n");
    }
  else
    FUNC_5 ("info sol-thread: failed to get info for thread.");

  return 0;
}
