
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 int VAR_1;

 if (FUNC_0(VAR_0, "ada", 3) == 0)
  VAR_1 = 3;
 else if (FUNC_0(VAR_0, "ad", 2) == 0)
  VAR_1 = 2;
 else
  return (0);
 if (VAR_0[VAR_1] < '0' || VAR_0[VAR_1] > '9')
  return (0);
 do {
  VAR_1++;
 } while (VAR_0[VAR_1] >= '0' && VAR_0[VAR_1] <= '9');
 return (VAR_1);
}
