
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dtdv_id; } ;
typedef TYPE_1__ dtrace_difv_t ;
struct TYPE_5__ {scalar_t__ dtdo_refcnt; int dtdo_varlen; TYPE_1__* dtdo_vartab; } ;
typedef TYPE_2__ dtrace_difo_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(dtrace_difo_t *VAR_3)
{
 int VAR_4;

 FUNC_0(FUNC_1(&VAR_1));

 VAR_3->dtdo_refcnt++;
 FUNC_0(VAR_3->dtdo_refcnt != 0);





 for (VAR_4 = 0; VAR_4 < VAR_3->dtdo_varlen; VAR_4++) {
  dtrace_difv_t *VAR_5 = &VAR_3->dtdo_vartab[VAR_4];

  if (VAR_5->dtdv_id != VAR_0)
   continue;

  if (VAR_2++ == 0)
   FUNC_2();
 }
}
