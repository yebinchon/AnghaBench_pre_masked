
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int content_size; scalar_t__* content; } ;
struct tui_win_info {TYPE_3__ generic; } ;
struct TYPE_8__ {int line_no; } ;
struct TYPE_5__ {TYPE_4__ line_or_addr; } ;
struct TYPE_6__ {TYPE_1__ source; } ;
struct tui_win_element {TYPE_2__ which_element; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0 (int VAR_2, struct tui_win_info * VAR_3,
         int VAR_4)
{
  int VAR_5 = VAR_0;
  int VAR_6, VAR_7;

  if (VAR_4)
    VAR_7 = VAR_1;
  else
    VAR_7 = 0;
  VAR_6 = 0;
  while (VAR_6 < VAR_3->generic.content_size - VAR_7 && !VAR_5)
    {
      VAR_5 = (((struct tui_win_element *)
        VAR_3->generic.content[VAR_6])->which_element.source.line_or_addr.line_no
       == (int) VAR_2);
      VAR_6++;
    }

  return VAR_5;
}
