
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module_qstate {int return_rcode; int * ext_state; int * return_msg; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_2(struct module_qstate* VAR_3, int VAR_4, int VAR_5)
{
 FUNC_1(VAR_0, "return error response %s",
  FUNC_0(VAR_2, VAR_5)?
  FUNC_0(VAR_2, VAR_5)->name:"??");
 VAR_3->return_rcode = VAR_5;
 VAR_3->return_msg = ((void*)0);
 VAR_3->ext_state[VAR_4] = VAR_1;
 return 0;
}
