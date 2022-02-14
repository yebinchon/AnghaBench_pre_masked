
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dts_necbs; scalar_t__ dts_activity; TYPE_2__** dts_ecbs; int dts_epid; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_rechdr_t ;
typedef int dtrace_probe_t ;
typedef int dtrace_epid_t ;
struct TYPE_9__ {int dte_size; int dte_needed; int dte_alignment; int dte_epid; TYPE_1__* dte_state; int * dte_probe; int * dte_predicate; } ;
typedef TYPE_2__ dtrace_ecb_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__**,TYPE_2__**,int) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__**,int) ;
 void* FUNC_6 (int,int ) ;

__attribute__((used)) static dtrace_ecb_t *
FUNC_7(dtrace_state_t *VAR_3, dtrace_probe_t *VAR_4)
{
 dtrace_ecb_t *VAR_5;
 dtrace_epid_t VAR_6;

 FUNC_0(FUNC_1(&VAR_2));

 VAR_5 = FUNC_6(sizeof (dtrace_ecb_t), VAR_1);
 VAR_5->dte_predicate = ((void*)0);
 VAR_5->dte_probe = VAR_4;





 VAR_5->dte_size = VAR_5->dte_needed = sizeof (dtrace_rechdr_t);
 VAR_5->dte_alignment = sizeof (dtrace_epid_t);

 VAR_6 = VAR_3->dts_epid++;

 if (VAR_6 - 1 >= VAR_3->dts_necbs) {
  dtrace_ecb_t **VAR_7 = VAR_3->dts_ecbs, **VAR_8;
  int VAR_9 = VAR_3->dts_necbs << 1;

  FUNC_0(VAR_6 == VAR_3->dts_necbs + 1);

  if (VAR_9 == 0) {
   FUNC_0(VAR_7 == ((void*)0));
   VAR_9 = 1;
  }

  VAR_8 = FUNC_6(VAR_9 * sizeof (*VAR_8), VAR_1);

  if (VAR_7 != ((void*)0))
   FUNC_2(VAR_7, VAR_8, VAR_3->dts_necbs * sizeof (*VAR_8));

  FUNC_3();
  VAR_3->dts_ecbs = VAR_8;

  if (VAR_7 != ((void*)0)) {







   if (VAR_3->dts_activity != VAR_0)
    FUNC_4();

   FUNC_5(VAR_7, VAR_3->dts_necbs * sizeof (*VAR_8));
  }

  FUNC_3();
  VAR_3->dts_necbs = VAR_9;
 }

 VAR_5->dte_state = VAR_3;

 FUNC_0(VAR_3->dts_ecbs[VAR_6 - 1] == ((void*)0));
 FUNC_3();
 VAR_3->dts_ecbs[(VAR_5->dte_epid = VAR_6) - 1] = VAR_5;

 return (VAR_5);
}
