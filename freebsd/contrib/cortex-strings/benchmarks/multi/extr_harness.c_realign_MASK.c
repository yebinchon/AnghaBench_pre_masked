
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_0(char *VAR_1, int VAR_2)
{
  uintptr_t VAR_3 = (uintptr_t)VAR_1;
  VAR_3 = (VAR_3 + (VAR_0 - 1)) & ~(VAR_0 - 1);
  VAR_3 += VAR_2;

  return (char *)VAR_3;
}
