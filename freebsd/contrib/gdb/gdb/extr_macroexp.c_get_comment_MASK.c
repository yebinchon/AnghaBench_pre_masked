
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct macro_buffer*,char*,char*) ;

__attribute__((used)) static int
FUNC_2 (struct macro_buffer *VAR_0, char *VAR_1, char *VAR_2)
{
  if (VAR_1 + 2 > VAR_2)
    return 0;
  else if (VAR_1[0] == '/'
           && VAR_1[1] == '*')
    {
      char *VAR_3 = VAR_1;

      VAR_1 += 2;

      for (; VAR_1 < VAR_2; VAR_1++)
        if (VAR_1 + 2 <= VAR_2
            && VAR_1[0] == '*'
            && VAR_1[1] == '/')
          {
            VAR_1 += 2;
            FUNC_1 (VAR_0, VAR_3, VAR_1);
            return 1;
          }

      FUNC_0 ("Unterminated comment in macro expansion.");
    }
  else if (VAR_1[0] == '/'
           && VAR_1[1] == '/')
    {
      char *VAR_4 = VAR_1;

      VAR_1 += 2;
      for (; VAR_1 < VAR_2; VAR_1++)
        if (*VAR_1 == '\n')
          break;

      FUNC_1 (VAR_0, VAR_4, VAR_1);
      return 1;
    }
  else
    return 0;
}
