
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; int arg; int (* fctn ) (int ) ;int retval; } ;
typedef TYPE_1__ ocs_thread_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 ocs_thread_t *VAR_1 = VAR_0;
 VAR_1->retval = (*VAR_1->fctn)(VAR_1->arg);
 FUNC_1(((void*)0), VAR_1->name, FUNC_2(VAR_1->name+1));
 FUNC_0();
}
