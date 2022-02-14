
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; } ;


 int* VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct tm *VAR_1)
{
  int VAR_2;

  VAR_2 = VAR_1->tm_year + 1900;

  if (VAR_1->tm_mon == 1)
    if (!(VAR_2 % 400))
      return 29;
    else if (!(VAR_2 % 100))
      return 28;
    else if (!(VAR_2 % 4))
      return 29;
    else
      return 28;
  else if (VAR_1->tm_mon >= 0 && VAR_1->tm_mon < 12)
    return VAR_0[VAR_1->tm_mon];

  return 0;
}
