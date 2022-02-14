
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ loadcnt; char* filename; int nenabled; } ;
typedef TYPE_1__ modctl_t ;
struct TYPE_5__ {scalar_t__ fbtp_loadcnt; char* fbtp_name; int fbtp_enabled; int fbtp_patchval; struct TYPE_5__* fbtp_probenext; TYPE_1__* fbtp_ctl; } ;
typedef TYPE_2__ fbt_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3)
{
 fbt_probe_t *VAR_4 = VAR_3;
 modctl_t *VAR_5 = VAR_4->fbtp_ctl;

 VAR_5->nenabled++;






 if (VAR_5->loadcnt != VAR_4->fbtp_loadcnt) {
  if (VAR_0) {
   FUNC_1("fbt is failing for probe %s "
       "(module %s reloaded)",
       VAR_4->fbtp_name, VAR_5->filename);
  }

  return;
 }

 for (; VAR_4 != ((void*)0); VAR_4 = VAR_4->fbtp_probenext) {
  FUNC_0(VAR_4, VAR_4->fbtp_patchval);
  VAR_4->fbtp_enabled++;
 }
}
