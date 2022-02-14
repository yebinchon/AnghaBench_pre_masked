
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (unsigned long,struct ui_file*,char) ;
 int FUNC_1 (unsigned long,struct ui_file*) ;
 int VAR_0 ;
 unsigned long FUNC_2 (char*,int) ;
 int FUNC_3 (struct ui_file*,char*,unsigned int) ;
 int FUNC_4 (char*,struct ui_file*) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

void
FUNC_5 (struct ui_file *VAR_4, char *VAR_5, unsigned int VAR_6,
     int VAR_7, int VAR_8)
{
  unsigned int VAR_9;
  unsigned int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;




  if (!VAR_8
      && VAR_6 > 0
      && (FUNC_2 (VAR_5 + (VAR_6 - 1) * VAR_7, VAR_7)
          == '\0'))
    VAR_6--;

  if (VAR_6 == 0)
    {
      FUNC_4 ("\"\"", VAR_4);
      return;
    }

  for (VAR_9 = 0; VAR_9 < VAR_6 && VAR_10 < VAR_2; ++VAR_9)
    {


      unsigned int VAR_13;

      unsigned int VAR_14;
      unsigned long VAR_15;

      VAR_0;

      if (VAR_12)
 {
   FUNC_4 (", ", VAR_4);
   VAR_12 = 0;
 }

      VAR_15 = FUNC_2 (VAR_5 + VAR_9 * VAR_7, VAR_7);

      VAR_13 = VAR_9 + 1;
      VAR_14 = 1;
      while (VAR_13 < VAR_6
      && FUNC_2 (VAR_5 + VAR_13 * VAR_7, VAR_7)
      == VAR_15)
 {
   ++VAR_13;
   ++VAR_14;
 }

      if (VAR_14 > VAR_3)
 {
   if (VAR_11)
     {
       if (VAR_1)
  FUNC_4 ("\\\", ", VAR_4);
       else
  FUNC_4 ("\", ", VAR_4);
       VAR_11 = 0;
     }
   FUNC_1 (VAR_15, VAR_4);
   FUNC_3 (VAR_4, " <repeats %u times>", VAR_14);
   VAR_9 = VAR_13 - 1;
   VAR_10 += VAR_3;
   VAR_12 = 1;
 }
      else
 {
   if (!VAR_11)
     {
       if (VAR_1)
  FUNC_4 ("\\\"", VAR_4);
       else
  FUNC_4 ("\"", VAR_4);
       VAR_11 = 1;
     }
   FUNC_0 (VAR_15, VAR_4, '"');
   ++VAR_10;
 }
    }


  if (VAR_11)
    {
      if (VAR_1)
 FUNC_4 ("\\\"", VAR_4);
      else
 FUNC_4 ("\"", VAR_4);
    }

  if (VAR_8 || VAR_9 < VAR_6)
    FUNC_4 ("...", VAR_4);
}
