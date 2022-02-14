
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ dpi_recgens; int dpi_aggregates; int dpi_speculations; void* dpi_stmtattr; void* dpi_descattr; } ;
typedef TYPE_4__ dtrace_proginfo_t ;
struct TYPE_21__ {TYPE_1__* ds_desc; } ;
struct TYPE_18__ {TYPE_8__ dp_stmts; } ;
typedef TYPE_5__ dtrace_prog_t ;
typedef int dtrace_hdl_t ;
struct TYPE_19__ {TYPE_7__* dted_action; } ;
typedef TYPE_6__ dtrace_ecbdesc_t ;
struct TYPE_20__ {scalar_t__ dtad_kind; TYPE_3__* dtad_difo; scalar_t__ dtad_arg; struct TYPE_20__* dtad_next; } ;
typedef TYPE_7__ dtrace_actdesc_t ;
typedef TYPE_8__ dt_stmt_t ;
struct TYPE_15__ {scalar_t__ dtdt_kind; scalar_t__ dtdt_size; } ;
struct TYPE_16__ {TYPE_2__ dtdo_rtype; } ;
struct TYPE_14__ {int dtsd_stmtattr; int dtsd_descattr; TYPE_6__* dtsd_ecbdesc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (TYPE_4__*,int) ;
 void* FUNC_3 (int ,void*) ;
 TYPE_8__* FUNC_4 (TYPE_8__*) ;

void
FUNC_5(dtrace_hdl_t *VAR_5, dtrace_prog_t *VAR_6,
    dtrace_proginfo_t *VAR_7)
{
 dt_stmt_t *VAR_8;
 dtrace_actdesc_t *VAR_9;
 dtrace_ecbdesc_t *VAR_10 = ((void*)0);

 if (VAR_7 == ((void*)0))
  return;

 FUNC_2(VAR_7, sizeof (dtrace_proginfo_t));

 if (FUNC_4(&VAR_6->dp_stmts) != ((void*)0)) {
  VAR_7->dpi_descattr = VAR_4;
  VAR_7->dpi_stmtattr = VAR_4;
 } else {
  VAR_7->dpi_descattr = VAR_3;
  VAR_7->dpi_stmtattr = VAR_3;
 }

 for (VAR_8 = FUNC_4(&VAR_6->dp_stmts); VAR_8; VAR_8 = FUNC_4(VAR_8)) {
  dtrace_ecbdesc_t *VAR_11 = VAR_8->ds_desc->dtsd_ecbdesc;

  if (VAR_11 == VAR_10)
   continue;
  VAR_10 = VAR_11;

  VAR_7->dpi_descattr =
      FUNC_3(VAR_8->ds_desc->dtsd_descattr, VAR_7->dpi_descattr);

  VAR_7->dpi_stmtattr =
      FUNC_3(VAR_8->ds_desc->dtsd_stmtattr, VAR_7->dpi_stmtattr);





  if (VAR_11->dted_action == ((void*)0))
   VAR_7->dpi_recgens++;

  for (VAR_9 = VAR_11->dted_action; VAR_9 != ((void*)0); VAR_9 = VAR_9->dtad_next) {
   if (VAR_9->dtad_kind == VAR_2) {
    VAR_7->dpi_speculations++;
    continue;
   }

   if (FUNC_0(VAR_9->dtad_kind)) {
    VAR_7->dpi_recgens -= VAR_9->dtad_arg;
    VAR_7->dpi_aggregates++;
    continue;
   }

   if (FUNC_1(VAR_9->dtad_kind))
    continue;

   if (VAR_9->dtad_kind == VAR_1 &&
       VAR_9->dtad_difo->dtdo_rtype.dtdt_kind ==
       VAR_0 &&
       VAR_9->dtad_difo->dtdo_rtype.dtdt_size == 0)
    continue;

   VAR_7->dpi_recgens++;
  }
 }
}
