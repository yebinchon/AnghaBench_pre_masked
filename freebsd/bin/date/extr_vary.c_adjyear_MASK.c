
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; } ;


 int FUNC_0 (struct tm*,char) ;

__attribute__((used)) static int
FUNC_1(struct tm *VAR_0, char VAR_1, int VAR_2, int VAR_3)
{
  switch (VAR_1) {
    case '+':
      VAR_0->tm_year += VAR_2;
      break;
    case '-':
      VAR_0->tm_year -= VAR_2;
      break;
    default:
      VAR_0->tm_year = VAR_2;
      if (VAR_0->tm_year < 69)
       VAR_0->tm_year += 100;
      else if (VAR_0->tm_year > 1900)
        VAR_0->tm_year -= 1900;
      break;
  }
  return !VAR_3 || FUNC_0(VAR_0, VAR_1) != -1;
}
