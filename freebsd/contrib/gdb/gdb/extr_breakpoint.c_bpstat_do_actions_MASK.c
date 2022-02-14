
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct command_line {struct command_line* next; } ;
struct cleanup {int dummy; } ;
typedef TYPE_1__* bpstat ;
struct TYPE_3__ {struct command_line* commands; struct TYPE_3__* next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (struct command_line*) ;
 int VAR_2 ;
 struct cleanup* FUNC_2 (int ,int ) ;
 struct cleanup* FUNC_3 (struct command_line**) ;

void
FUNC_4 (bpstat *VAR_3)
{
  bpstat VAR_4;
  struct cleanup *VAR_5;



  if (VAR_2)
    return;

  VAR_2 = 1;
  VAR_5 = FUNC_2 (VAR_1, 0);

top:
  VAR_4 = *VAR_3;

  VAR_0 = 0;
  for (; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      struct command_line *VAR_6;
      struct cleanup *VAR_7;
      VAR_6 = VAR_4->commands;
      VAR_4->commands = 0;
      VAR_7 = FUNC_3 (&VAR_6);

      while (VAR_6 != ((void*)0))
 {
   FUNC_1 (VAR_6);

   if (VAR_0)
     break;
   else
     VAR_6 = VAR_6->next;
 }


      FUNC_0 (VAR_7);

      if (VAR_0)




 goto top;
    }
  FUNC_0 (VAR_5);
}
