
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int content_size; scalar_t__* content; } ;
struct tui_win_info {TYPE_1__ generic; } ;
struct TYPE_6__ {scalar_t__ line_no; } ;
struct TYPE_7__ {char* line; void* has_break; void* is_exec_point; TYPE_2__ line_or_addr; } ;
struct TYPE_8__ {TYPE_3__ source; } ;
struct tui_win_element {TYPE_4__ which_element; } ;


 void* VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*) ;

void
FUNC_2 (struct tui_win_info * VAR_1, char *VAR_2)
{
  int VAR_3;
  int VAR_4;
  int VAR_5 = 0;

  VAR_3 = VAR_1->generic.width - 1;
  VAR_4 = VAR_1->generic.height - 2;



  while (VAR_5 < VAR_1->generic.content_size)
    {




      struct tui_win_element * VAR_6 =
      (struct tui_win_element *) VAR_1->generic.content[VAR_5];
      VAR_6->which_element.source.line_or_addr.line_no = 0;
      VAR_6->which_element.source.is_exec_point = VAR_0;
      VAR_6->which_element.source.has_break = VAR_0;


      VAR_6->which_element.source.line[0] = (char) 0;







      if (VAR_5 == (VAR_4 / 2 + 1))
 {
   int VAR_7;
   int VAR_8;
   int VAR_9 = FUNC_1 (VAR_2);
   char *VAR_10;

   VAR_10 = VAR_6->which_element.source.line;

   if (VAR_9 >= ((VAR_3 - 1) / 2))
     VAR_8 = 1;
   else
     VAR_8 = (VAR_3 - 1) / 2 - VAR_9;

   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
     VAR_10[VAR_7] = ' ';

   FUNC_0 (VAR_10 + VAR_7, "%s", VAR_2);

   for (VAR_7 = VAR_8 + VAR_9; VAR_7 < VAR_3; VAR_7++)
     VAR_10[VAR_7] = ' ';

   VAR_10[VAR_7] = '\n';

 }

      VAR_5++;

    }
}
