
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ spa_load_state; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_11__ {TYPE_1__* scn_dp; int scn_async_stalled; scalar_t__ scn_async_destroying; } ;
typedef TYPE_3__ dsl_scan_t ;
typedef int boolean_t ;
struct TYPE_9__ {int dp_free_bpobj; TYPE_2__* dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

boolean_t
FUNC_5(dsl_scan_t *VAR_4)
{
 spa_t *VAR_5 = VAR_4->scn_dp->dp_spa;
 uint64_t VAR_6 = 0, VAR_7, VAR_8;

 if (VAR_5->spa_load_state != VAR_2)
  return (VAR_0);
 if (FUNC_3(VAR_5))
  return (VAR_0);
 if ((FUNC_2(VAR_4) && !FUNC_1(VAR_4)) ||
     (VAR_4->scn_async_destroying && !VAR_4->scn_async_stalled))
  return (VAR_1);

 if (FUNC_4(VAR_4->scn_dp->dp_spa) >= VAR_3) {
  (void) FUNC_0(&VAR_4->scn_dp->dp_free_bpobj,
      &VAR_6, &VAR_7, &VAR_8);
 }
 return (VAR_6 != 0);
}
