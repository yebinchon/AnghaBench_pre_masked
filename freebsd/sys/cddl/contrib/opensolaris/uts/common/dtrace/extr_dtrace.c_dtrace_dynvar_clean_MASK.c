
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_dynvar_t ;
struct TYPE_4__ {int dtds_state; TYPE_2__* dtds_percpu; } ;
typedef TYPE_1__ dtrace_dstate_t ;
struct TYPE_5__ {int * dtdsc_rinsing; int * dtdsc_clean; int * dtdsc_dirty; } ;
typedef TYPE_2__ dtrace_dstate_percpu_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int **,int *,int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void
FUNC_4(dtrace_dstate_t *VAR_3)
{
 dtrace_dynvar_t *VAR_4;
 dtrace_dstate_percpu_t *VAR_5;
 dtrace_dynvar_t **VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5 = &VAR_3->dtds_percpu[VAR_7];
  VAR_6 = &VAR_5->dtdsc_rinsing;




  if (VAR_5->dtdsc_dirty == ((void*)0))
   continue;

  if (VAR_5->dtdsc_rinsing != ((void*)0)) {
   continue;
  }

  if (VAR_5->dtdsc_clean != ((void*)0)) {
   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    dtrace_dstate_percpu_t *VAR_10;

    VAR_10 = &VAR_3->dtds_percpu[VAR_8];

    if (VAR_10->dtdsc_rinsing != ((void*)0))
     continue;

    if (VAR_10->dtdsc_dirty != ((void*)0))
     continue;

    if (VAR_10->dtdsc_clean != ((void*)0))
     continue;

    VAR_6 = &VAR_10->dtdsc_rinsing;
    break;
   }

   if (VAR_8 == VAR_1) {





    VAR_2++;
    continue;
   }
  }

  VAR_9 = 1;




  do {
   VAR_4 = VAR_5->dtdsc_dirty;
   *VAR_6 = VAR_4;
   FUNC_2();
  } while (FUNC_1(&VAR_5->dtdsc_dirty,
      VAR_4, ((void*)0)) != VAR_4);
 }

 if (!VAR_9) {



  return;
 }

 FUNC_3();

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5 = &VAR_3->dtds_percpu[VAR_7];

  if (VAR_5->dtdsc_rinsing == ((void*)0))
   continue;





  FUNC_0(VAR_5->dtdsc_clean == ((void*)0));
  VAR_5->dtdsc_clean = VAR_5->dtdsc_rinsing;
  VAR_5->dtdsc_rinsing = ((void*)0);
 }
 FUNC_3();

 VAR_3->dtds_state = VAR_0;
}
