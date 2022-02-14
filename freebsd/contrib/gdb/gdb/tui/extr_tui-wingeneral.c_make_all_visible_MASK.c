
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tui_gen_win_info {int dummy; } ;
struct TYPE_5__ {struct tui_gen_win_info* execution_info; } ;
struct TYPE_6__ {TYPE_1__ source_info; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_2__ detail; TYPE_3__ generic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tui_gen_win_info*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_4__** VAR_2 ;

__attribute__((used)) static void
FUNC_2 (int VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
      if (VAR_2[VAR_4] != ((void*)0)
   && ((VAR_2[VAR_4])->generic.type) != VAR_0)
 {
   if (FUNC_1 ((VAR_2[VAR_4])->generic.type))
     FUNC_0 ((VAR_2[VAR_4])->detail.source_info.execution_info,
     VAR_3);
   FUNC_0 ((struct tui_gen_win_info *) VAR_2[VAR_4], VAR_3);
 }
    }

  return;
}
