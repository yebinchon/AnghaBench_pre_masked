
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mon; int tm_mday; } ;


 int FUNC_0 (struct tm*,char,int,int ) ;
 int FUNC_1 (struct tm*) ;
 int FUNC_2 (struct tm*,char) ;

__attribute__((used)) static int
FUNC_3(struct tm *VAR_0, char VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5;

  if (VAR_2 < 0)
    return 0;

  switch (VAR_1) {
    case '+':
      if (VAR_3) {
        if (VAR_2 <= VAR_0->tm_mon)
          VAR_2 += 11 - VAR_0->tm_mon;
        else
          VAR_2 -= VAR_0->tm_mon + 1;
      }
      if (VAR_2) {
        if (!FUNC_0(VAR_0, '+', (VAR_0->tm_mon + VAR_2) / 12, 0))
          return 0;
        VAR_2 %= 12;
        VAR_0->tm_mon += VAR_2;
        if (VAR_0->tm_mon > 11)
          VAR_0->tm_mon -= 12;
      }
      break;

    case '-':
      if (VAR_3) {
        if (VAR_2-1 > VAR_0->tm_mon)
          VAR_2 = 13 - VAR_2 + VAR_0->tm_mon;
        else
          VAR_2 = VAR_0->tm_mon - VAR_2 + 1;
      }
      if (VAR_2) {
        if (!FUNC_0(VAR_0, '-', VAR_2 / 12, 0))
          return 0;
        VAR_2 %= 12;
        if (VAR_2 > VAR_0->tm_mon) {
          if (!FUNC_0(VAR_0, '-', 1, 0))
            return 0;
          VAR_2 -= 12;
        }
        VAR_0->tm_mon -= VAR_2;
      }
      break;

    default:
      if (VAR_2 > 12 || VAR_2 < 1)
        return 0;
      VAR_0->tm_mon = --VAR_2;
  }


  VAR_5 = FUNC_1(VAR_0);
  if (VAR_0->tm_mday > VAR_5)
    VAR_0->tm_mday = VAR_5;

  return !VAR_4 || FUNC_2(VAR_0, VAR_1) != -1;
}
