
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct futex_st0 {int oparg; int * oldval; } ;


 int FUNC_0 (int*,int ) ;

__attribute__((used)) static void
FUNC_1(vm_offset_t VAR_0, void *VAR_1)
{
 struct futex_st0 *VAR_2;

 VAR_2 = VAR_1;
 *VAR_2->oldval = FUNC_0((int *)VAR_0, VAR_2->oparg);
}
