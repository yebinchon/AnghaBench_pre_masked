
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

char *
FUNC_5 (struct gdbarch *VAR_1, int VAR_2, char **VAR_3)
{
  char *VAR_4;

  if (VAR_0)
    {



      char *VAR_5 = "\"!#$&*()\\|[]{}<>?'\"`~^; \t\n";
      int VAR_6;
      int VAR_7 = 0;
      char *VAR_8, *VAR_9;


      for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
 VAR_7 += 2 * FUNC_3 (VAR_3[VAR_6]) + 1 + 2 * (VAR_3[VAR_6][0] == '\0');

      VAR_4 = (char *) FUNC_4 (VAR_7);
      VAR_8 = VAR_4;

      for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
 {
   if (VAR_6 > 0)
     *VAR_8++ = ' ';


   if (VAR_3[VAR_6][0] == '\0')
     {
       *VAR_8++ = '\'';
       *VAR_8++ = '\'';
     }
   else
     {
       for (VAR_9 = VAR_3[VAR_6]; *VAR_9; ++VAR_9)
  {
    if (FUNC_2 (VAR_5, *VAR_9) != ((void*)0))
      *VAR_8++ = '\\';
    *VAR_8++ = *VAR_9;
  }
     }
 }
      *VAR_8 = '\0';
    }
  else
    {


      int VAR_10;
      int VAR_11 = 0;

      for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10)
 {
   char *VAR_12 = FUNC_2 (VAR_3[VAR_10], ' ');
   if (VAR_12 == ((void*)0))
     VAR_12 = FUNC_2 (VAR_3[VAR_10], '\t');
   if (VAR_12 == ((void*)0))
     VAR_12 = FUNC_2 (VAR_3[VAR_10], '\n');
   if (VAR_12 != ((void*)0))
     FUNC_0 ("can't handle command-line argument containing whitespace");
   VAR_11 += FUNC_3 (VAR_3[VAR_10]) + 1;
 }

      VAR_4 = (char *) FUNC_4 (VAR_11);
      VAR_4[0] = '\0';
      for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10)
 {
   if (VAR_10 > 0)
     FUNC_1 (VAR_4, " ");
   FUNC_1 (VAR_4, VAR_3[VAR_10]);
 }
    }

  return VAR_4;
}
