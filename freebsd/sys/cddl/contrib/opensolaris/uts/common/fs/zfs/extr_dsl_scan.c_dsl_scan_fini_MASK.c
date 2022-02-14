
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int scn_prefetch_queue; int scn_queue; int * scn_taskq; } ;
typedef TYPE_1__ dsl_scan_t ;
struct TYPE_7__ {TYPE_1__* dp_scan; } ;
typedef TYPE_2__ dsl_pool_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(dsl_pool_t *VAR_0)
{
 if (VAR_0->dp_scan != ((void*)0)) {
  dsl_scan_t *VAR_1 = VAR_0->dp_scan;

  if (VAR_1->scn_taskq != ((void*)0))
   FUNC_3(VAR_1->scn_taskq);
  FUNC_2(VAR_1);
  FUNC_0(&VAR_1->scn_queue);
  FUNC_0(&VAR_1->scn_prefetch_queue);

  FUNC_1(VAR_0->dp_scan, sizeof (dsl_scan_t));
  VAR_0->dp_scan = ((void*)0);
 }
}
