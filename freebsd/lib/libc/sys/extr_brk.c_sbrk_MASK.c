
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 void* FUNC_1 (void*) ;

void *
FUNC_2(intptr_t VAR_3)
{

 if (FUNC_0() == -1)
  return ((void *)-1);
 if ((VAR_3 > 0 && VAR_1 + VAR_3 < VAR_1) ||
     (VAR_3 < 0 && VAR_1 + VAR_3 > VAR_1)) {

  VAR_2 = VAR_0;
  return ((void *)-1);
 }
 return (FUNC_1((void *)(VAR_1 + VAR_3)));
}
