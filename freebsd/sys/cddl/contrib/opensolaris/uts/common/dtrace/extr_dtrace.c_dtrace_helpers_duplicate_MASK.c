
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* p_dtrace_helpers; } ;
typedef TYPE_2__ proc_t ;
typedef int dtrace_vstate_t ;
struct TYPE_14__ {scalar_t__ dthps_nprovs; scalar_t__ dthps_maxprovs; TYPE_1__** dthps_provs; TYPE_4__** dthps_actions; int dthps_vstate; int dthps_generation; } ;
typedef TYPE_3__ dtrace_helpers_t ;
typedef int dtrace_helper_provider_t ;
struct TYPE_15__ {int dtha_nactions; struct TYPE_15__* dtha_next; int ** dtha_actions; int * dtha_predicate; int dtha_generation; } ;
typedef TYPE_4__ dtrace_helper_action_t ;
typedef int dtrace_difo_t ;
struct TYPE_12__ {int dthp_ref; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 void* FUNC_4 (int,int ) ;
 TYPE_4__* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(proc_t *VAR_4, proc_t *VAR_5)
{
 dtrace_helpers_t *VAR_6, *VAR_7;
 dtrace_helper_action_t *VAR_8, *VAR_9, *VAR_10;
 dtrace_difo_t *VAR_11;
 dtrace_vstate_t *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0;

 FUNC_6(&VAR_3);
 FUNC_0(VAR_4->p_dtrace_helpers != ((void*)0));
 FUNC_0(VAR_2 > 0);

 VAR_6 = VAR_4->p_dtrace_helpers;
 VAR_7 = FUNC_3(VAR_5);
 FUNC_0(VAR_5->p_dtrace_helpers != ((void*)0));

 VAR_7->dthps_generation = VAR_6->dthps_generation;
 VAR_12 = &VAR_7->dthps_vstate;




 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if ((VAR_8 = VAR_6->dthps_actions[VAR_13]) == ((void*)0))
   continue;

  for (VAR_10 = ((void*)0); VAR_8 != ((void*)0); VAR_8 = VAR_8->dtha_next) {
   VAR_9 = FUNC_5(sizeof (dtrace_helper_action_t),
       VAR_1);
   VAR_9->dtha_generation = VAR_8->dtha_generation;

   if ((VAR_11 = VAR_8->dtha_predicate) != ((void*)0)) {
    VAR_11 = FUNC_1(VAR_11, VAR_12);
    VAR_9->dtha_predicate = VAR_11;
   }

   VAR_9->dtha_nactions = VAR_8->dtha_nactions;
   VAR_15 = sizeof (dtrace_difo_t *) * VAR_9->dtha_nactions;
   VAR_9->dtha_actions = FUNC_4(VAR_15, VAR_1);

   for (VAR_14 = 0; VAR_14 < VAR_9->dtha_nactions; VAR_14++) {
    dtrace_difo_t *VAR_17 = VAR_8->dtha_actions[VAR_14];

    FUNC_0(VAR_17 != ((void*)0));
    VAR_17 = FUNC_1(VAR_17, VAR_12);
    VAR_9->dtha_actions[VAR_14] = VAR_17;
   }

   if (VAR_10 != ((void*)0)) {
    VAR_10->dtha_next = VAR_9;
   } else {
    VAR_7->dthps_actions[VAR_13] = VAR_9;
   }

   VAR_10 = VAR_9;
  }
 }





 if (VAR_6->dthps_nprovs > 0) {
  VAR_7->dthps_nprovs = VAR_6->dthps_nprovs;
  VAR_7->dthps_maxprovs = VAR_6->dthps_nprovs;
  VAR_7->dthps_provs = FUNC_4(VAR_7->dthps_nprovs *
      sizeof (dtrace_helper_provider_t *), VAR_1);
  for (VAR_13 = 0; VAR_13 < VAR_7->dthps_nprovs; VAR_13++) {
   VAR_7->dthps_provs[VAR_13] = VAR_6->dthps_provs[VAR_13];
   VAR_7->dthps_provs[VAR_13]->dthp_ref++;
  }

  VAR_16 = 1;
 }

 FUNC_7(&VAR_3);

 if (VAR_16)
  FUNC_2(VAR_5, VAR_7, ((void*)0));
}
