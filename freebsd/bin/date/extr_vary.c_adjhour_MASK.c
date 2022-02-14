
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_hour; } ;


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
        int VAR_4;

        VAR_4 = (VAR_0->tm_hour + VAR_2) / 24;
        VAR_2 %= 24;
        VAR_0->tm_hour += VAR_2;
        VAR_0->tm_hour %= 24;
        if (!FUNC_0(VAR_0, '+', VAR_4, 0))
          return 0;
      }
      break;

    case '-':
      if (VAR_2) {
        int VAR_5;

        VAR_5 = VAR_2 / 24;
        VAR_2 %= 24;
        if (VAR_2 > VAR_0->tm_hour) {
          VAR_5++;
          VAR_2 -= 24;
        }
        VAR_0->tm_hour -= VAR_2;
        if (!FUNC_0(VAR_0, '-', VAR_5, 0))
          return 0;
      }
      break;

    default:
      if (VAR_2 > 23)
        return 0;
      VAR_0->tm_hour = VAR_2;
  }

  return !VAR_3 || FUNC_1(VAR_0, VAR_1) != -1;
}
