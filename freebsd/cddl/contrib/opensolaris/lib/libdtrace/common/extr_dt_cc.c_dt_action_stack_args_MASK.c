
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_10__ {scalar_t__ dtad_arg; int dtad_kind; } ;
typedef TYPE_2__ dtrace_actdesc_t ;
struct TYPE_11__ {scalar_t__ dn_value; int * dn_list; } ;
typedef TYPE_3__ dt_node_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(dtrace_hdl_t *VAR_5, dtrace_actdesc_t *VAR_6, dt_node_t *VAR_7)
{
 VAR_6->dtad_kind = VAR_0;

 if (VAR_5->dt_options[VAR_1] != VAR_2) {
  VAR_6->dtad_arg = VAR_5->dt_options[VAR_1];
 } else {
  VAR_6->dtad_arg = 0;
 }

 if (VAR_7 != ((void*)0)) {
  if (VAR_7->dn_list != ((void*)0)) {
   FUNC_0(VAR_7, VAR_3, "stack( ) prototype "
       "mismatch: too many arguments\n");
  }

  if (FUNC_1(VAR_7) == 0) {
   FUNC_0(VAR_7, VAR_4, "stack( ) size must be a "
       "non-zero positive integral constant expression\n");
  }

  VAR_6->dtad_arg = VAR_7->dn_value;
 }
}
