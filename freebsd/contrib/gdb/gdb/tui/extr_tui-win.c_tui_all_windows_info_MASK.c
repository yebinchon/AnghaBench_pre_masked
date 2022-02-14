
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; scalar_t__ is_visible; } ;
struct tui_win_info {TYPE_1__ generic; } ;
typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 struct tui_win_info** VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 struct tui_win_info* FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (char *VAR_3, int VAR_4)
{
  enum tui_win_type VAR_5;
  struct tui_win_info * VAR_6 = FUNC_2 ();

  for (VAR_5 = VAR_1; (VAR_5 < VAR_0); VAR_5++)
    if (VAR_2[VAR_5] && VAR_2[VAR_5]->generic.is_visible)
      {
 if (VAR_6 == VAR_2[VAR_5])
   FUNC_0 ("        %s\t(%d lines)  <has focus>\n",
      FUNC_1 (&VAR_2[VAR_5]->generic),
      VAR_2[VAR_5]->generic.height);
 else
   FUNC_0 ("        %s\t(%d lines)\n",
      FUNC_1 (&VAR_2[VAR_5]->generic),
      VAR_2[VAR_5]->generic.height);
      }
}
