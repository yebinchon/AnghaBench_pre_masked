
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;

int
FUNC_3(void)
{
 int VAR_2;

 if ((VAR_2 = FUNC_2()) != 0)
  return (VAR_2);

 VAR_1 = 0;

 if (VAR_0 == ((void*)0)) {
  if (FUNC_0())
   return (FUNC_2());
 } else {
  if (FUNC_1())
   return (FUNC_2());
 }

 return (-1);
}
