
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int width; int handle; scalar_t__* content; } ;
struct tui_win_info {TYPE_3__ generic; } ;
struct TYPE_4__ {scalar_t__ is_exec_point; int line; } ;
struct TYPE_5__ {TYPE_1__ source; } ;
struct tui_win_element {TYPE_2__ which_element; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5 (struct tui_win_info * VAR_1, int VAR_2)
{
  struct tui_win_element * VAR_3;
  int VAR_4, VAR_5;

  VAR_3 = (struct tui_win_element *) VAR_1->generic.content[VAR_2 - 1];
  if (VAR_3->which_element.source.is_exec_point)
    FUNC_4 (VAR_1->generic.handle, VAR_0);

  FUNC_1 (VAR_1->generic.handle, VAR_2, 1,
             VAR_3->which_element.source.line);
  if (VAR_3->which_element.source.is_exec_point)
    FUNC_3 (VAR_1->generic.handle, VAR_0);


  FUNC_0 (VAR_1->generic.handle, VAR_5, VAR_4);
  while (VAR_4 + 1 < VAR_1->generic.width)
    {
      FUNC_2 (VAR_1->generic.handle, ' ');
      FUNC_0 (VAR_1->generic.handle, VAR_5, VAR_4);
    }
}
