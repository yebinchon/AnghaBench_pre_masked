
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mday; } ;


 int FUNC_0 (struct tm*,char,int,int ,int ) ;
 int FUNC_1 (struct tm*) ;
 int FUNC_2 (struct tm*,char) ;

__attribute__((used)) static int
FUNC_3(struct tm *VAR_0, char VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4;

  switch (VAR_1) {
    case '+':
      while (VAR_2) {
        VAR_4 = FUNC_1(VAR_0);
        if (VAR_2 > VAR_4 - VAR_0->tm_mday) {
          VAR_2 -= VAR_4 - VAR_0->tm_mday + 1;
          VAR_0->tm_mday = 1;
          if (!FUNC_0(VAR_0, '+', 1, 0, 0))
            return 0;
        } else {
          VAR_0->tm_mday += VAR_2;
          VAR_2 = 0;
        }
      }
      break;
    case '-':
      while (VAR_2)
        if (VAR_2 >= VAR_0->tm_mday) {
          VAR_2 -= VAR_0->tm_mday;
          VAR_0->tm_mday = 1;
          if (!FUNC_0(VAR_0, '-', 1, 0, 0))
            return 0;
          VAR_0->tm_mday = FUNC_1(VAR_0);
        } else {
          VAR_0->tm_mday -= VAR_2;
          VAR_2 = 0;
        }
      break;
    default:
      if (VAR_2 > 0 && VAR_2 <= FUNC_1(VAR_0))
        VAR_0->tm_mday = VAR_2;
      else
        return 0;
      break;
  }

  return !VAR_3 || FUNC_2(VAR_0, VAR_1) != -1;
}
