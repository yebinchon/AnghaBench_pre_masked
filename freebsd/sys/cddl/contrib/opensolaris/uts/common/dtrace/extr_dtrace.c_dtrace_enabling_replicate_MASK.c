
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int dts_vstate; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_18__ {int dtpd_name; int dtpd_func; int dtpd_mod; int dtpd_provider; } ;
typedef TYPE_3__ dtrace_probedesc_t ;
struct TYPE_19__ {int dten_ndesc; TYPE_5__** dten_desc; TYPE_1__* dten_vstate; struct TYPE_19__* dten_next; } ;
typedef TYPE_4__ dtrace_enabling_t ;
struct TYPE_20__ {TYPE_3__ dted_probe; } ;
typedef TYPE_5__ dtrace_ecbdesc_t ;
struct TYPE_16__ {TYPE_2__* dtvs_state; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,TYPE_3__*) ;
 TYPE_4__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(dtrace_state_t *VAR_7, dtrace_probedesc_t *VAR_8,
    dtrace_probedesc_t *VAR_9)
{
 dtrace_enabling_t *VAR_10, *VAR_11;
 int VAR_12 = 0, VAR_13 = VAR_4;

 FUNC_0(FUNC_1(&VAR_5));
 FUNC_0(FUNC_7(VAR_8->dtpd_provider) < VAR_3);
 FUNC_0(FUNC_7(VAR_8->dtpd_mod) < VAR_1);
 FUNC_0(FUNC_7(VAR_8->dtpd_func) < VAR_0);
 FUNC_0(FUNC_7(VAR_8->dtpd_name) < VAR_2);

 VAR_10 = FUNC_3(&VAR_7->dts_vstate);





 for (VAR_11 = VAR_6; VAR_11 != ((void*)0); VAR_11 = VAR_11->dten_next) {
  int VAR_14;





  FUNC_0(VAR_11->dten_vstate->dtvs_state != ((void*)0));

  if (VAR_11->dten_vstate->dtvs_state != VAR_7)
   continue;





  for (VAR_14 = 0; VAR_14 < VAR_11->dten_ndesc; VAR_14++) {
   dtrace_ecbdesc_t *VAR_15 = VAR_11->dten_desc[VAR_14];
   dtrace_probedesc_t *VAR_16 = &VAR_15->dted_probe;

   if (FUNC_6(VAR_16->dtpd_provider, VAR_8->dtpd_provider))
    continue;

   if (FUNC_6(VAR_16->dtpd_mod, VAR_8->dtpd_mod))
    continue;

   if (FUNC_6(VAR_16->dtpd_func, VAR_8->dtpd_func))
    continue;

   if (FUNC_6(VAR_16->dtpd_name, VAR_8->dtpd_name))
    continue;





   VAR_12 = 1;
   FUNC_2(VAR_10, VAR_15, VAR_9);
  }
 }

 if (!VAR_12 || (VAR_13 = FUNC_5(VAR_10)) != 0) {
  FUNC_4(VAR_10);
  return (VAR_13);
 }

 return (0);
}
