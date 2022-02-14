
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tui_locator_element {scalar_t__ addr; } ;
struct TYPE_2__ {struct tui_locator_element locator; } ;
struct tui_win_element {TYPE_1__ which_element; } ;
struct tui_gen_win_info {scalar_t__* content; } ;
struct minimal_symbol {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_1 (char*,int *,int *) ;
 struct tui_gen_win_info* FUNC_2 () ;

CORE_ADDR
FUNC_3 (void)
{
  struct tui_gen_win_info * VAR_0;
  struct tui_locator_element * VAR_1;
  CORE_ADDR VAR_2;

  VAR_0 = FUNC_2 ();
  VAR_1 = &((struct tui_win_element *) VAR_0->content[0])->which_element.locator;

  if (VAR_1->addr == 0)
    {
      struct minimal_symbol *VAR_3;



      VAR_3 = FUNC_1 ("main", ((void*)0), ((void*)0));
      if (VAR_3 == 0)
        VAR_3 = FUNC_1 ("MAIN", ((void*)0), ((void*)0));
      if (VAR_3 == 0)
        VAR_3 = FUNC_1 ("_start", ((void*)0), ((void*)0));
      if (VAR_3)
        VAR_2 = FUNC_0 (VAR_3);
      else
        VAR_2 = 0;
    }
  else
    VAR_2 = VAR_1->addr;

  return VAR_2;
}
