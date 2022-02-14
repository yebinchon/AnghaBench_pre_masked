
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(char *VAR_0)
{
 int VAR_1;
 if ((VAR_1 = FUNC_2(VAR_0)) < 0)
  return (-1);

 if (FUNC_1(VAR_1, 5) < 0) {
  FUNC_0(VAR_1);
  return (-1);
 }
 return (VAR_1);
}
