
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int task_func_t ;
struct TYPE_13__ {void (* dtps_enable ) (void*,VAR_0,void*) ;int (* dtps_destroy ) (int ,scalar_t__,int ) ;} ;
struct TYPE_14__ {scalar_t__ dtpv_defunct; struct TYPE_14__* dtpv_name; struct TYPE_14__* dtpv_next; scalar_t__ dtpr_id; struct TYPE_14__* dtpr_name; struct TYPE_14__* dtpr_func; struct TYPE_14__* dtpr_mod; int dtpr_arg; int dtpv_arg; TYPE_2__ dtpv_pops; struct TYPE_14__* dtpr_nextmod; struct TYPE_14__* dtpr_provider; int * dtpr_ecb; } ;
typedef TYPE_3__ dtrace_provider_t ;
typedef scalar_t__ dtrace_provider_id_t ;
typedef TYPE_3__ dtrace_probe_t ;
struct TYPE_12__ {scalar_t__ dts_necbs; } ;
struct TYPE_11__ {TYPE_1__* dta_state; } ;


 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 TYPE_10__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_3__** VAR_15 ;
 TYPE_3__* VAR_16 ;
 int VAR_17 ;
 int FUNC_4 () ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int VAR_20 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,void*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,scalar_t__,int ) ;
 int FUNC_12 (int ,int *,int *,int ) ;
 int FUNC_13 (int ,void*,int) ;

int
FUNC_14(dtrace_provider_id_t VAR_21)
{
 dtrace_provider_t *VAR_22 = (dtrace_provider_t *)VAR_21;
 dtrace_provider_t *VAR_23 = ((void*)0);
 int VAR_24, VAR_25 = 0, VAR_26 = 0;
 dtrace_probe_t *VAR_27, *VAR_28 = ((void*)0);

 if (VAR_22->dtpv_pops.dtps_enable ==
     (void (*)(void *, VAR_29, void *))VAR_13) {




  FUNC_0(VAR_22 == VAR_16);



  FUNC_0(FUNC_1(&VAR_17));
  FUNC_0(FUNC_1(&VAR_11));
  VAR_25 = 1;

  if (VAR_16->dtpv_next != ((void*)0)) {



   return (VAR_2);
  }
 } else {
  FUNC_7(&VAR_17);



  FUNC_7(&VAR_11);
 }






 if (!VAR_22->dtpv_defunct &&
     (VAR_14 || (VAR_4.dta_state != ((void*)0) &&
     VAR_4.dta_state->dts_necbs > 0))) {
  if (!VAR_25) {
   FUNC_8(&VAR_11);



   FUNC_8(&VAR_17);
  }
  return (VAR_2);
 }




 for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
  if ((VAR_27 = VAR_15[VAR_24]) == ((void*)0))
   continue;

  if (VAR_27->dtpr_provider != VAR_22)
   continue;

  if (VAR_27->dtpr_ecb == ((void*)0))
   continue;
  if (FUNC_2() - VAR_22->dtpv_defunct >
      VAR_19)
   VAR_26 = 1;

  if (!VAR_25) {
   FUNC_8(&VAR_11);



   FUNC_8(&VAR_17);
  }

  if (VAR_26)
   return (VAR_2);

  (void) FUNC_12(VAR_18,
      (task_func_t *)VAR_10, ((void*)0), VAR_3);

  return (VAR_1);
 }





 for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
  if ((VAR_27 = VAR_15[VAR_24]) == ((void*)0))
   continue;

  if (VAR_27->dtpr_provider != VAR_22)
   continue;

  VAR_15[VAR_24] = ((void*)0);

  FUNC_3(VAR_7, VAR_27);
  FUNC_3(VAR_6, VAR_27);
  FUNC_3(VAR_8, VAR_27);

  if (VAR_28 == ((void*)0)) {
   VAR_28 = VAR_27;
   VAR_27->dtpr_nextmod = ((void*)0);
  } else {
   VAR_27->dtpr_nextmod = VAR_28;
   VAR_28 = VAR_27;
  }
 }






 FUNC_4();

 for (VAR_27 = VAR_28; VAR_27 != ((void*)0); VAR_27 = VAR_28) {
  VAR_28 = VAR_27->dtpr_nextmod;

  VAR_22->dtpv_pops.dtps_destroy(VAR_22->dtpv_arg, VAR_27->dtpr_id,
      VAR_27->dtpr_arg);
  FUNC_6(VAR_27->dtpr_mod, FUNC_10(VAR_27->dtpr_mod) + 1);
  FUNC_6(VAR_27->dtpr_func, FUNC_10(VAR_27->dtpr_func) + 1);
  FUNC_6(VAR_27->dtpr_name, FUNC_10(VAR_27->dtpr_name) + 1);



  FUNC_5(VAR_5, VAR_27->dtpr_id);

  FUNC_6(VAR_27, sizeof (dtrace_probe_t));
 }

 if ((VAR_23 = VAR_16) == VAR_22) {




  VAR_16 = VAR_22->dtpv_next;
 } else {
  while (VAR_23 != ((void*)0) && VAR_23->dtpv_next != VAR_22)
   VAR_23 = VAR_23->dtpv_next;

  if (VAR_23 == ((void*)0)) {
   FUNC_9("attempt to unregister non-existent "
       "dtrace provider %p\n", (void *)VAR_21);
  }

  VAR_23->dtpv_next = VAR_22->dtpv_next;
 }

 if (!VAR_25) {
  FUNC_8(&VAR_11);



  FUNC_8(&VAR_17);
 }

 FUNC_6(VAR_22->dtpv_name, FUNC_10(VAR_22->dtpv_name) + 1);
 FUNC_6(VAR_22, sizeof (dtrace_provider_t));

 return (0);
}
