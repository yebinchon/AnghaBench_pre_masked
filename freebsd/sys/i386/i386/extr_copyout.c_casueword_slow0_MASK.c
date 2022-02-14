
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
struct casueword_arg0 {int newval; int oldval; scalar_t__ res; } ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_1(vm_offset_t VAR_0, void *VAR_1)
{
 struct casueword_arg0 *VAR_2;

 VAR_2 = VAR_1;
 VAR_2->res = 1 - FUNC_0((u_int *)VAR_0, &VAR_2->oldval,
     VAR_2->newval);
}
