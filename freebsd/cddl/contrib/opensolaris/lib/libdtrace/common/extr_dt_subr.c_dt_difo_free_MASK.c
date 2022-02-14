
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_4__ {struct TYPE_4__* dtdo_xlmtab; struct TYPE_4__* dtdo_ureltab; struct TYPE_4__* dtdo_kreltab; struct TYPE_4__* dtdo_vartab; struct TYPE_4__* dtdo_strtab; struct TYPE_4__* dtdo_inttab; struct TYPE_4__* dtdo_buf; } ;
typedef TYPE_1__ dtrace_difo_t ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(dtrace_hdl_t *VAR_0, dtrace_difo_t *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_0, VAR_1->dtdo_buf);
 FUNC_0(VAR_0, VAR_1->dtdo_inttab);
 FUNC_0(VAR_0, VAR_1->dtdo_strtab);
 FUNC_0(VAR_0, VAR_1->dtdo_vartab);
 FUNC_0(VAR_0, VAR_1->dtdo_kreltab);
 FUNC_0(VAR_0, VAR_1->dtdo_ureltab);
 FUNC_0(VAR_0, VAR_1->dtdo_xlmtab);

 FUNC_0(VAR_0, VAR_1);
}
