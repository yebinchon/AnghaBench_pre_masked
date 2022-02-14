
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_hwfn {scalar_t__ p_dev; } ;
struct TYPE_3__ {int sp_interrupts; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct ecore_hwfn*) ;

void
FUNC_2(void *VAR_0)
{
 struct ecore_hwfn *VAR_1;
 qlnx_host_t *VAR_2;

 VAR_1 = VAR_0;

 VAR_2 = (qlnx_host_t *)VAR_1->p_dev;

 VAR_2->sp_interrupts++;

 FUNC_0(VAR_2, "enter\n");

 FUNC_1(VAR_1);

 FUNC_0(VAR_2, "exit\n");

 return;
}
