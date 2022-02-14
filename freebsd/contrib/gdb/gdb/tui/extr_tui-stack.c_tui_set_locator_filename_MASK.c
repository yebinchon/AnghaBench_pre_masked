
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tui_locator_element {scalar_t__* file_name; } ;
struct TYPE_2__ {struct tui_locator_element locator; } ;
struct tui_win_element {TYPE_1__ which_element; } ;
struct tui_gen_win_info {int ** content; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,char const*) ;
 struct tui_gen_win_info* FUNC_1 () ;
 int FUNC_2 (char const*,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_1)
{
  struct tui_gen_win_info * VAR_2 = FUNC_1 ();
  struct tui_locator_element * VAR_3;

  if (VAR_2->content[0] == ((void*)0))
    {
      FUNC_2 (VAR_1, ((void*)0), 0, 0);
      return;
    }

  VAR_3 = &((struct tui_win_element *) VAR_2->content[0])->which_element.locator;
  VAR_3->file_name[0] = 0;
  FUNC_0 (VAR_3->file_name, VAR_0, VAR_1);
}
