
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_qstate {int return_rcode; int * ext_state; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct module_qstate* VAR_2, int VAR_3)
{
 VAR_2->ext_state[VAR_3] = VAR_1;
 VAR_2->return_rcode = VAR_0;
 return 0;
}
