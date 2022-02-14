
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {scalar_t__ control_type; int body_count; struct command_line** body_list; struct command_line* next; } ;
typedef enum misc_command_type { ____Placeholder_misc_command_type } misc_command_type ;
typedef enum command_control_type { ____Placeholder_command_control_type } command_control_type ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct command_line**) ;
 int FUNC_3 (struct command_line*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static enum command_control_type
FUNC_4 (struct command_line *VAR_8)
{
  int VAR_9, VAR_10;
  enum misc_command_type VAR_11;
  enum command_control_type VAR_12;
  struct command_line **VAR_13, *VAR_14, *VAR_15;

  VAR_14 = ((void*)0);
  VAR_9 = 1;


  if (VAR_8->control_type == VAR_6)
    {
      FUNC_1 ("Recursed on a simple control type\n");
      return VAR_4;
    }

  if (VAR_9 > VAR_8->body_count)
    {
      FUNC_1 ("Allocated body is smaller than this command type needs\n");
      return VAR_4;
    }


  while (1)
    {
      FUNC_0 ();

      VAR_15 = ((void*)0);
      VAR_11 = FUNC_2 (&VAR_15);


      if (VAR_11 == VAR_5)
 continue;

      if (VAR_11 == VAR_2)
 {
   if (VAR_8->control_type == VAR_7
       || VAR_8->control_type == VAR_3)
     {

       VAR_12 = VAR_6;
       break;
     }
   else
     {
       VAR_12 = VAR_4;
       break;
     }
 }


      if (VAR_11 == VAR_1)
 {
   if (VAR_8->control_type == VAR_3
       && VAR_9 == 1)
     {
       FUNC_3 (VAR_8, 2);
       VAR_9 = 2;
       VAR_14 = ((void*)0);
       continue;
     }
   else
     {
       VAR_12 = VAR_4;
       break;
     }
 }

      if (VAR_14)
 {
   VAR_14->next = VAR_15;
 }
      else
 {
   VAR_13 = VAR_8->body_list;
   for (VAR_10 = 1; VAR_10 < VAR_9; VAR_10++)
     VAR_13++;

   *VAR_13 = VAR_15;

 }

      VAR_14 = VAR_15;



      if (VAR_15->control_type == VAR_7
   || VAR_15->control_type == VAR_3)
 {
   VAR_0++;
   VAR_12 = FUNC_4 (VAR_15);
   VAR_0--;

   if (VAR_12 != VAR_6)
     break;
 }
    }

  FUNC_0 ();

  return VAR_12;
}
