
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tui_locator_element {char* proc_name; int line_no; int addr; } ;
struct TYPE_2__ {struct tui_locator_element locator; } ;
struct tui_win_element {TYPE_1__ which_element; } ;
struct tui_gen_win_info {int content_size; void** content; int type; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char const*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 struct tui_gen_win_info* FUNC_2 () ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_1, const char *VAR_2, int VAR_3,
                      CORE_ADDR VAR_4)
{
  struct tui_gen_win_info * VAR_5 = FUNC_2 ();
  struct tui_locator_element * VAR_6;


  if (VAR_5->content_size <= 0)
    {
      VAR_5->content = (void **) FUNC_1 (1, VAR_5->type);
      VAR_5->content_size = 1;
    }

  VAR_6 = &((struct tui_win_element *) VAR_5->content[0])->which_element.locator;
  VAR_6->proc_name[0] = (char) 0;
  FUNC_0 (VAR_6->proc_name, VAR_0, VAR_2);
  VAR_6->line_no = VAR_3;
  VAR_6->addr = VAR_4;
  FUNC_3 (VAR_1);
}
