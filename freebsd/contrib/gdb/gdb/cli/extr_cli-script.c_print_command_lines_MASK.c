
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct command_line {scalar_t__ control_type; char* line; int body_count; struct command_line* next; struct command_line** body_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ui_out*,int *,char*,char*) ;
 int FUNC_1 (struct ui_out*,int *,char*) ;
 int FUNC_2 (struct ui_out*,int) ;
 int FUNC_3 (struct ui_out*,char*) ;
 scalar_t__ VAR_4 ;

void
FUNC_4 (struct ui_out *VAR_5, struct command_line *VAR_6,
       unsigned int VAR_7)
{
  struct command_line *VAR_8;

  VAR_8 = VAR_6;
  while (VAR_8)
    {

      if (VAR_7)
 FUNC_2 (VAR_5, 2 * VAR_7);


      if (VAR_8->control_type == VAR_3)
 {
   FUNC_1 (VAR_5, ((void*)0), VAR_8->line);
   FUNC_3 (VAR_5, "\n");
   VAR_8 = VAR_8->next;
   continue;
 }



      if (VAR_8->control_type == VAR_1)
 {
   FUNC_1 (VAR_5, ((void*)0), "loop_continue");
   FUNC_3 (VAR_5, "\n");
   VAR_8 = VAR_8->next;
   continue;
 }


      if (VAR_8->control_type == VAR_0)
 {
   FUNC_1 (VAR_5, ((void*)0), "loop_break");
   FUNC_3 (VAR_5, "\n");
   VAR_8 = VAR_8->next;
   continue;
 }


      if (VAR_8->control_type == VAR_4)
 {
   FUNC_0 (VAR_5, ((void*)0), "while %s", VAR_8->line);
   FUNC_3 (VAR_5, "\n");
   FUNC_4 (VAR_5, *VAR_8->body_list, VAR_7 + 1);
   if (VAR_7)
     FUNC_2 (VAR_5, 2 * VAR_7);
   FUNC_1 (VAR_5, ((void*)0), "end");
   FUNC_3 (VAR_5, "\n");
   VAR_8 = VAR_8->next;
   continue;
 }


      if (VAR_8->control_type == VAR_2)
 {
   FUNC_0 (VAR_5, ((void*)0), "if %s", VAR_8->line);
   FUNC_3 (VAR_5, "\n");

   FUNC_4 (VAR_5, VAR_8->body_list[0], VAR_7 + 1);


   if (VAR_8->body_count == 2)
     {
       if (VAR_7)
  FUNC_2 (VAR_5, 2 * VAR_7);
       FUNC_1 (VAR_5, ((void*)0), "else");
       FUNC_3 (VAR_5, "\n");
       FUNC_4 (VAR_5, VAR_8->body_list[1], VAR_7 + 1);
     }

   if (VAR_7)
     FUNC_2 (VAR_5, 2 * VAR_7);
   FUNC_1 (VAR_5, ((void*)0), "end");
   FUNC_3 (VAR_5, "\n");
   VAR_8 = VAR_8->next;
   continue;
 }


      VAR_8 = VAR_8->next;
    }
}
