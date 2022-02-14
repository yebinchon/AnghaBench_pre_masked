
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {int dummy; } ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (struct macro_buffer*,char*,char*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3 (struct macro_buffer *VAR_0, char *VAR_1, char *VAR_2)
{



  static const char * const VAR_3[] = {
    "[", "]", "(", ")", "{", "}", ".", "->",
    "++", "--", "&", "*", "+", "-", "~", "!",
    "/", "%", "<<", ">>", "<", ">", "<=", ">=", "==", "!=",
    "^", "|", "&&", "||",
    "?", ":", ";", "...",
    "=", "*=", "/=", "%=", "+=", "-=", "<<=", ">>=", "&=", "^=", "|=",
    ",", "#", "##",
    "<:", ":>", "<%", "%>", "%:", "%:%:",
    0
  };

  int VAR_4;

  if (VAR_1 + 1 <= VAR_2)
    {
      for (VAR_4 = 0; VAR_3[VAR_4]; VAR_4++)
        {
          const char *VAR_5 = VAR_3[VAR_4];

          if (VAR_1[0] == VAR_5[0])
            {
              int VAR_6 = FUNC_2 (VAR_5);

              if (VAR_1 + VAR_6 <= VAR_2
                  && ! FUNC_0 (VAR_1, VAR_5, VAR_6))
                {
                  FUNC_1 (VAR_0, VAR_1, VAR_1 + VAR_6);
                  return 1;
                }
            }
        }
    }

  return 0;
}
