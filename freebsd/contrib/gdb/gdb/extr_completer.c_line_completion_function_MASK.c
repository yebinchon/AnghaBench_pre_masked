
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* la_word_break_characters ) () ;} ;


 char** FUNC_0 (char const*,char*,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char**) ;

__attribute__((used)) static char *
FUNC_3 (const char *VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
  static char **VAR_6 = (char **) ((void*)0);
  static int VAR_7;
  char *VAR_8 = ((void*)0);

  if (VAR_3 == 0)
    {




      if (VAR_6)
 {


   FUNC_2 (VAR_6);
 }
      VAR_7 = 0;
      VAR_6 = FUNC_0 (VAR_2, VAR_4, VAR_5);
    }







  if (VAR_6)
    {
      VAR_8 = VAR_6[VAR_7];
      if (VAR_8)
 {
   VAR_7++;
 }
    }
  return (VAR_8);
}
