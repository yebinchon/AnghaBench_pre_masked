
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {int * body_list; scalar_t__ body_count; int control_type; int * line; int * next; } ;
typedef enum misc_command_type { ____Placeholder_misc_command_type } misc_command_type ;


 int VAR_0 ;
 struct command_line* FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * FUNC_3 (char*,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static enum misc_command_type
FUNC_7 (struct command_line **VAR_13)
{
  char *VAR_14, *VAR_15, *VAR_16, VAR_17[256];
  int VAR_18 = 0;

  if (VAR_2 >= 254)
    FUNC_2 ("Control nesting too deep!\n");


  if (VAR_6 == VAR_11 || (VAR_6 == 0 && VAR_9 != ((void*)0)))
    {
      for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++)
 VAR_17[VAR_18] = ' ';
      VAR_17[VAR_18] = '>';
      VAR_17[VAR_18 + 1] = '\0';
      VAR_16 = (char *) &VAR_17[0];
    }
  else
    VAR_16 = ((void*)0);

  VAR_14 = FUNC_1 (VAR_16, VAR_6 == VAR_11, "commands");


  if (VAR_14 == ((void*)0))
    return VAR_4;


  while (*VAR_14 == ' ' || *VAR_14 == '\t')
    VAR_14++;

  VAR_15 = VAR_14 + FUNC_4 (VAR_14);
  while (VAR_15 != VAR_14 && (VAR_15[-1] == ' ' || VAR_15[-1] == '\t'))
    VAR_15--;




  if (VAR_15 == VAR_14 || VAR_14[0] == '#')
    return VAR_7;


  if (VAR_15 - VAR_14 == 3 && !FUNC_5 (VAR_14, "end", 3))
    return VAR_4;


  if (VAR_15 - VAR_14 == 4 && !FUNC_5 (VAR_14, "else", 4))
    return VAR_3;



  if (VAR_15 - VAR_14 > 5 && !FUNC_5 (VAR_14, "while", 5))
    *VAR_13 = FUNC_0 (VAR_12, VAR_14 + 6);
  else if (VAR_15 - VAR_14 > 2 && !FUNC_5 (VAR_14, "if", 2))
    *VAR_13 = FUNC_0 (VAR_5, VAR_14 + 3);
  else if (VAR_15 - VAR_14 == 10 && !FUNC_5 (VAR_14, "loop_break", 10))
    {
      *VAR_13 = (struct command_line *)
 FUNC_6 (sizeof (struct command_line));
      (*VAR_13)->next = ((void*)0);
      (*VAR_13)->line = ((void*)0);
      (*VAR_13)->control_type = VAR_0;
      (*VAR_13)->body_count = 0;
      (*VAR_13)->body_list = ((void*)0);
    }
  else if (VAR_15 - VAR_14 == 13 && !FUNC_5 (VAR_14, "loop_continue", 13))
    {
      *VAR_13 = (struct command_line *)
 FUNC_6 (sizeof (struct command_line));
      (*VAR_13)->next = ((void*)0);
      (*VAR_13)->line = ((void*)0);
      (*VAR_13)->control_type = VAR_1;
      (*VAR_13)->body_count = 0;
      (*VAR_13)->body_list = ((void*)0);
    }
  else
    {

      *VAR_13 = (struct command_line *)
 FUNC_6 (sizeof (struct command_line));
      (*VAR_13)->next = ((void*)0);
      (*VAR_13)->line = FUNC_3 (VAR_14, VAR_15 - VAR_14);
      (*VAR_13)->control_type = VAR_10;
      (*VAR_13)->body_count = 0;
      (*VAR_13)->body_list = ((void*)0);
    }


  return VAR_8;
}
