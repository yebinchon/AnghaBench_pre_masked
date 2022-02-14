
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* dtps_enable ) (void*,VAR_0,void*) ;} ;
struct TYPE_4__ {int dtpv_defunct; TYPE_1__ dtpv_pops; } ;
typedef TYPE_2__ dtrace_provider_t ;
typedef scalar_t__ dtrace_provider_id_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(dtrace_provider_id_t VAR_4)
{
 dtrace_provider_t *VAR_5 = (dtrace_provider_t *)VAR_4;

 FUNC_0(VAR_5->dtpv_pops.dtps_enable !=
     (void (*)(void *, VAR_6, void *))VAR_2);

 FUNC_2(&VAR_3);
 FUNC_2(&VAR_1);

 VAR_5->dtpv_defunct = FUNC_1();

 FUNC_3(&VAR_1);
 FUNC_3(&VAR_3);
}
