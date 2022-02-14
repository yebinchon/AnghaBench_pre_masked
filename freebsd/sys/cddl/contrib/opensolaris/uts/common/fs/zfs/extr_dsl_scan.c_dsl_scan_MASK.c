
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int spa_scrub_reopen; int spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;
typedef scalar_t__ pool_scan_func_t ;
struct TYPE_11__ {int scn_dp; } ;
typedef TYPE_2__ dsl_scan_t ;
struct TYPE_12__ {TYPE_2__* dp_scan; TYPE_1__* dp_spa; } ;
typedef TYPE_3__ dsl_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(dsl_pool_t *VAR_10, pool_scan_func_t VAR_11)
{
 spa_t *VAR_12 = VAR_10->dp_spa;
 dsl_scan_t *VAR_13 = VAR_10->dp_scan;
 FUNC_6(VAR_12, VAR_6);
 VAR_12->spa_scrub_reopen = VAR_1;
 FUNC_8(VAR_12->spa_root_vdev);
 VAR_12->spa_scrub_reopen = VAR_0;
 (void) FUNC_7(VAR_12, ((void*)0), 0);

 if (VAR_11 == VAR_4 && FUNC_1(VAR_13)) {

  int VAR_14 = FUNC_2(VAR_13->scn_dp,
      VAR_5);
  if (VAR_14 == 0) {
   FUNC_4(VAR_12, ((void*)0), ((void*)0), VAR_3);
   return (VAR_2);
  }
  return (FUNC_0(VAR_14));
 }

 return (FUNC_3(FUNC_5(VAR_12), VAR_8,
     VAR_9, &VAR_11, 0, VAR_7));
}
