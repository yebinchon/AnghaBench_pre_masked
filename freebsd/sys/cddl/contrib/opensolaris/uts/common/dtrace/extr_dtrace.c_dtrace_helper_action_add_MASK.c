
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ dtvs_nlocals; } ;
typedef TYPE_2__ dtrace_vstate_t ;
struct TYPE_15__ {int * dtp_difo; } ;
typedef TYPE_3__ dtrace_predicate_t ;
struct TYPE_16__ {TYPE_5__** dthps_actions; int dthps_generation; TYPE_2__ dthps_vstate; } ;
typedef TYPE_4__ dtrace_helpers_t ;
struct TYPE_17__ {int dtha_nactions; struct TYPE_17__* dtha_next; int ** dtha_actions; int * dtha_predicate; int dtha_generation; } ;
typedef TYPE_5__ dtrace_helper_action_t ;
struct TYPE_13__ {TYPE_3__* dtpdd_predicate; } ;
struct TYPE_18__ {TYPE_7__* dted_action; TYPE_1__ dted_pred; } ;
typedef TYPE_6__ dtrace_ecbdesc_t ;
typedef int dtrace_difo_t ;
struct TYPE_19__ {scalar_t__ dtad_kind; int * dtad_difo; struct TYPE_19__* dtad_next; } ;
typedef TYPE_7__ dtrace_actdesc_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(int VAR_8, dtrace_ecbdesc_t *VAR_9,
    dtrace_helpers_t *VAR_10)
{
 dtrace_helper_action_t *VAR_11, *VAR_12;
 dtrace_actdesc_t *VAR_13;
 dtrace_vstate_t *VAR_14;
 dtrace_predicate_t *VAR_15;
 int VAR_16 = 0, VAR_17 = 0, VAR_18;

 if (VAR_8 < 0 || VAR_8 >= VAR_1)
  return (VAR_2);

 VAR_12 = VAR_10->dthps_actions[VAR_8];
 VAR_14 = &VAR_10->dthps_vstate;

 for (VAR_16 = 0; VAR_12 != ((void*)0); VAR_12 = VAR_12->dtha_next) {
  VAR_16++;
  if (VAR_12->dtha_next == ((void*)0))
   break;
 }





 if (VAR_16 >= VAR_5)
  return (VAR_3);

 VAR_11 = FUNC_4(sizeof (dtrace_helper_action_t), VAR_4);
 VAR_11->dtha_generation = VAR_10->dthps_generation;

 if ((VAR_15 = VAR_9->dted_pred.dtpdd_predicate) != ((void*)0)) {
  FUNC_0(VAR_15->dtp_difo != ((void*)0));
  FUNC_1(VAR_15->dtp_difo);
  VAR_11->dtha_predicate = VAR_15->dtp_difo;
 }

 for (VAR_13 = VAR_9->dted_action; VAR_13 != ((void*)0); VAR_13 = VAR_13->dtad_next) {
  if (VAR_13->dtad_kind != VAR_0)
   goto err;

  if (VAR_13->dtad_difo == ((void*)0))
   goto err;

  VAR_17++;
 }

 VAR_11->dtha_actions = FUNC_4(sizeof (dtrace_difo_t *) *
     (VAR_11->dtha_nactions = VAR_17), VAR_4);

 for (VAR_13 = VAR_9->dted_action, VAR_18 = 0; VAR_13 != ((void*)0); VAR_13 = VAR_13->dtad_next) {
  FUNC_1(VAR_13->dtad_difo);
  VAR_11->dtha_actions[VAR_18++] = VAR_13->dtad_difo;
 }

 if (!FUNC_3(VAR_11))
  goto err;

 if (VAR_12 == ((void*)0)) {
  VAR_10->dthps_actions[VAR_8] = VAR_11;
 } else {
  VAR_12->dtha_next = VAR_11;
 }

 if (VAR_14->dtvs_nlocals > VAR_7) {
  VAR_7 = VAR_14->dtvs_nlocals;
  VAR_6 = 0;
 }

 return (0);
err:
 FUNC_2(VAR_11, VAR_14);
 return (VAR_2);
}
