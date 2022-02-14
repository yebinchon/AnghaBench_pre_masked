
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ {char** vector; } ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (struct environ *VAR_0, char *VAR_1)
{
  int VAR_2 = FUNC_1 (VAR_1);
  char **VAR_3 = VAR_0->vector;
  char *VAR_4;

  for (; (VAR_4 = *VAR_3) != ((void*)0); VAR_3++)
    {
      if (FUNC_0 (VAR_4, VAR_1, VAR_2) && VAR_4[VAR_2] == '=')
 {
   FUNC_2 (VAR_4);



   while ((VAR_3[0] = VAR_3[1]) != ((void*)0))
     {
       VAR_3++;
     }
   break;
 }
    }
}
