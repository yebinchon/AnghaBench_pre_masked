
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 int FUNC_2 (int ) ;

symbolS *
FUNC_3 (char *VAR_6)
{
  if (*VAR_6 == '$')
    {
      int VAR_7 = 0, VAR_8;

      switch (*++VAR_6)
 {
 case 'f':
   if (VAR_6[1] == 'p' && VAR_6[2] == '\0')
     return VAR_5[VAR_1];
   VAR_7 = 32;


 case 'r':
   if (!FUNC_0 (*++VAR_6))
     break;


 case '0': case '1': case '2': case '3': case '4':
 case '5': case '6': case '7': case '8': case '9':
   if (VAR_6[1] == '\0')
     VAR_8 = VAR_6[0] - '0';
   else if (VAR_6[0] != '0' && FUNC_0 (VAR_6[1]) && VAR_6[2] == '\0')
     {
       VAR_8 = (VAR_6[0] - '0') * 10 + VAR_6[1] - '0';
       if (VAR_8 >= 32)
  break;
     }
   else
     break;

   if (!VAR_4 && (VAR_8 + VAR_7) == VAR_0)
     FUNC_2 (FUNC_1("Used $at without \".set noat\""));
   return VAR_5[VAR_8 + VAR_7];

 case 'a':
   if (VAR_6[1] == 't' && VAR_6[2] == '\0')
     {
       if (!VAR_4)
  FUNC_2 (FUNC_1("Used $at without \".set noat\""));
       return VAR_5[VAR_0];
     }
   break;

 case 'g':
   if (VAR_6[1] == 'p' && VAR_6[2] == '\0')
     return VAR_5[VAR_3];
   break;

 case 's':
   if (VAR_6[1] == 'p' && VAR_6[2] == '\0')
     return VAR_5[VAR_2];
   break;
 }
    }
  return ((void*)0);
}
