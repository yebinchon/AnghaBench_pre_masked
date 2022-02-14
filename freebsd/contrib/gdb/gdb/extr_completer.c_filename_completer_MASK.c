
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char**,int) ;

char **
FUNC_8 (char *VAR_1, char *VAR_2)
{
  int VAR_3;
  char **VAR_4;
  int VAR_5;
  int VAR_6;

  VAR_5 = 0;

  VAR_6 = 1;
  VAR_4 = (char **) FUNC_6 (VAR_6 * sizeof (char *));

  VAR_3 = 0;
  while (1)
    {
      char *VAR_7;
      VAR_7 = FUNC_0 (VAR_1, VAR_3);
      if (VAR_5 >= VAR_6)
 {
   VAR_6 *= 2;
   VAR_4 =
     (char **) FUNC_7 (VAR_4,
    VAR_6 * sizeof (char *));
 }
      if (VAR_7 == ((void*)0))
 {
   VAR_4[VAR_5++] = VAR_7;
   break;
 }




      VAR_3 = 1;


      if (VAR_7[FUNC_3 (VAR_7) - 1] == '~')
 continue;

      {
 char *VAR_8;
 if (VAR_2 == VAR_1)

   VAR_4[VAR_5++] = VAR_7;
 else if (VAR_2 > VAR_1)
   {

     VAR_8 = FUNC_6 (FUNC_3 (VAR_7) + 5);
     FUNC_2 (VAR_8, VAR_7 + (VAR_2 - VAR_1));
     VAR_4[VAR_5++] = VAR_8;
     FUNC_5 (VAR_7);
   }
 else
   {

     VAR_8 = FUNC_6 (FUNC_3 (VAR_7) + (VAR_1 - VAR_2) + 5);
     FUNC_4 (VAR_8, VAR_2, VAR_1 - VAR_2);
     VAR_8[VAR_1 - VAR_2] = '\0';
     FUNC_1 (VAR_8, VAR_7);
     VAR_4[VAR_5++] = VAR_8;
     FUNC_5 (VAR_7);
   }
      }
    }
  return VAR_4;
}
