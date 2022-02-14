
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_probeinfo_t ;
struct TYPE_4__ {int dtpd_name; int dtpd_func; int dtpd_mod; int dtpd_provider; int dtpd_id; } ;
typedef TYPE_1__ dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;


 scalar_t__ FUNC_0 (int *,TYPE_1__ const*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_2, const dtrace_probedesc_t *VAR_3, void *VAR_4)
{
 dtrace_probeinfo_t VAR_5;

 FUNC_1("%5d %10s %17s %33s %s\n", VAR_3->dtpd_id,
     VAR_3->dtpd_provider, VAR_3->dtpd_mod, VAR_3->dtpd_func, VAR_3->dtpd_name);

 if (VAR_1 && FUNC_0(VAR_2, VAR_3, &VAR_5) == 0)
  FUNC_2(&VAR_5);

 if (VAR_0 != 0)
  return (1);

 return (0);
}
