
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ content_size; int content_in_use; } ;
struct tui_win_info {TYPE_1__ generic; } ;


 int VAR_0 ;
 int FUNC_0 (struct tui_win_info*) ;
 int FUNC_1 (struct tui_win_info*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct tui_win_info*,int) ;

void
FUNC_4 (struct tui_win_info * VAR_1)
{
  if (VAR_1->generic.content_size > 0)
    {
      int VAR_2;

      for (VAR_2 = 1; VAR_2 <= VAR_1->generic.content_size; VAR_2++)
        FUNC_3 (VAR_1, VAR_2);
    }
  else
    FUNC_1 (VAR_1, VAR_0);

  FUNC_0 (VAR_1);
  FUNC_2 (&VAR_1->generic);
  VAR_1->generic.content_in_use = VAR_0;
}
