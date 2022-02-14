
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int n ;
typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_16__ {TYPE_1__* dtad_difo; int dtad_kind; } ;
typedef TYPE_2__ dtrace_actdesc_t ;
struct TYPE_17__ {int dn_value; struct TYPE_17__* dn_list; struct TYPE_17__* dn_args; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_14__ {int dtdt_size; int dtdt_flags; } ;
struct TYPE_15__ {TYPE_10__ dtdo_rtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 TYPE_10__ VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,char*,int) ;
 TYPE_2__* FUNC_8 (int *,int *) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_9(dtrace_hdl_t *VAR_10, dt_node_t *VAR_11, dtrace_stmtdesc_t *VAR_12)
{
 dtrace_actdesc_t *VAR_13 = FUNC_8(VAR_10, VAR_12);

 dt_node_t *VAR_14 = VAR_11->dn_args;
 dt_node_t *VAR_15 = VAR_11->dn_args->dn_list;
 dt_node_t *VAR_16;

 char VAR_17[VAR_3];

 if (FUNC_3(VAR_14) == 0 && FUNC_4(VAR_14) == 0) {
  FUNC_0(VAR_14, VAR_4,
      "tracemem( ) argument #1 is incompatible with "
      "prototype:\n\tprototype: pointer or integer\n"
      "\t argument: %s\n",
      FUNC_7(VAR_14, VAR_17, sizeof (VAR_17)));
 }

 if (FUNC_5(VAR_15) == 0) {
  FUNC_0(VAR_15, VAR_7, "tracemem( ) argument #2 must "
      "be a non-zero positive integral constant expression\n");
 }

 if ((VAR_16 = VAR_15->dn_list) != ((void*)0)) {
  if (VAR_16->dn_list != ((void*)0)) {
   FUNC_0(VAR_16, VAR_5, "tracemem ( ) prototype "
       "mismatch: expected at most 3 args\n");
  }

  if (!FUNC_6(VAR_16)) {
   FUNC_0(VAR_16, VAR_6, "tracemem ( ) "
       "dynamic size (argument #3) must be of "
       "scalar type\n");
  }

  FUNC_2(VAR_9, VAR_16);
  VAR_13->dtad_difo = FUNC_1(VAR_9);
  VAR_13->dtad_difo->dtdo_rtype = VAR_8;
  VAR_13->dtad_kind = VAR_2;

  VAR_13 = FUNC_8(VAR_10, VAR_12);
 }

 FUNC_2(VAR_9, VAR_14);
 VAR_13->dtad_difo = FUNC_1(VAR_9);
 VAR_13->dtad_kind = VAR_1;

 VAR_13->dtad_difo->dtdo_rtype.dtdt_flags |= VAR_0;
 VAR_13->dtad_difo->dtdo_rtype.dtdt_size = VAR_15->dn_value;
}
