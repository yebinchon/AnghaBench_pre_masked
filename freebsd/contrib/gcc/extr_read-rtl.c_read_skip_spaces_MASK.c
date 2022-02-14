
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

int
FUNC_2 (FILE *VAR_2)
{
  int VAR_3;

  while (1)
    {
      VAR_3 = FUNC_1 (VAR_2);
      switch (VAR_3)
 {
 case '\n':
   VAR_1++;
   break;

 case ' ': case '\t': case '\f': case '\r':
   break;

 case ';':
   do
     VAR_3 = FUNC_1 (VAR_2);
   while (VAR_3 != '\n' && VAR_3 != VAR_0);
   VAR_1++;
   break;

 case '/':
   {
     int VAR_4;
     VAR_3 = FUNC_1 (VAR_2);
     if (VAR_3 != '*')
       FUNC_0 (VAR_2, '*', VAR_3);

     VAR_4 = 0;
     while ((VAR_3 = FUNC_1 (VAR_2)) && VAR_3 != VAR_0)
       {
  if (VAR_3 == '\n')
     VAR_1++;
         else if (VAR_4 == '*' && VAR_3 == '/')
    break;
         VAR_4 = VAR_3;
       }
   }
   break;

 default:
   return VAR_3;
 }
    }
}
