
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dtsd_ecbdesc; } ;
typedef TYPE_1__ dtrace_stmtdesc_t ;
typedef int dtrace_prog_t ;
typedef int dtrace_hdl_t ;
struct TYPE_8__ {char* dtpd_mod; int dtpd_provider; int dtpd_name; int dtpd_func; } ;
struct TYPE_7__ {TYPE_5__ dted_probe; } ;
typedef TYPE_2__ dtrace_ecbdesc_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*,int ,int *) ;
 int FUNC_3 (char*,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(dtrace_hdl_t *VAR_2, dtrace_prog_t *VAR_3,
    dtrace_stmtdesc_t *VAR_4, dtrace_ecbdesc_t **VAR_5)
{
 dtrace_ecbdesc_t *VAR_6 = VAR_4->dtsd_ecbdesc;

 if (VAR_6 == *VAR_5)
  return (0);

 if (FUNC_2(VAR_0, &VAR_6->dted_probe, VAR_1, ((void*)0)) != 0) {
  FUNC_3("failed to match %s:%s:%s:%s: %s\n",
      VAR_6->dted_probe.dtpd_provider, VAR_6->dted_probe.dtpd_mod,
      VAR_6->dted_probe.dtpd_func, VAR_6->dted_probe.dtpd_name,
      FUNC_0(VAR_2, FUNC_1(VAR_2)));
 }

 *VAR_5 = VAR_6;
 return (0);
}
