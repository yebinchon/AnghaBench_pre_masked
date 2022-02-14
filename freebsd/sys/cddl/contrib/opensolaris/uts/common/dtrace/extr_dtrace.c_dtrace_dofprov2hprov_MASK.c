
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dtpa_args; int dtpa_name; int dtpa_func; int dtpa_mod; int dtpa_provider; } ;
struct TYPE_7__ {char* dthpv_provname; TYPE_1__ dthpv_pattr; } ;
typedef TYPE_2__ dtrace_helper_provdesc_t ;
struct TYPE_8__ {int dofpv_name; int dofpv_argsattr; int dofpv_nameattr; int dofpv_funcattr; int dofpv_modattr; int dofpv_provattr; } ;
typedef TYPE_3__ dof_provider_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(dtrace_helper_provdesc_t *VAR_0,
    const dof_provider_t *VAR_1, char *VAR_2)
{
 VAR_0->dthpv_provname = VAR_2 + VAR_1->dofpv_name;
 FUNC_0(&VAR_0->dthpv_pattr.dtpa_provider,
     VAR_1->dofpv_provattr);
 FUNC_0(&VAR_0->dthpv_pattr.dtpa_mod,
     VAR_1->dofpv_modattr);
 FUNC_0(&VAR_0->dthpv_pattr.dtpa_func,
     VAR_1->dofpv_funcattr);
 FUNC_0(&VAR_0->dthpv_pattr.dtpa_name,
     VAR_1->dofpv_nameattr);
 FUNC_0(&VAR_0->dthpv_pattr.dtpa_args,
     VAR_1->dofpv_argsattr);
}
