
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {char* line; struct command_line* next; } ;
struct cmd_list_element {scalar_t__ class; char* doc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct command_line**) ;
 struct cmd_list_element* FUNC_2 (char**,int ,char*,int ,int) ;
 struct command_line* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;

void
FUNC_10 (char *VAR_2, int VAR_3)
{
  struct command_line *VAR_4;
  struct cmd_list_element *VAR_5;
  char *VAR_6 = VAR_2;
  char VAR_7[128];

  FUNC_7 (VAR_2);

  VAR_5 = FUNC_2 (&VAR_6, VAR_1, "", 0, 1);

  if (VAR_5->class != VAR_0)
    FUNC_0 ("Command \"%s\" is built-in.", VAR_2);

  FUNC_4 (VAR_7, "Type documentation for \"%s\".", VAR_2);
  VAR_4 = FUNC_3 (VAR_7, VAR_3);

  if (VAR_5->doc)
    FUNC_8 (VAR_5->doc);

  {
    struct command_line *VAR_8;
    int VAR_9 = 0;

    for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->next)
      VAR_9 += FUNC_6 (VAR_8->line) + 1;

    VAR_5->doc = (char *) FUNC_9 (VAR_9 + 1);
    *VAR_5->doc = 0;

    for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->next)
      {
 FUNC_5 (VAR_5->doc, VAR_8->line);
 if (VAR_8->next)
   FUNC_5 (VAR_5->doc, "\n");
      }
  }

  FUNC_1 (&VAR_4);
}
