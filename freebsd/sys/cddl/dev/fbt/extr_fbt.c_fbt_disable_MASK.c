
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nenabled; scalar_t__ loadcnt; } ;
typedef TYPE_1__ modctl_t ;
struct TYPE_6__ {scalar_t__ fbtp_loadcnt; scalar_t__ fbtp_enabled; scalar_t__ fbtp_patchpoint; int fbtp_savedval; struct TYPE_6__* fbtp_tracenext; struct TYPE_6__* fbtp_hashnext; struct TYPE_6__* fbtp_probenext; TYPE_1__* fbtp_ctl; } ;
typedef TYPE_2__ fbt_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_2__** VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3)
{
 fbt_probe_t *VAR_4 = VAR_3, *VAR_5;
 modctl_t *VAR_6 = VAR_4->fbtp_ctl;

 FUNC_0(VAR_6->nenabled > 0);
 VAR_6->nenabled--;

 if ((VAR_6->loadcnt != VAR_4->fbtp_loadcnt))
  return;

 for (; VAR_4 != ((void*)0); VAR_4 = VAR_4->fbtp_probenext) {
  VAR_4->fbtp_enabled--;

  for (VAR_5 = VAR_0[FUNC_1(VAR_4->fbtp_patchpoint)];
      VAR_5 != ((void*)0); VAR_5 = VAR_5->fbtp_hashnext) {
   if (VAR_5->fbtp_patchpoint == VAR_4->fbtp_patchpoint) {
    for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->fbtp_tracenext)
     if (VAR_5->fbtp_enabled > 0)
      break;
    break;
   }
  }
  if (VAR_5 == ((void*)0))
   FUNC_2(VAR_4, VAR_4->fbtp_savedval);
 }
}
