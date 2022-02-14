
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,struct ui_file*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char**,int ) ;

void
FUNC_4 (char *VAR_0, char *VAR_1,
          struct ui_file *VAR_2)
{
  int VAR_3 = FUNC_0 (VAR_0, "__ct__", 6);
  int VAR_4 = FUNC_0 (VAR_0, "__dt__", 6);

  if (VAR_3 || VAR_4)
    {
      VAR_0 += 6;
    }

  FUNC_1 (VAR_1, VAR_2);

  if (VAR_0 && (*VAR_0 != 0))
    {
      int VAR_5 = 0;
      int VAR_6 = 0;
      char VAR_7;
      char *VAR_8;
      FUNC_1 (" (", VAR_2);

      while (FUNC_2 (VAR_0[0]))
 {
   while (FUNC_2 (VAR_0[VAR_6]))
     {
       VAR_6++;
     }
   VAR_5 = FUNC_3 (VAR_0, &VAR_8, 0);
   VAR_0 += VAR_6;
   VAR_7 = VAR_0[VAR_5];
   VAR_0[VAR_5] = 0;
   FUNC_1 (VAR_0, VAR_2);
   VAR_0[VAR_5] = VAR_7;
   VAR_0 += VAR_5;
   if (VAR_0[0] != 0)
     {
       FUNC_1 (", ", VAR_2);
     }
 }
      FUNC_1 (")", VAR_2);
    }
}
