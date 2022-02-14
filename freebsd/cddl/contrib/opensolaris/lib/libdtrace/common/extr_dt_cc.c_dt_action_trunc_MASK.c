
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int n ;
typedef int dtrace_stmtdesc_t ;
struct TYPE_14__ {scalar_t__ dt_gen; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_15__ {void* dtad_arg; int dtad_kind; int dtad_difo; } ;
typedef TYPE_2__ dtrace_actdesc_t ;
struct TYPE_16__ {scalar_t__ dn_kind; TYPE_4__* dn_ident; struct TYPE_16__* dn_list; struct TYPE_16__* dn_args; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_17__ {scalar_t__ di_gen; int di_flags; int di_id; int di_name; } ;
typedef TYPE_4__ dt_ident_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ,...) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,char*,int) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,int *) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_8(dtrace_hdl_t *VAR_10, dt_node_t *VAR_11, dtrace_stmtdesc_t *VAR_12)
{
 dt_ident_t *VAR_13;
 dtrace_actdesc_t *VAR_14;
 dt_node_t *VAR_15, *VAR_16;

 char VAR_17[VAR_4];
 int VAR_18 = 0;

 for (VAR_15 = VAR_11->dn_args; VAR_15 != ((void*)0); VAR_15 = VAR_15->dn_list)
  VAR_18++;

 if (VAR_18 > 2 || VAR_18 < 1) {
  FUNC_1(VAR_11, VAR_7,
      "%s( ) prototype mismatch: %d args passed, %s expected\n",
      VAR_11->dn_ident->di_name, VAR_18,
      VAR_18 < 1 ? "at least 1" : "no more than 2");
 }

 VAR_15 = VAR_11->dn_args;
 FUNC_0(VAR_15 != ((void*)0));
 VAR_16 = VAR_15->dn_list;

 if (VAR_15->dn_kind != VAR_3) {
  FUNC_1(VAR_11, VAR_5,
      "%s( ) argument #1 is incompatible with prototype:\n"
      "\tprototype: aggregation\n\t argument: %s\n",
      VAR_11->dn_ident->di_name,
      FUNC_6(VAR_15, VAR_17, sizeof (VAR_17)));
 }

 if (VAR_18 == 2) {
  FUNC_0(VAR_16 != ((void*)0));
  if (!FUNC_5(VAR_16)) {
   FUNC_1(VAR_11, VAR_8,
       "%s( ) argument #2 must be of scalar type\n",
       VAR_11->dn_ident->di_name);
  }
 }

 VAR_13 = VAR_15->dn_ident;

 if (VAR_13->di_gen == VAR_10->dt_gen && !(VAR_13->di_flags & VAR_2)) {
  FUNC_1(VAR_11, VAR_6,
      "undefined aggregation: @%s\n", VAR_13->di_name);
 }

 VAR_14 = FUNC_7(VAR_10, VAR_12);
 FUNC_2(VAR_14, VAR_15->dn_ident->di_id, VAR_0);
 VAR_14->dtad_arg = VAR_1;

 VAR_14 = FUNC_7(VAR_10, VAR_12);

 if (VAR_18 == 1) {
  FUNC_2(VAR_14, 0, VAR_0);
 } else {
  FUNC_0(VAR_16 != ((void*)0));
  FUNC_4(VAR_9, VAR_16);
  VAR_14->dtad_difo = FUNC_3(VAR_9);
  VAR_14->dtad_kind = VAR_0;
 }

 VAR_14->dtad_arg = VAR_1;
}
