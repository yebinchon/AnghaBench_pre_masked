
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dt_macros; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_7__ {TYPE_1__* pfv_dtp; } ;
typedef TYPE_2__ dt_pfargv_t ;
typedef int dt_pfargd_t ;
typedef int dt_node_t ;
struct TYPE_8__ {scalar_t__ di_id; } ;
typedef TYPE_3__ dt_ident_t ;


 TYPE_3__* FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(dt_pfargv_t *VAR_0, dt_pfargd_t *VAR_1, dt_node_t *VAR_2)
{
 dtrace_hdl_t *VAR_3 = VAR_0->pfv_dtp;
 dt_ident_t *VAR_4 = FUNC_0(VAR_3->dt_macros, "target");

 if (FUNC_3(VAR_2))
  return (1);

 if (VAR_4 == ((void*)0) || VAR_4->di_id == 0)
  return (0);

 return (FUNC_2(VAR_2) || FUNC_1(VAR_2));
}
