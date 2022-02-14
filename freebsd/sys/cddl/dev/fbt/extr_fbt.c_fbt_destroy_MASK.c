
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fbt_nentries; } ;
typedef TYPE_1__ modctl_t ;
struct TYPE_5__ {struct TYPE_5__* fbtp_probenext; TYPE_1__* fbtp_ctl; } ;
typedef TYPE_2__ fbt_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, dtrace_id_t VAR_1, void *VAR_2)
{
 fbt_probe_t *VAR_3 = VAR_2, *VAR_4;
 modctl_t *VAR_5;

 do {
  VAR_5 = VAR_3->fbtp_ctl;
  VAR_5->fbt_nentries--;

  VAR_4 = VAR_3->fbtp_probenext;
  FUNC_0(VAR_3);
  VAR_3 = VAR_4;
 } while (VAR_3 != ((void*)0));
}
