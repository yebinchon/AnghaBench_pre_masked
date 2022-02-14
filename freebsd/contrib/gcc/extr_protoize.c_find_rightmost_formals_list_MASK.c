
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 int FUNC_2 (int,char const*) ;
 char const* VAR_0 ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static const char *
FUNC_4 (const char *VAR_1)
{
  const char *VAR_2;
  for (VAR_2 = VAR_1; *VAR_2 != '\n'; VAR_2++)
    continue;
  VAR_2--;
  while (1)
    {
      char VAR_3;
      const char *VAR_4;



      while (*VAR_2 != ')')
 {
   if (FUNC_1 ((const unsigned char)*VAR_2))
     while (FUNC_1 ((const unsigned char)*VAR_2))
       FUNC_2 (--VAR_2 > VAR_0, 0);
   else
     FUNC_2 (--VAR_2 > VAR_0, 0);
 }

      VAR_3 = *(VAR_4 = FUNC_3 (VAR_2));
      if ((VAR_3 == '{') || FUNC_0 ((unsigned char) VAR_3))
 break;





      FUNC_2 (--VAR_2 > VAR_0, 0);
    }



  return VAR_2;
}
