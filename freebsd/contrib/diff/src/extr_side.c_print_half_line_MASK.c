
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int * VAR_1 ;
 int FUNC_1 (unsigned char,int *) ;
 int FUNC_2 (int ,size_t) ;
 size_t VAR_2 ;

__attribute__((used)) static size_t
FUNC_3 (char const *const *VAR_3, size_t VAR_4, size_t VAR_5)
{
  FILE *VAR_6 = VAR_1;
  register size_t VAR_7 = 0;
  register size_t VAR_8 = 0;
  register char const *VAR_9 = VAR_3[0];
  register char const *VAR_10 = VAR_3[1];

  while (VAR_9 < VAR_10)
    {
      register unsigned char VAR_11 = *VAR_9++;

      switch (VAR_11)
 {
 case '\t':
   {
     size_t VAR_12 = VAR_2 - VAR_7 % VAR_2;
     if (VAR_7 == VAR_8)
       {
  size_t VAR_13 = VAR_8 + VAR_12;
  if (VAR_0)
    {
      if (VAR_5 < VAR_13)
        VAR_13 = VAR_5;
      for (; VAR_8 < VAR_13; VAR_8++)
        FUNC_1 (' ', VAR_6);
    }
  else
    if (VAR_13 < VAR_5)
      {
        VAR_8 = VAR_13;
        FUNC_1 (VAR_11, VAR_6);
      }
       }
     VAR_7 += VAR_12;
   }
   break;

 case '\r':
   {
     FUNC_1 (VAR_11, VAR_6);
     FUNC_2 (0, VAR_4);
     VAR_7 = VAR_8 = 0;
   }
   break;

 case '\b':
   if (VAR_7 != 0 && --VAR_7 < VAR_5)
     {
       if (VAR_8 <= VAR_7)

  for (; VAR_8 < VAR_7; VAR_8++)
    FUNC_1 (' ', VAR_6);
       else
  {
    VAR_8 = VAR_7;
    FUNC_1 (VAR_11, VAR_6);
  }
     }
   break;

 case '\f':
 case '\v':
 control_char:
   if (VAR_7 < VAR_5)
     FUNC_1 (VAR_11, VAR_6);
   break;

 default:
   if (! FUNC_0 (VAR_11))
     goto control_char;

 case ' ':
   if (VAR_7++ < VAR_5)
     {
       VAR_8 = VAR_7;
       FUNC_1 (VAR_11, VAR_6);
     }
   break;

 case '\n':
   return VAR_8;
 }
    }

  return VAR_8;
}
