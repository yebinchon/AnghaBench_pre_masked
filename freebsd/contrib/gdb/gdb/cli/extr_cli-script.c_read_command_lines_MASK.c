
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {scalar_t__ control_type; struct command_line* next; } ;
struct cleanup {int dummy; } ;
typedef enum misc_command_type { ____Placeholder_misc_command_type } misc_command_type ;
typedef enum command_control_type { ____Placeholder_command_control_type } command_control_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int VAR_5 ;
 struct cleanup* FUNC_5 (struct command_line**) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (struct command_line**) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct command_line*) ;
 int VAR_8 ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 () ;
 scalar_t__ VAR_9 ;

struct command_line *
FUNC_13 (char *VAR_10, int VAR_11)
{
  struct command_line *VAR_12, *VAR_13, *VAR_14;
  struct cleanup *VAR_15;
  enum command_control_type VAR_16;
  enum misc_command_type VAR_17;

  VAR_1 = 0;
  if (&FUNC_8)
    {

      FUNC_8) ("%s  %s\n", VAR_10, VAR_0);
    }
  else if (VAR_11 && FUNC_4 ())
    {
      FUNC_6 ("%s\n%s\n", VAR_10, VAR_0);
      FUNC_3 (VAR_3);
    }

  VAR_12 = VAR_13 = ((void*)0);
  VAR_15 = ((void*)0);

  while (1)
    {
      VAR_17 = FUNC_7 (&VAR_14);


      if (VAR_17 == VAR_6)
 continue;

      if (VAR_17 == VAR_2)
 {
   VAR_16 = VAR_8;
   break;
 }

      if (VAR_17 != VAR_7)
 {
   VAR_16 = VAR_5;
   break;
 }

      if (VAR_14->control_type == VAR_9
   || VAR_14->control_type == VAR_4)
 {
   VAR_1++;
   VAR_16 = FUNC_10 (VAR_14);
   VAR_1--;

   if (VAR_16 == VAR_5)
     break;
 }

      if (VAR_13)
 {
   VAR_13->next = VAR_14;
 }
      else
 {
   VAR_12 = VAR_14;
   VAR_15 = FUNC_5 (&VAR_12);
 }
      VAR_13 = VAR_14;
    }

  FUNC_2 ();

  if (VAR_12)
    {
      if (VAR_16 != VAR_5)
 {
   FUNC_0 (VAR_15);
 }
      else
 FUNC_1 (VAR_15);
    }

  if (&FUNC_9)
    {
      FUNC_9) ();
    }
  return (VAR_12);
}
