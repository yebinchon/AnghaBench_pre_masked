
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(void)
{
 int VAR_1;

 if (VAR_0)
  return (-1);
 while ((VAR_1 = FUNC_0()) == -1)
  FUNC_1();
 if (VAR_1 == '\r')
  VAR_1 = '\n';
 return (VAR_1);
}
