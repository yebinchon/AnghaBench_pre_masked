
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dt_globals; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_7__ {int di_attr; } ;
typedef TYPE_2__ dt_ident_t ;
struct TYPE_8__ {int * pcb_probe; int * pcb_pdesc; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,char const* const) ;
 TYPE_3__* VAR_1 ;

void
FUNC_1(dtrace_hdl_t *VAR_2)
{
 static const char *const VAR_3[] = {
  "probeprov", "probemod", "probefunc", "probename", "args", ((void*)0)
 };

 dt_ident_t *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_3[VAR_5] != ((void*)0); VAR_5++) {
  if ((VAR_4 = FUNC_0(VAR_2->dt_globals, VAR_3[VAR_5])) != ((void*)0))
   VAR_4->di_attr = VAR_0;
 }

 VAR_1->pcb_pdesc = ((void*)0);
 VAR_1->pcb_probe = ((void*)0);
}
