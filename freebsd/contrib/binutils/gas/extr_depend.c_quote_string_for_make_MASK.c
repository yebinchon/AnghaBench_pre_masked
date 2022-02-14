
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char,int *) ;

__attribute__((used)) static int
FUNC_1 (FILE *VAR_0, char *VAR_1)
{
  char *VAR_2 = VAR_1;
  int VAR_3 = 0;

  for (;;)
    {
      char VAR_4 = *VAR_2++;

      switch (VAR_4)
 {
 case '\0':
 case ' ':
 case '\t':
   {






     char *VAR_5;

     for (VAR_5 = VAR_2 - 1; VAR_1 < VAR_5 && VAR_5[-1] == '\\'; VAR_5--)
       {
  if (VAR_0)
    FUNC_0 ('\\', VAR_0);
  VAR_3++;
       }
   }
   if (!VAR_4)
     return VAR_3;
   if (VAR_0)
     FUNC_0 ('\\', VAR_0);
   VAR_3++;
   goto ordinary_char;

 case '$':
   if (VAR_0)
     FUNC_0 (VAR_4, VAR_0);
   VAR_3++;


 default:
 ordinary_char:





   if (VAR_0)
     FUNC_0 (VAR_4, VAR_0);
   VAR_3++;
   break;
 }
    }
}
