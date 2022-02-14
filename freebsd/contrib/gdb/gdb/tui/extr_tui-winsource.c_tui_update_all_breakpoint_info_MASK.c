
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_win_info {int dummy; } ;
struct tui_list {int count; scalar_t__* list; } ;


 int VAR_0 ;
 struct tui_list* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct tui_win_info*,int ) ;
 int FUNC_2 (struct tui_win_info*) ;

void
FUNC_3 (void)
{
  struct tui_list *VAR_1 = FUNC_0 ();
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++)
    {
      struct tui_win_info * VAR_3 = (struct tui_win_info *) VAR_1->list[VAR_2];

      if (FUNC_1 (VAR_3, VAR_0))
        {
          FUNC_2 (VAR_3);
        }
    }
}
