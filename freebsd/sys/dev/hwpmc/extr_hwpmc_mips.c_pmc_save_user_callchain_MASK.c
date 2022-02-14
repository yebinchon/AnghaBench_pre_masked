
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {uintptr_t pc; uintptr_t sp; uintptr_t ra; } ;
typedef uintptr_t register_t ;


 scalar_t__ FUNC_0 (uintptr_t*,uintptr_t*,uintptr_t*) ;

int
FUNC_1(uintptr_t *VAR_0, int VAR_1,
    struct trapframe *VAR_2)
{
 register_t VAR_3, VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_3 = VAR_2->pc;
 VAR_5 = VAR_2->sp;
 VAR_4 = VAR_2->ra;

 VAR_0[VAR_6++] = VAR_3;
 return (VAR_6);
}
