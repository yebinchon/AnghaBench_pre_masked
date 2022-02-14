
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
struct backtrace_command_args {char* count_exp; int show_locals; int from_tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 char** FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,int ) ;
 int FUNC_2 (struct cleanup*) ;
 struct cleanup* FUNC_3 (char**) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char FUNC_9 (char) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12 (char *VAR_2, int VAR_3)
{
  struct cleanup *VAR_4 = (struct cleanup *) ((void*)0);
  char **VAR_5 = (char **) ((void*)0);
  int VAR_6 = (-1), VAR_7 = 0, VAR_8 = 0;
  char *VAR_9 = VAR_2;
  struct backtrace_command_args VAR_10;

  if (VAR_2 != (char *) ((void*)0))
    {
      int VAR_11;

      VAR_5 = FUNC_0 (VAR_2);
      VAR_4 = FUNC_3 (VAR_5);
      VAR_8 = 0;
      for (VAR_11 = 0; (VAR_5[VAR_11] != (char *) ((void*)0)); VAR_11++)
 {
   unsigned int VAR_12;

   for (VAR_12 = 0; (VAR_12 < FUNC_7 (VAR_5[VAR_11])); VAR_12++)
     VAR_5[VAR_11][VAR_12] = FUNC_9 (VAR_5[VAR_11][VAR_12]);

   if (VAR_6 < 0 && FUNC_8 (VAR_5[VAR_11], "full"))
     VAR_6 = VAR_8;
   else
     {
       VAR_8++;
       VAR_7 += FUNC_7 (VAR_5[VAR_11]);
     }
 }
      VAR_7 += VAR_8;
      if (VAR_6 >= 0)
 {
   if (VAR_7 > 0)
     {
       VAR_9 = (char *) FUNC_11 (VAR_7 + 1);
       if (!VAR_9)
  FUNC_5 (0);
       else
  {
    FUNC_4 (VAR_9, 0, VAR_7 + 1);
    for (VAR_11 = 0; (VAR_11 < (VAR_8 + 1)); VAR_11++)
      {
        if (VAR_11 != VAR_6)
   {
     FUNC_6 (VAR_9, VAR_5[VAR_11]);
     FUNC_6 (VAR_9, " ");
   }
      }
  }
     }
   else
     VAR_9 = (char *) ((void*)0);
 }
    }

  VAR_10.count_exp = VAR_9;
  VAR_10.show_locals = (VAR_6 >= 0);
  VAR_10.from_tty = VAR_3;
  FUNC_1 (VAR_1, (char *)&VAR_10, "", VAR_0);

  if (VAR_6 >= 0 && VAR_7 > 0)
    FUNC_10 (VAR_9);

  if (VAR_4)
    FUNC_2 (VAR_4);
}
