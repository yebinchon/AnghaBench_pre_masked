
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int n ;
typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_13__ {TYPE_9__* dtad_difo; int dtad_kind; } ;
typedef TYPE_2__ dtrace_actdesc_t ;
struct TYPE_14__ {scalar_t__ dn_value; struct TYPE_14__* dn_list; struct TYPE_14__* dn_args; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_12__ {scalar_t__ dtdt_size; int dtdt_flags; } ;
struct TYPE_15__ {TYPE_1__ dtdo_rtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 TYPE_9__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 TYPE_2__* FUNC_6 (int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7(dtrace_hdl_t *VAR_6, dt_node_t *VAR_7, dtrace_stmtdesc_t *VAR_8)
{
 dtrace_actdesc_t *VAR_9 = FUNC_6(VAR_6, VAR_8);

 dt_node_t *VAR_10 = VAR_7->dn_args;
 dt_node_t *VAR_11 = VAR_7->dn_args->dn_list;

 char VAR_12[VAR_2];

 if (FUNC_4(VAR_10) == 0) {
  FUNC_0(VAR_10, VAR_4, "printm( ) argument #1 must "
      "be a non-zero positive integral constant expression\n");
 }

 if (FUNC_3(VAR_11) == 0) {
  FUNC_0(VAR_11, VAR_3,
      "printm( ) argument #2 is incompatible with "
      "prototype:\n\tprototype: pointer\n"
      "\t argument: %s\n",
      FUNC_5(VAR_11, VAR_12, sizeof (VAR_12)));
 }

 FUNC_2(VAR_5, VAR_11);
 VAR_9->dtad_difo = FUNC_1(VAR_5);
 VAR_9->dtad_kind = VAR_1;

 VAR_9->dtad_difo->dtdo_rtype.dtdt_flags |= VAR_0;
 VAR_9->dtad_difo->dtdo_rtype.dtdt_size = VAR_10->dn_value + sizeof(uintptr_t);
}
