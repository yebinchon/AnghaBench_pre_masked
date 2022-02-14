
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int sds_dsobj; } ;
typedef TYPE_1__ scan_ds_t ;
struct TYPE_9__ {int scn_queue; } ;
typedef TYPE_2__ dsl_scan_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(dsl_scan_t *VAR_0, uint64_t VAR_1)
{
 scan_ds_t VAR_2, *VAR_3;

 VAR_2.sds_dsobj = VAR_1;

 VAR_3 = FUNC_1(&VAR_0->scn_queue, &VAR_2, ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_2(&VAR_0->scn_queue, VAR_3);
 FUNC_3(VAR_3, sizeof (*VAR_3));
}
