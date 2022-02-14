
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtpd_name; int dtpd_func; int dtpd_mod; } ;
typedef TYPE_1__ dtrace_probedesc_t ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static size_t
FUNC_1(const dtrace_probedesc_t *VAR_0)
{
 return (FUNC_0(VAR_0->dtpd_mod) + 1 +
     FUNC_0(VAR_0->dtpd_func) + 1 + FUNC_0(VAR_0->dtpd_name) + 1);
}
