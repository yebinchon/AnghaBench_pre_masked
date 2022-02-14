
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int p_pid; } ;
typedef TYPE_2__ proc_t ;
struct TYPE_9__ {int dthps_deferred; int dthps_nprovs; TYPE_1__** dthps_provs; struct TYPE_9__* dthps_prev; struct TYPE_9__* dthps_next; int dthps_pid; } ;
typedef TYPE_3__ dtrace_helpers_t ;
typedef int dof_helper_t ;
struct TYPE_7__ {int dthp_prov; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(proc_t *VAR_4, dtrace_helpers_t *VAR_5,
    dof_helper_t *VAR_6)
{
 FUNC_0(FUNC_1(&VAR_1));

 FUNC_4(&VAR_2);
 FUNC_4(&VAR_1);

 if (!FUNC_2() || VAR_3 == ((void*)0)) {







  if (VAR_5->dthps_next == ((void*)0) && VAR_5->dthps_prev == ((void*)0) &&
      VAR_0 != VAR_5) {
   VAR_5->dthps_deferred = 1;
   VAR_5->dthps_pid = VAR_4->p_pid;
   VAR_5->dthps_next = VAR_0;
   VAR_5->dthps_prev = ((void*)0);
   if (VAR_0 != ((void*)0))
    VAR_0->dthps_prev = VAR_5;
   VAR_0 = VAR_5;
  }

  FUNC_5(&VAR_1);

 } else if (VAR_6 != ((void*)0)) {






  FUNC_5(&VAR_1);

  FUNC_3(VAR_6, VAR_4->p_pid);

 } else {





  int VAR_7;
  FUNC_5(&VAR_1);

  for (VAR_7 = 0; VAR_7 < VAR_5->dthps_nprovs; VAR_7++) {
   FUNC_3(&VAR_5->dthps_provs[VAR_7]->dthp_prov,
       VAR_4->p_pid);
  }
 }

 FUNC_5(&VAR_2);
}
