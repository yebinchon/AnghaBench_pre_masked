
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* dtpda_edesc; } ;
typedef TYPE_1__ dtrace_probedata_t ;
typedef int dtrace_hdl_t ;
struct TYPE_6__ {int dtepd_uarg; } ;
typedef TYPE_2__ dtrace_eprobedesc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1(dtrace_hdl_t *VAR_3, dtrace_probedata_t *VAR_4)
{
 dtrace_eprobedesc_t *VAR_5 = VAR_4->dtpda_edesc;
 int VAR_6;

 switch (VAR_5->dtepd_uarg) {
 case 128:
  VAR_6 = FUNC_0(VAR_3, VAR_4);
  break;

 default:
  return (VAR_2);
 }

 if (VAR_6 == 0)
  return (VAR_1);

 return (VAR_0);
}
