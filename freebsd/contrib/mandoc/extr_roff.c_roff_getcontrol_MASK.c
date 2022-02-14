
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {char control; } ;



int
FUNC_0(const struct roff *VAR_0, const char *VAR_1, int *VAR_2)
{
 int VAR_3;

 VAR_3 = *VAR_2;

 if (VAR_0->control != '\0' && VAR_1[VAR_3] == VAR_0->control)
  VAR_3++;
 else if (VAR_0->control != '\0')
  return 0;
 else if ('\\' == VAR_1[VAR_3] && '.' == VAR_1[VAR_3 + 1])
  VAR_3 += 2;
 else if ('.' == VAR_1[VAR_3] || '\'' == VAR_1[VAR_3])
  VAR_3++;
 else
  return 0;

 while (' ' == VAR_1[VAR_3] || '\t' == VAR_1[VAR_3])
  VAR_3++;

 *VAR_2 = VAR_3;
 return 1;
}
