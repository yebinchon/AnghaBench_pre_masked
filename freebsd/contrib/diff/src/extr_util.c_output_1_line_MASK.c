
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (char const*,int,int,int *) ;
 int FUNC_2 (unsigned char) ;
 int * VAR_1 ;
 int FUNC_3 (unsigned char,int *) ;
 size_t VAR_2 ;

void
FUNC_4 (char const *VAR_3, char const *VAR_4, char const *VAR_5,
        char const *VAR_6)
{
  if (!VAR_0)
    FUNC_1 (VAR_3, sizeof (char), VAR_4 - VAR_3, VAR_1);
  else
    {
      register FILE *VAR_7 = VAR_1;
      register unsigned char VAR_8;
      register char const *VAR_9 = VAR_3;
      register size_t VAR_10 = 0;
      size_t VAR_11 = VAR_2;

      while (VAR_9 < VAR_4)
 switch ((VAR_8 = *VAR_9++))
   {
   case '\t':
     {
       size_t VAR_12 = VAR_11 - VAR_10 % VAR_11;
       VAR_10 += VAR_12;
       do
  FUNC_3 (' ', VAR_7);
       while (--VAR_12);
     }
     break;

   case '\r':
     FUNC_3 (VAR_8, VAR_7);
     if (VAR_5 && VAR_9 < VAR_4 && *VAR_9 != '\n')
       FUNC_0 (VAR_7, VAR_5, VAR_6);
     VAR_10 = 0;
     break;

   case '\b':
     if (VAR_10 == 0)
       continue;
     VAR_10--;
     FUNC_3 (VAR_8, VAR_7);
     break;

   default:
     VAR_10 += FUNC_2 (VAR_8) != 0;
     FUNC_3 (VAR_8, VAR_7);
     break;
   }
    }
}
