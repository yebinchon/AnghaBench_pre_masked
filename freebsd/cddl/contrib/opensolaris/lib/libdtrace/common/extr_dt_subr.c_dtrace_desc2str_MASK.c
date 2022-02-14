
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dtpd_id; char* dtpd_provider; char* dtpd_mod; char* dtpd_func; char* dtpd_name; } ;
typedef TYPE_1__ dtrace_probedesc_t ;


 int FUNC_0 (char*,size_t,char*,scalar_t__,...) ;

char *
FUNC_1(const dtrace_probedesc_t *VAR_0, char *VAR_1, size_t VAR_2)
{
 if (VAR_0->dtpd_id == 0) {
  (void) FUNC_0(VAR_1, VAR_2, "%s:%s:%s:%s", VAR_0->dtpd_provider,
      VAR_0->dtpd_mod, VAR_0->dtpd_func, VAR_0->dtpd_name);
 } else
  (void) FUNC_0(VAR_1, VAR_2, "%u", VAR_0->dtpd_id);

 return (VAR_1);
}
