
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int isr_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct AdapterControlBlock *VAR_1 = (struct AdapterControlBlock *)VAR_0;

 FUNC_0(&VAR_1->isr_lock);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->isr_lock);
}
