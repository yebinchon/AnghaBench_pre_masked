
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int n ;
struct TYPE_17__ {int dtsd_fmtdata; } ;
typedef TYPE_1__ dtrace_stmtdesc_t ;
struct TYPE_18__ {scalar_t__ dt_gen; } ;
typedef TYPE_2__ dtrace_hdl_t ;
typedef int dtrace_actdesc_t ;
struct TYPE_19__ {int dn_kind; char* dn_string; struct TYPE_19__* dn_list; TYPE_5__* dn_ident; int dn_line; struct TYPE_19__* dn_args; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_20__ {int dis_args; } ;
typedef TYPE_4__ dt_idsig_t ;
struct TYPE_21__ {scalar_t__ di_gen; int di_flags; int di_id; scalar_t__ di_data; int di_name; struct TYPE_21__* di_iarg; } ;
typedef TYPE_5__ dt_ident_t ;
struct TYPE_22__ {int pcb_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ,...) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,int ,TYPE_5__*,int,int ,int ) ;
 int * FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int VAR_7 ;
 TYPE_6__* VAR_8 ;

__attribute__((used)) static void
FUNC_8(dtrace_hdl_t *VAR_9, dt_node_t *VAR_10, dtrace_stmtdesc_t *VAR_11)
{
 dt_ident_t *VAR_12, *VAR_13;
 dtrace_actdesc_t *VAR_14;
 const char *VAR_15;
 dt_node_t *VAR_16, *VAR_17 = ((void*)0);

 char VAR_18[VAR_3];
 int VAR_19 = 0, VAR_20 = 0;

 for (VAR_16 = VAR_10->dn_args; VAR_16 != ((void*)0); VAR_16 = VAR_16->dn_list)
  VAR_19++;

 switch (VAR_10->dn_args->dn_kind) {
 case 128:
  VAR_15 = VAR_10->dn_args->dn_string;
  VAR_16 = VAR_10->dn_args->dn_list;
  VAR_20 = 2;
  break;
 case 129:
  VAR_15 = ((void*)0);
  VAR_16 = VAR_10->dn_args;
  VAR_20 = 1;
  break;
 default:
  VAR_15 = ((void*)0);
  VAR_16 = VAR_10->dn_args;
  VAR_20 = 1;
 }

 if (VAR_19 < VAR_20) {
  FUNC_1(VAR_10, VAR_6,
      "%s( ) prototype mismatch: %d args passed, %d expected\n",
      VAR_10->dn_ident->di_name, VAR_19, VAR_20);
 }

 FUNC_0(VAR_16 != ((void*)0));

 while (VAR_16 != ((void*)0)) {
  if (VAR_16->dn_kind != 129) {
   FUNC_1(VAR_10, VAR_4,
       "%s( ) argument #%d is incompatible with "
       "prototype:\n\tprototype: aggregation\n"
       "\t argument: %s\n", VAR_10->dn_ident->di_name, VAR_20,
       FUNC_3(VAR_16, VAR_18, sizeof (VAR_18)));
  }

  VAR_12 = VAR_16->dn_ident;
  VAR_13 = VAR_12->di_iarg;

  if (VAR_12->di_gen == VAR_9->dt_gen &&
      !(VAR_12->di_flags & VAR_1)) {
   FUNC_1(VAR_10, VAR_5,
       "undefined aggregation: @%s\n", VAR_12->di_name);
  }





  if (VAR_17 != ((void*)0)) {
   FUNC_4(VAR_17, VAR_16);
  } else {
   VAR_17 = VAR_16;
  }

  if (VAR_15 != ((void*)0)) {
   VAR_7 = VAR_10->dn_line;

   VAR_11->dtsd_fmtdata =
       FUNC_5(VAR_8->pcb_hdl, VAR_15);
   FUNC_6(VAR_11->dtsd_fmtdata,
       VAR_2, VAR_10->dn_ident, 1,
       VAR_13->di_id, ((dt_idsig_t *)VAR_12->di_data)->dis_args);
   VAR_15 = ((void*)0);
  }

  VAR_14 = FUNC_7(VAR_9, VAR_11);
  FUNC_2(VAR_14, VAR_16->dn_ident->di_id, VAR_0);

  VAR_16 = VAR_16->dn_list;
  VAR_20++;
 }
}
