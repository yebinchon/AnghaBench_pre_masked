
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ zb_level; scalar_t__ zb_blkid; scalar_t__ zb_object; scalar_t__ zb_objset; } ;
typedef TYPE_2__ zbookmark_phys_t ;
typedef scalar_t__ uint64_t ;
typedef int longlong_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {scalar_t__ ddb_cursor; scalar_t__ ddb_checksum; scalar_t__ ddb_type; scalar_t__ ddb_class; } ;
struct TYPE_14__ {scalar_t__ scn_func; TYPE_1__ scn_ddt_bookmark; TYPE_2__ scn_bookmark; } ;
struct TYPE_13__ {scalar_t__ scn_suspending; TYPE_4__ scn_phys; TYPE_5__* scn_dp; scalar_t__ scn_sync_start_time; } ;
typedef TYPE_3__ dsl_scan_t ;
typedef TYPE_4__ dsl_scan_phys_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_16__ {scalar_t__ spa_sync_starttime; } ;
struct TYPE_15__ {int dp_dirty_total; TYPE_6__* dp_spa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static boolean_t
FUNC_8(dsl_scan_t *VAR_9, const zbookmark_phys_t *VAR_10)
{

 if (VAR_10 && (int64_t)VAR_10->zb_object < 0)
  return (VAR_0);

 if (VAR_9->scn_suspending)
  return (VAR_1);

 if (!FUNC_2(&VAR_9->scn_phys.scn_bookmark))
  return (VAR_0);


 if (VAR_10 && VAR_10->zb_level != 0)
  return (VAR_0);
 uint64_t VAR_11 = FUNC_5();
 uint64_t VAR_12 = FUNC_5();
 uint64_t VAR_13 = VAR_12 - VAR_9->scn_sync_start_time;
 uint64_t VAR_14 = VAR_12 -
     VAR_9->scn_dp->dp_spa->spa_sync_starttime;

 int VAR_15 = VAR_9->scn_dp->dp_dirty_total * 100 / VAR_3;
 int VAR_16 = (VAR_9->scn_phys.scn_func == VAR_2) ?
     VAR_4 : VAR_6;

 if ((FUNC_0(VAR_13) > VAR_16 &&
            (VAR_15 >= VAR_8 ||
            FUNC_7(VAR_9->scn_dp) ||
            FUNC_1(VAR_14) >= VAR_7)) ||
            FUNC_6(VAR_9->scn_dp->dp_spa) ||
     (VAR_5 && FUNC_4(VAR_9))) {
  if (VAR_10) {
   FUNC_3("suspending at bookmark %llx/%llx/%llx/%llx\n",
       (longlong_t)VAR_10->zb_objset,
       (longlong_t)VAR_10->zb_object,
       (longlong_t)VAR_10->zb_level,
       (longlong_t)VAR_10->zb_blkid);
   VAR_9->scn_phys.scn_bookmark = *VAR_10;
  } else {
   dsl_scan_phys_t *VAR_17 = &VAR_9->scn_phys;

   FUNC_3("suspending at at DDT bookmark "
       "%llx/%llx/%llx/%llx\n",
       (longlong_t)VAR_17->scn_ddt_bookmark.ddb_class,
       (longlong_t)VAR_17->scn_ddt_bookmark.ddb_type,
       (longlong_t)VAR_17->scn_ddt_bookmark.ddb_checksum,
       (longlong_t)VAR_17->scn_ddt_bookmark.ddb_cursor);
  }
  VAR_9->scn_suspending = VAR_1;
  return (VAR_1);
 }
 return (VAR_0);
}
