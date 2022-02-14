
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* dtsd_ecbdesc; } ;
typedef TYPE_3__ dtrace_stmtdesc_t ;
struct TYPE_13__ {TYPE_5__* dted_action; } ;
typedef TYPE_4__ dtrace_ecbdesc_t ;
struct TYPE_14__ {scalar_t__ dtad_kind; TYPE_2__* dtad_difo; struct TYPE_14__* dtad_next; } ;
typedef TYPE_5__ dtrace_actdesc_t ;
typedef int dt_node_t ;
struct TYPE_15__ {TYPE_3__* pcb_stmt; int pcb_hdl; int pcb_jmpbuf; int pcb_prog; } ;
struct TYPE_10__ {scalar_t__ dtdt_kind; scalar_t__ dtdt_size; } ;
struct TYPE_11__ {TYPE_1__ dtdo_rtype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int const*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 TYPE_6__* VAR_16 ;

__attribute__((used)) static void
FUNC_6(dtrace_stmtdesc_t *VAR_17, const dt_node_t *VAR_18)
{
 dtrace_ecbdesc_t *VAR_19 = VAR_17->dtsd_ecbdesc;
 dtrace_actdesc_t *VAR_20, *VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 0;




 for (VAR_20 = VAR_19->dted_action; VAR_20 != ((void*)0); VAR_20 = VAR_20->dtad_next) {
  if (VAR_20->dtad_kind == VAR_1) {
   if (VAR_22) {
    FUNC_1(VAR_18, VAR_9, "commit( ) may "
        "not follow commit( )\n");
   }

   if (VAR_24) {
    FUNC_1(VAR_18, VAR_10, "commit( ) may "
        "not follow data-recording action(s)\n");
   }

   for (VAR_21 = VAR_20; VAR_21 != ((void*)0); VAR_21 = VAR_21->dtad_next) {
    if (!FUNC_0(VAR_21->dtad_kind))
     continue;

    FUNC_1(VAR_18, VAR_7, "aggregating actions "
        "may not follow commit( )\n");
   }

   VAR_22 = 1;
   continue;
  }

  if (VAR_20->dtad_kind == VAR_5) {
   if (VAR_23) {
    FUNC_1(VAR_18, VAR_15, "speculate( ) may "
        "not follow speculate( )\n");
   }

   if (VAR_22) {
    FUNC_1(VAR_18, VAR_13, "speculate( ) may "
        "not follow commit( )\n");
   }

   if (VAR_24) {
    FUNC_1(VAR_18, VAR_14, "speculate( ) may "
        "not follow data-recording action(s)\n");
   }

   VAR_23 = 1;
   continue;
  }

  if (FUNC_0(VAR_20->dtad_kind)) {
   if (VAR_23) {
    FUNC_1(VAR_18, VAR_8, "aggregating actions "
        "may not follow speculate( )\n");
   }

   VAR_24 = 1;
   continue;
  }

  if (VAR_23) {
   if (FUNC_2(VAR_20)) {
    FUNC_1(VAR_18, VAR_6, "destructive actions "
        "may not follow speculate( )\n");
   }

   if (VAR_20->dtad_kind == VAR_4) {
    FUNC_1(VAR_18, VAR_12, "exit( ) may not "
        "follow speculate( )\n");
   }
  }




  if (FUNC_2(VAR_20) ||
      VAR_20->dtad_kind == VAR_3)
   continue;

  if (VAR_20->dtad_kind == VAR_2 &&
      VAR_20->dtad_difo->dtdo_rtype.dtdt_kind == VAR_0 &&
      VAR_20->dtad_difo->dtdo_rtype.dtdt_size == 0)
   continue;

  if (VAR_22) {
   FUNC_1(VAR_18, VAR_11, "data-recording actions "
       "may not follow commit( )\n");
  }

  if (!VAR_23)
   VAR_24 = 1;
 }

 if (FUNC_4(VAR_16->pcb_hdl, VAR_16->pcb_prog, VAR_17) != 0)
  FUNC_5(VAR_16->pcb_jmpbuf, FUNC_3(VAR_16->pcb_hdl));

 if (VAR_16->pcb_stmt == VAR_17)
  VAR_16->pcb_stmt = ((void*)0);
}
