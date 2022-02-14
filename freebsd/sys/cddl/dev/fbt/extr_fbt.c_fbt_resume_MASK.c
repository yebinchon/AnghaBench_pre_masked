
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nenabled; scalar_t__ loadcnt; } ;
typedef TYPE_1__ modctl_t ;
struct TYPE_5__ {scalar_t__ fbtp_loadcnt; int fbtp_patchval; struct TYPE_5__* fbtp_probenext; TYPE_1__* fbtp_ctl; } ;
typedef TYPE_2__ fbt_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, dtrace_id_t VAR_1, void *VAR_2)
{
 fbt_probe_t *VAR_3 = VAR_2;
 modctl_t *VAR_4 = VAR_3->fbtp_ctl;

 FUNC_0(VAR_4->nenabled > 0);

 if ((VAR_4->loadcnt != VAR_3->fbtp_loadcnt))
  return;

 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->fbtp_probenext)
  FUNC_1(VAR_3, VAR_3->fbtp_patchval);
}
