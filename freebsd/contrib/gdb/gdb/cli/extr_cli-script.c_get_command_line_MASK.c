
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum command_control_type { ____Placeholder_command_control_type } command_control_type ;


 struct command_line* FUNC_0 (int,char*) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (struct cleanup*) ;
 scalar_t__ VAR_0 ;
 struct cleanup* FUNC_3 (struct command_line**) ;
 scalar_t__ FUNC_4 (struct command_line*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct command_line *
FUNC_6 (enum command_control_type VAR_1, char *VAR_2)
{
  struct command_line *VAR_3;
  struct cleanup *VAR_4 = ((void*)0);


  VAR_3 = FUNC_0 (VAR_1, VAR_2);

  VAR_4 = FUNC_3 (&VAR_3);


  if (FUNC_4 (VAR_3) == VAR_0)
    {
      FUNC_5 ("error reading in control structure\n");
      FUNC_2 (VAR_4);
      return ((void*)0);
    }

  FUNC_1 (VAR_4);
  return VAR_3;
}
