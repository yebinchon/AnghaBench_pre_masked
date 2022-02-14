
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tui_gen_win_info {int handle; scalar_t__ is_visible; } ;
struct TYPE_3__ {struct tui_gen_win_info* execution_info; } ;
struct TYPE_4__ {TYPE_1__ source_info; } ;
struct tui_win_info {struct tui_gen_win_info generic; TYPE_2__ detail; } ;
typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct tui_gen_win_info* FUNC_1 () ;
 int FUNC_2 (struct tui_gen_win_info*) ;

void
FUNC_3 (struct tui_win_info * * VAR_3)
{
  enum tui_win_type VAR_4;
  struct tui_gen_win_info * VAR_5 = FUNC_1 ();

  for (VAR_4 = VAR_2; (VAR_4 < VAR_1); VAR_4++)
    {
      if (VAR_3[VAR_4] && VAR_3[VAR_4]->generic.is_visible)
 {
   if (VAR_4 == VAR_2 || VAR_4 == VAR_0)
     {
       FUNC_0 (VAR_3[VAR_4]->detail.source_info.execution_info->handle);
       FUNC_2 (VAR_3[VAR_4]->detail.source_info.execution_info);
     }
   FUNC_0 (VAR_3[VAR_4]->generic.handle);
   FUNC_2 (&VAR_3[VAR_4]->generic);
 }
    }
  if (VAR_5->is_visible)
    {
      FUNC_0 (VAR_5->handle);
      FUNC_2 (VAR_5);
    }
}
