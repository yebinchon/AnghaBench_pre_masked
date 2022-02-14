
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int VAR_0 ;

void
FUNC_3(int VAR_1)
{
 uint32_t VAR_2;

 if (!VAR_0) {
  for (; VAR_1 > 0; VAR_1--)
   for (VAR_2 = 100; VAR_2 > 0; VAR_2--)
    __asm __volatile("nop" ::: "memory");
 } else {
  FUNC_0();
  FUNC_2(VAR_1, ((void*)0));
  FUNC_1();
 }
}
