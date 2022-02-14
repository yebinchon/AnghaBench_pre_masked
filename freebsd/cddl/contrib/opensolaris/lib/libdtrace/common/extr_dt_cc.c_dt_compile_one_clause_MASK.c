
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_19__ {int dtpdd_difo; } ;
struct TYPE_20__ {TYPE_1__ dted_pred; } ;
typedef TYPE_2__ dtrace_ecbdesc_t ;
struct TYPE_21__ {int dn_kind; struct TYPE_21__* dn_expr; int dn_attr; int dn_ctxattr; struct TYPE_21__* dn_list; struct TYPE_21__* dn_acts; int * dn_pred; int dn_desc; int dn_line; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_22__ {TYPE_2__* pcb_ecbdesc; int * pcb_stmt; int pcb_jmpbuf; } ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int *,TYPE_3__*,int *) ;
 int FUNC_6 (int *,TYPE_3__*,int *) ;
 int FUNC_7 (int *,TYPE_3__*,int *) ;
 TYPE_2__* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int ,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,TYPE_3__*) ;
 int * FUNC_15 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;

__attribute__((used)) static void
FUNC_17(dtrace_hdl_t *VAR_7, dt_node_t *VAR_8, dt_node_t *VAR_9)
{
 dtrace_ecbdesc_t *VAR_10;
 dtrace_stmtdesc_t *VAR_11;
 dt_node_t *VAR_12;

 VAR_5 = VAR_9->dn_line;
 FUNC_13(VAR_7, VAR_9->dn_desc);
 (void) FUNC_11(VAR_8, VAR_0);

 if (FUNC_0(VAR_7, 2))
  FUNC_12(VAR_8, VAR_4, 0);

 if ((VAR_10 = FUNC_8(VAR_7, VAR_9->dn_desc)) == ((void*)0))
  FUNC_16(VAR_6->pcb_jmpbuf, VAR_2);

 FUNC_1(VAR_6->pcb_ecbdesc == ((void*)0));
 VAR_6->pcb_ecbdesc = VAR_10;

 if (VAR_8->dn_pred != ((void*)0)) {
  FUNC_4(VAR_6, VAR_8->dn_pred);
  VAR_10->dted_pred.dtpdd_difo = FUNC_3(VAR_6);
 }

 if (VAR_8->dn_acts == ((void*)0)) {
  FUNC_14(FUNC_15(VAR_7, VAR_10,
      VAR_8->dn_ctxattr, VAR_3), VAR_8);
 }

 for (VAR_12 = VAR_8->dn_acts; VAR_12 != ((void*)0); VAR_12 = VAR_12->dn_list) {
  FUNC_1(VAR_6->pcb_stmt == ((void*)0));
  VAR_11 = FUNC_15(VAR_7, VAR_10, VAR_8->dn_ctxattr, VAR_8->dn_attr);

  switch (VAR_12->dn_kind) {
  case 129:
   if (VAR_12->dn_expr->dn_kind == 130)
    FUNC_5(VAR_7, VAR_12->dn_expr, VAR_11);
   else
    FUNC_6(VAR_7, VAR_12, VAR_11);
   break;
  case 128:
   FUNC_7(VAR_7, VAR_12, VAR_11);
   break;
  case 130:
   FUNC_5(VAR_7, VAR_12, VAR_11);
   break;
  default:
   FUNC_2(VAR_12, VAR_1, "internal error -- node kind "
       "%u is not a valid statement\n", VAR_12->dn_kind);
  }

  FUNC_1(VAR_6->pcb_stmt == VAR_11);
  FUNC_14(VAR_11, VAR_12);
 }

 FUNC_1(VAR_6->pcb_ecbdesc == VAR_10);
 FUNC_9(VAR_7, VAR_10);
 FUNC_10(VAR_7);
 VAR_6->pcb_ecbdesc = ((void*)0);
}
