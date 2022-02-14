
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* dtih_func ) (uintptr_t,struct trapframe*,uintptr_t) ;struct TYPE_4__* dtih_next; } ;
typedef TYPE_1__ dtrace_invop_hdlr_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;

void
FUNC_1(int (*VAR_2)(uintptr_t, struct trapframe *, uintptr_t))
{
 dtrace_invop_hdlr_t *VAR_3;

 VAR_3 = FUNC_0(sizeof (dtrace_invop_hdlr_t), VAR_0);
 VAR_3->dtih_func = VAR_2;
 VAR_3->dtih_next = VAR_1;
 VAR_1 = VAR_3;
}
