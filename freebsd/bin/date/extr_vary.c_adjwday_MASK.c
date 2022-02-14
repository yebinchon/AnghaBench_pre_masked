
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_wday; } ;


 int FUNC_0 (struct tm*,char,int,int) ;

__attribute__((used)) static int
FUNC_1(struct tm *VAR_0, char VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
  if (VAR_2 < 0)
    return 0;

  switch (VAR_1) {
    case '+':
      if (VAR_3)
        if (VAR_2 < VAR_0->tm_wday)
          VAR_2 = 7 - VAR_0->tm_wday + VAR_2;
        else
          VAR_2 -= VAR_0->tm_wday;
      else
        VAR_2 *= 7;
      return !VAR_2 || FUNC_0(VAR_0, '+', VAR_2, VAR_4);
    case '-':
      if (VAR_3) {
        if (VAR_2 > VAR_0->tm_wday)
          VAR_2 = 7 - VAR_2 + VAR_0->tm_wday;
        else
          VAR_2 = VAR_0->tm_wday - VAR_2;
      } else
        VAR_2 *= 7;
      return !VAR_2 || FUNC_0(VAR_0, '-', VAR_2, VAR_4);
    default:
      if (VAR_2 < VAR_0->tm_wday)
        return FUNC_0(VAR_0, '-', VAR_0->tm_wday - VAR_2, VAR_4);
      else if (VAR_2 > 6)
        return 0;
      else if (VAR_2 > VAR_0->tm_wday)
        return FUNC_0(VAR_0, '+', VAR_2 - VAR_0->tm_wday, VAR_4);
  }
  return 1;
}
