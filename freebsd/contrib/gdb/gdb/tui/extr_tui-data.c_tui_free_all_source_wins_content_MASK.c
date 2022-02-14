
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * execution_info; } ;
struct TYPE_5__ {TYPE_1__ source_info; } ;
struct tui_win_info {TYPE_2__ detail; int generic; } ;
struct TYPE_6__ {int count; scalar_t__* list; } ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 () ;

void
FUNC_2 (void)
{
  int VAR_0;

  for (VAR_0 = 0; VAR_0 < (FUNC_1 ())->count; VAR_0++)
    {
      struct tui_win_info * VAR_1 = (struct tui_win_info *) (FUNC_1 ())->list[VAR_0];

      if (VAR_1 != ((void*)0))
 {
   FUNC_0 (&(VAR_1->generic));
   FUNC_0 (VAR_1->detail.source_info.execution_info);
 }
    }
}
