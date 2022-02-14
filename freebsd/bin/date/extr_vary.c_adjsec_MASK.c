
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_sec; } ;


 int FUNC_0 (struct tm*,char,int,int ) ;
 int FUNC_1 (struct tm*,char) ;

__attribute__((used)) static int
FUNC_2(struct tm *VAR_0, char VAR_1, int VAR_2, int VAR_3)
{
  if (VAR_2 < 0)
    return 0;

  switch (VAR_1) {
    case '+':
      if (VAR_2) {
        if (!FUNC_0(VAR_0, '+', (VAR_0->tm_sec + VAR_2) / 60, 0))
          return 0;
        VAR_2 %= 60;
        VAR_0->tm_sec += VAR_2;
        if (VAR_0->tm_sec > 59)
          VAR_0->tm_sec -= 60;
      }
      break;

    case '-':
      if (VAR_2) {
        if (!FUNC_0(VAR_0, '-', VAR_2 / 60, 0))
          return 0;
        VAR_2 %= 60;
        if (VAR_2 > VAR_0->tm_sec) {
          if (!FUNC_0(VAR_0, '-', 1, 0))
            return 0;
          VAR_2 -= 60;
        }
        VAR_0->tm_sec -= VAR_2;
      }
      break;

    default:
      if (VAR_2 > 59)
        return 0;
      VAR_0->tm_sec = VAR_2;
  }

  return !VAR_3 || FUNC_1(VAR_0, VAR_1) != -1;
}
