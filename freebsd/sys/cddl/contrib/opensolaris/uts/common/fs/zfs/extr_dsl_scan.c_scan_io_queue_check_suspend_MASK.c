
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ scn_func; } ;
struct TYPE_7__ {TYPE_3__* scn_dp; TYPE_1__ scn_phys; scalar_t__ scn_sync_start_time; } ;
typedef TYPE_2__ dsl_scan_t ;
typedef int boolean_t ;
struct TYPE_9__ {scalar_t__ spa_sync_starttime; } ;
struct TYPE_8__ {int dp_dirty_total; TYPE_4__* dp_spa; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static boolean_t
FUNC_5(dsl_scan_t *VAR_6)
{

 uint64_t VAR_7 = FUNC_2();
 uint64_t VAR_8 = VAR_7 - VAR_6->scn_sync_start_time;
 uint64_t VAR_9 = VAR_7 -
     VAR_6->scn_dp->dp_spa->spa_sync_starttime;
 int VAR_10 = VAR_6->scn_dp->dp_dirty_total * 100 / VAR_1;
 int VAR_11 = (VAR_6->scn_phys.scn_func == VAR_0) ?
     VAR_2 : VAR_3;

 return ((FUNC_0(VAR_8) > VAR_11 &&
     (VAR_10 >= VAR_5 ||
     FUNC_4(VAR_6->scn_dp) ||
     FUNC_1(VAR_9) >= VAR_4)) ||
     FUNC_3(VAR_6->scn_dp->dp_spa));
}
