
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initialized; int * comm_list; int * dso_list; int * sym_list; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;

void FUNC_2(void)
{
 if (!VAR_0.initialized)
  return;
 FUNC_0(VAR_0.sym_list);
 FUNC_0(VAR_0.dso_list);
 FUNC_0(VAR_0.comm_list);
 FUNC_1();
 VAR_0.sym_list = VAR_0.dso_list = VAR_0.comm_list = ((void*)0);
 VAR_0.initialized = 0;
}
