
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* dtsd_ecbdesc; } ;
typedef TYPE_1__ dtrace_stmtdesc_t ;
typedef int dtrace_prog_t ;
typedef int dtrace_probeinfo_t ;
struct TYPE_8__ {int dtpd_name; int dtpd_func; int dtpd_mod; int dtpd_provider; } ;
typedef TYPE_2__ dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_9__ {TYPE_2__ dted_probe; } ;
typedef TYPE_3__ dtrace_ecbdesc_t ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_0, dtrace_prog_t *VAR_1,
    dtrace_stmtdesc_t *VAR_2, dtrace_ecbdesc_t **VAR_3)
{
 dtrace_ecbdesc_t *VAR_4 = VAR_2->dtsd_ecbdesc;
 dtrace_probedesc_t *VAR_5 = &VAR_4->dted_probe;
 dtrace_probeinfo_t VAR_6;

 if (VAR_4 == *VAR_3)
  return (0);

 FUNC_1("\n%s:%s:%s:%s\n",
     VAR_5->dtpd_provider, VAR_5->dtpd_mod, VAR_5->dtpd_func, VAR_5->dtpd_name);

 if (FUNC_0(VAR_0, VAR_5, &VAR_6) == 0)
  FUNC_2(&VAR_6);

 *VAR_3 = VAR_4;
 return (0);
}
