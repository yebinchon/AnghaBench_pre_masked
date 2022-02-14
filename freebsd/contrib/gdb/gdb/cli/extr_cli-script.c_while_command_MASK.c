
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct command_line*) ;
 int FUNC_1 (struct command_line**) ;
 struct command_line* FUNC_2 (int ,char*) ;
 int VAR_1 ;

void
FUNC_3 (char *VAR_2, int VAR_3)
{
  struct command_line *VAR_4 = ((void*)0);

  VAR_0 = 1;
  VAR_4 = FUNC_2 (VAR_1, VAR_2);

  if (VAR_4 == ((void*)0))
    return;

  FUNC_0 (VAR_4);
  FUNC_1 (&VAR_4);
}
