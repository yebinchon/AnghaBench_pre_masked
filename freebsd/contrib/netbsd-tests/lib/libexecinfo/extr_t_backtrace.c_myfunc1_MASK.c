
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

void
FUNC_2(size_t VAR_1, volatile size_t VAR_2)
{
 if (VAR_2 > 1)
  FUNC_2(VAR_1, VAR_2 - 1);
 else
  FUNC_0(VAR_1);

 if (VAR_0)
  FUNC_1();
}
