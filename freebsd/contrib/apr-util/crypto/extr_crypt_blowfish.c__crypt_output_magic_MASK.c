
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, char *VAR_1, int VAR_2)
{
 if (VAR_2 < 3)
  return -1;

 VAR_1[0] = '*';
 VAR_1[1] = '0';
 VAR_1[2] = '\0';

 if (VAR_0[0] == '*' && VAR_0[1] == '0')
  VAR_1[1] = '1';

 return 0;
}
