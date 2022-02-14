
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (char,struct ui_file*,char) ;
 int VAR_0 ;
 int FUNC_1 (char,struct ui_file*) ;
 int FUNC_2 (struct ui_file*,char*,unsigned int) ;
 int FUNC_3 (char*,struct ui_file*) ;
 struct ui_file* VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static void
FUNC_4 (struct ui_file *VAR_5, char *VAR_6, unsigned int VAR_7,
     int VAR_8, int VAR_9)
{
  unsigned int VAR_10;
  unsigned int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = 0;

  if (VAR_7 == 0)
    {
      FUNC_3 ("''", VAR_1);
      return;
    }

  for (VAR_10 = 0; VAR_10 < VAR_7 && VAR_11 < VAR_3; ++VAR_10)
    {


      unsigned int VAR_14;

      unsigned int VAR_15;

      VAR_0;

      if (VAR_13)
 {
   FUNC_3 (", ", VAR_5);
   VAR_13 = 0;
 }

      VAR_14 = VAR_10 + 1;
      VAR_15 = 1;
      while (VAR_14 < VAR_7 && VAR_6[VAR_14] == VAR_6[VAR_10])
 {
   ++VAR_14;
   ++VAR_15;
 }

      if (VAR_15 > VAR_4)
 {
   if (VAR_12)
     {
       if (VAR_2)
  FUNC_3 ("\\', ", VAR_5);
       else
  FUNC_3 ("', ", VAR_5);
       VAR_12 = 0;
     }
   FUNC_1 (VAR_6[VAR_10], VAR_5);
   FUNC_2 (VAR_5, " <repeats %u times>", VAR_15);
   VAR_10 = VAR_14 - 1;
   VAR_11 += VAR_4;
   VAR_13 = 1;
 }
      else
 {
   if (!VAR_12)
     {
       if (VAR_2)
  FUNC_3 ("\\'", VAR_5);
       else
  FUNC_3 ("'", VAR_5);
       VAR_12 = 1;
     }
   FUNC_0 (VAR_6[VAR_10], VAR_5, '"');
   ++VAR_11;
 }
    }


  if (VAR_12)
    {
      if (VAR_2)
 FUNC_3 ("\\'", VAR_5);
      else
 FUNC_3 ("'", VAR_5);
    }

  if (VAR_9 || VAR_10 < VAR_7)
    FUNC_3 ("...", VAR_5);
}
