
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0, const char *VAR_1)
{
  char *VAR_2;
  int VAR_3 = 0;

  for (VAR_2 = VAR_0; VAR_2 < VAR_1; VAR_2++)
    {
      switch (*VAR_2)
 {
 case '/':
   if (VAR_2[1] != '*')
     goto regular;
   VAR_3 = 1;
   VAR_2[0] = ' ';
   VAR_2[1] = ' ';
   VAR_2 += 2;
   while (VAR_2[1] != '/' || VAR_2[0] != '*')
     {
       if (!FUNC_0 ((const unsigned char)*VAR_2))
  *VAR_2 = ' ';
       ++VAR_2;
       FUNC_1 (VAR_2 < VAR_1);
     }
   *VAR_2++ = ' ';
   *VAR_2 = ' ';
   break;

 case '#':
   if (VAR_3)
     goto regular;
   *VAR_2 = ' ';
   while (VAR_2[1] != '\n' || VAR_2[0] == '\\')
     {
       if (!FUNC_0 ((const unsigned char)*VAR_2))
  *VAR_2 = ' ';
       ++VAR_2;
       FUNC_1 (VAR_2 < VAR_1);
     }
   *VAR_2++ = ' ';
   break;

 case '\'':
   VAR_3 = 1;
   while (VAR_2[1] != '\'' || VAR_2[0] == '\\')
     {
       if (VAR_2[0] == '\\'
    && !FUNC_0 ((const unsigned char) VAR_2[1]))
  VAR_2[1] = ' ';
       if (!FUNC_0 ((const unsigned char)*VAR_2))
  *VAR_2 = ' ';
       ++VAR_2;
       FUNC_1 (VAR_2 < VAR_1);
     }
   *VAR_2++ = ' ';
   break;

 case '"':
   VAR_3 = 1;
   while (VAR_2[1] != '"' || VAR_2[0] == '\\')
     {
       if (VAR_2[0] == '\\'
    && !FUNC_0 ((const unsigned char) VAR_2[1]))
  VAR_2[1] = ' ';
       if (!FUNC_0 ((const unsigned char)*VAR_2))
  *VAR_2 = ' ';
       ++VAR_2;
       FUNC_1 (VAR_2 < VAR_1);
     }
   if (!FUNC_0 ((const unsigned char)*VAR_2))
     *VAR_2 = ' ';
   VAR_2++;
   break;

 case '\\':
   if (VAR_2[1] != '\n')
     goto regular;
   *VAR_2 = ' ';
   break;

 case '\n':
   VAR_3 = 0;
   break;

 case ' ':
 case '\v':
 case '\t':
 case '\r':
 case '\f':
 case '\b':
   break;

 default:
regular:
   VAR_3 = 1;
   break;
 }
    }
}
