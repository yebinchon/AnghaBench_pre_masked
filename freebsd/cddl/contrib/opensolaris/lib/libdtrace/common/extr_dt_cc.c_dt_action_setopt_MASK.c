
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_7__ {void* dtad_arg; void* dtad_kind; void* dtad_difo; } ;
typedef TYPE_1__ dtrace_actdesc_t ;
struct TYPE_8__ {struct TYPE_8__* dn_list; struct TYPE_8__* dn_args; } ;
typedef TYPE_2__ dt_node_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(dtrace_hdl_t *VAR_3, dt_node_t *VAR_4, dtrace_stmtdesc_t *VAR_5)
{
 dtrace_actdesc_t *VAR_6;
 dt_node_t *VAR_7, *VAR_8;





 VAR_7 = VAR_4->dn_args;
 VAR_8 = VAR_7->dn_list;

 VAR_6 = FUNC_3(VAR_3, VAR_5);
 FUNC_2(VAR_2, VAR_7);
 VAR_6->dtad_difo = FUNC_1(VAR_2);
 VAR_6->dtad_kind = VAR_0;
 VAR_6->dtad_arg = VAR_1;

 VAR_6 = FUNC_3(VAR_3, VAR_5);

 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_6, 0, VAR_0);
 } else {
  FUNC_2(VAR_2, VAR_8);
  VAR_6->dtad_difo = FUNC_1(VAR_2);
  VAR_6->dtad_kind = VAR_0;
 }

 VAR_6->dtad_arg = VAR_1;
}
