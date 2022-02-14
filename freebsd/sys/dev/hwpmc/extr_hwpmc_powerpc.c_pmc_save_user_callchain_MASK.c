
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint32_t ;
struct trapframe {int srr1; } ;


 scalar_t__ FUNC_0 (struct trapframe*) ;
 uintptr_t FUNC_1 (struct trapframe*) ;
 int VAR_0 ;
 uintptr_t FUNC_2 (uintptr_t*) ;
 uintptr_t FUNC_3 (uintptr_t*) ;

int
FUNC_4(uintptr_t *VAR_1, int VAR_2,
    struct trapframe *VAR_3)
{
 uintptr_t *VAR_4, *VAR_5;
 int VAR_6 = 0;

 VAR_1[VAR_6++] = FUNC_1(VAR_3);
 VAR_5 = (uintptr_t *)FUNC_0(VAR_3);
 VAR_4 = ((void*)0);

 for (; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_5 <= VAR_4)
   break;
  VAR_4 = VAR_5;
  VAR_1[VAR_6] = FUNC_3((uint32_t *)VAR_5 + 1);
  VAR_5 = (uintptr_t *)FUNC_3(VAR_5);

 }

 return (VAR_6);
}
