
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;

void
FUNC_2(char *VAR_0, size_t VAR_1)
{
 char VAR_2;
 char *VAR_3 = VAR_0 + VAR_1 - 1;

 if ((VAR_2 = *VAR_0) == 0)
  return;

 if (!FUNC_0(VAR_2) && VAR_2 != '_')
  *VAR_0 = '_';

 while (VAR_0 < VAR_3 && ((VAR_2 = *(++VAR_0)) != 0)) {
  if (!FUNC_0(VAR_2) && !FUNC_1(VAR_2) && VAR_2 != '_')
   *VAR_0 = '_';
 }
 *VAR_0 = 0;
}
