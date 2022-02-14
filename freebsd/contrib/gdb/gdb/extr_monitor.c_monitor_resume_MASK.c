
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {int flags; char* step; char* cont; int (* continue_hook ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (ptid_t VAR_5, int VAR_6, enum target_signal VAR_7)
{

  FUNC_0 ("MON resume\n");
  if (VAR_2->flags & VAR_1 && VAR_4 == 1)
    {
      VAR_4 = 0;
      FUNC_1 ("run\r");
      if (VAR_2->flags & VAR_0)
 VAR_3 = 1;
      return;
    }
  if (VAR_6)
    FUNC_1 (VAR_2->step);
  else
    {
      if (VAR_2->continue_hook)
 (*VAR_2->continue_hook) ();
      else
 FUNC_1 (VAR_2->cont);
      if (VAR_2->flags & VAR_0)
 VAR_3 = 1;
    }
}
