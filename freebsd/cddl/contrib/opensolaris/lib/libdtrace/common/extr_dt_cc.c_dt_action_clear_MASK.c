
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int n ;
typedef int dtrace_stmtdesc_t ;
struct TYPE_12__ {scalar_t__ dt_gen; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_13__ {int dtad_arg; } ;
typedef TYPE_2__ dtrace_actdesc_t ;
struct TYPE_14__ {scalar_t__ dn_kind; TYPE_4__* dn_ident; struct TYPE_14__* dn_args; struct TYPE_14__* dn_list; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_15__ {scalar_t__ di_gen; int di_flags; int di_id; int di_name; } ;
typedef TYPE_4__ dt_ident_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ,...) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_5(dtrace_hdl_t *VAR_8, dt_node_t *VAR_9, dtrace_stmtdesc_t *VAR_10)
{
 dt_ident_t *VAR_11;
 dtrace_actdesc_t *VAR_12;
 dt_node_t *VAR_13;

 char VAR_14[VAR_4];
 int VAR_15 = 0;

 for (VAR_13 = VAR_9->dn_args; VAR_13 != ((void*)0); VAR_13 = VAR_13->dn_list)
  VAR_15++;

 if (VAR_15 != 1) {
  FUNC_1(VAR_9, VAR_7,
      "%s( ) prototype mismatch: %d args passed, 1 expected\n",
      VAR_9->dn_ident->di_name, VAR_15);
 }

 VAR_13 = VAR_9->dn_args;
 FUNC_0(VAR_13 != ((void*)0));

 if (VAR_13->dn_kind != VAR_3) {
  FUNC_1(VAR_9, VAR_5,
      "%s( ) argument #1 is incompatible with prototype:\n"
      "\tprototype: aggregation\n\t argument: %s\n",
      VAR_9->dn_ident->di_name,
      FUNC_3(VAR_13, VAR_14, sizeof (VAR_14)));
 }

 VAR_11 = VAR_13->dn_ident;

 if (VAR_11->di_gen == VAR_8->dt_gen && !(VAR_11->di_flags & VAR_2)) {
  FUNC_1(VAR_9, VAR_6,
      "undefined aggregation: @%s\n", VAR_11->di_name);
 }

 VAR_12 = FUNC_4(VAR_8, VAR_10);
 FUNC_2(VAR_12, VAR_13->dn_ident->di_id, VAR_0);
 VAR_12->dtad_arg = VAR_1;
}
