
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(char *VAR_0, char **VAR_1, const char *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_2, VAR_0, VAR_5) != 0)
  return (0);
 if (!FUNC_1(VAR_0[VAR_5]))
  return (0);
 VAR_4 = 0;
 if (VAR_0[VAR_5] == '0' && FUNC_1(VAR_0[VAR_5+1]))
  return (0);
 while (FUNC_1(VAR_0[VAR_5])) {
  VAR_4 *= 10;
  VAR_4 += VAR_0[VAR_5++] - '0';
 }
 if (VAR_4 > 0xffffff)
  return (0);
 *VAR_3 = VAR_4;
 if (VAR_1)
  *VAR_1 = &VAR_0[VAR_5];
 if (VAR_0[VAR_5])
  return (2);
 return (1);
}
