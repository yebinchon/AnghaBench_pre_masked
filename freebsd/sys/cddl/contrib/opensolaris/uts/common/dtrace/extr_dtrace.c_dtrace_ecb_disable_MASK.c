
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* dtps_disable ) (int ,int ,int ) ;} ;
struct TYPE_8__ {int dtpv_arg; TYPE_1__ dtpv_pops; } ;
typedef TYPE_2__ dtrace_provider_t ;
struct TYPE_9__ {scalar_t__ dtpr_predcache; TYPE_5__* dtpr_ecb; TYPE_5__* dtpr_ecb_last; int dtpr_arg; int dtpr_id; TYPE_2__* dtpr_provider; } ;
typedef TYPE_3__ dtrace_probe_t ;
struct TYPE_10__ {scalar_t__ dtp_cacheid; } ;
typedef TYPE_4__ dtrace_predicate_t ;
struct TYPE_11__ {struct TYPE_11__* dte_next; TYPE_4__* dte_predicate; TYPE_3__* dte_probe; } ;
typedef TYPE_5__ dtrace_ecb_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(dtrace_ecb_t *VAR_2)
{



 dtrace_ecb_t *VAR_3, *VAR_4 = ((void*)0);
 dtrace_probe_t *VAR_5 = VAR_2->dte_probe;

 FUNC_0(FUNC_1(&VAR_1));

 if (VAR_5 == ((void*)0)) {



  return;
 }

 for (VAR_3 = VAR_5->dtpr_ecb; VAR_3 != ((void*)0); VAR_3 = VAR_3->dte_next) {
  if (VAR_3 == VAR_2)
   break;
  VAR_4 = VAR_3;
 }

 FUNC_0(VAR_3 != ((void*)0));

 if (VAR_4 == ((void*)0)) {
  VAR_5->dtpr_ecb = VAR_2->dte_next;
 } else {
  VAR_4->dte_next = VAR_2->dte_next;
 }

 if (VAR_2 == VAR_5->dtpr_ecb_last) {
  FUNC_0(VAR_2->dte_next == ((void*)0));
  VAR_5->dtpr_ecb_last = VAR_4;
 }





 FUNC_2();

 if (VAR_5->dtpr_ecb == ((void*)0)) {





  dtrace_provider_t *VAR_6 = VAR_5->dtpr_provider;

  FUNC_0(VAR_2->dte_next == ((void*)0));
  FUNC_0(VAR_5->dtpr_ecb_last == ((void*)0));
  VAR_5->dtpr_predcache = VAR_0;
  VAR_6->dtpv_pops.dtps_disable(VAR_6->dtpv_arg,
      VAR_5->dtpr_id, VAR_5->dtpr_arg);
  FUNC_2();
 } else {





  FUNC_0(VAR_5->dtpr_ecb_last != ((void*)0));
  FUNC_0(VAR_5->dtpr_predcache == VAR_0);

  if (VAR_5->dtpr_ecb == VAR_5->dtpr_ecb_last) {
   dtrace_predicate_t *VAR_7 = VAR_5->dtpr_ecb->dte_predicate;

   FUNC_0(VAR_5->dtpr_ecb->dte_next == ((void*)0));

   if (VAR_7 != ((void*)0))
    VAR_5->dtpr_predcache = VAR_7->dtp_cacheid;
  }

  VAR_2->dte_next = ((void*)0);
 }
}
