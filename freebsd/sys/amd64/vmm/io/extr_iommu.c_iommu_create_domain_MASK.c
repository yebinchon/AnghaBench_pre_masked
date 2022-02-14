
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int volatile*,int ,int) ;
 int FUNC_2 (int volatile*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void *
FUNC_5(vm_paddr_t VAR_0)
{
 static volatile int VAR_1;

 if (VAR_1 < 2) {
  if (FUNC_1(&VAR_1, 0, 1)) {
   FUNC_4();
   FUNC_2(&VAR_1, 2);
  } else
   while (VAR_1 == 1)
    FUNC_3();
 }
 return (FUNC_0(VAR_0));
}
