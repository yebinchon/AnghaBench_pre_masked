
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dtpd_name; int dtpd_func; int dtpd_mod; int dtpd_provider; int dtpd_id; } ;
typedef TYPE_2__ dtrace_probedesc_t ;
struct TYPE_9__ {int dtpr_name; int dtpr_func; int dtpr_mod; TYPE_1__* dtpr_provider; int dtpr_id; } ;
typedef TYPE_3__ dtrace_probe_t ;
struct TYPE_7__ {int dtpv_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(const dtrace_probe_t *VAR_4, dtrace_probedesc_t *VAR_5)
{
 FUNC_0(VAR_5, sizeof (dtrace_probedesc_t));
 VAR_5->dtpd_id = VAR_4->dtpr_id;

 (void) FUNC_1(VAR_5->dtpd_provider,
     VAR_4->dtpr_provider->dtpv_name, VAR_3 - 1);

 (void) FUNC_1(VAR_5->dtpd_mod, VAR_4->dtpr_mod, VAR_1 - 1);
 (void) FUNC_1(VAR_5->dtpd_func, VAR_4->dtpr_func, VAR_0 - 1);
 (void) FUNC_1(VAR_5->dtpd_name, VAR_4->dtpr_name, VAR_2 - 1);
}
