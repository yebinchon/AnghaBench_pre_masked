
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef scalar_t__ uint64_t ;
typedef int longlong_t ;
struct TYPE_20__ {scalar_t__ ddb_class; size_t ddb_checksum; scalar_t__ ddb_cursor; scalar_t__ ddb_type; } ;
struct TYPE_16__ {scalar_t__ scn_ddt_class_max; TYPE_6__ scn_ddt_bookmark; } ;
struct TYPE_17__ {TYPE_2__ scn_phys; scalar_t__ scn_suspending; TYPE_1__* scn_dp; } ;
typedef TYPE_3__ dsl_scan_t ;
typedef int dmu_tx_t ;
struct TYPE_18__ {int ddt_tree; } ;
typedef TYPE_4__ ddt_t ;
struct TYPE_19__ {int member_0; } ;
typedef TYPE_5__ ddt_entry_t ;
typedef TYPE_6__ ddt_bookmark_t ;
struct TYPE_15__ {TYPE_11__* dp_spa; } ;
struct TYPE_14__ {TYPE_4__** spa_ddt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_11__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,size_t,TYPE_5__*,int *) ;
 int FUNC_6 (char*,int ,int,int) ;

__attribute__((used)) static void
FUNC_7(dsl_scan_t *VAR_1, dmu_tx_t *VAR_2)
{
 ddt_bookmark_t *VAR_3 = &VAR_1->scn_phys.scn_ddt_bookmark;
 ddt_entry_t VAR_4 = { 0 };
 int VAR_5;
 uint64_t VAR_6 = 0;

 while ((VAR_5 = FUNC_2(VAR_1->scn_dp->dp_spa, VAR_3, &VAR_4)) == 0) {
  ddt_t *VAR_7;

  if (VAR_3->ddb_class > VAR_1->scn_phys.scn_ddt_class_max)
   break;
  FUNC_3("visiting ddb=%llu/%llu/%llu/%llx\n",
      (longlong_t)VAR_3->ddb_class,
      (longlong_t)VAR_3->ddb_type,
      (longlong_t)VAR_3->ddb_checksum,
      (longlong_t)VAR_3->ddb_cursor);


  VAR_7 = VAR_1->scn_dp->dp_spa->spa_ddt[VAR_3->ddb_checksum];
  FUNC_0(FUNC_1(&VAR_7->ddt_tree) == ((void*)0));

  FUNC_5(VAR_1, VAR_3->ddb_checksum, &VAR_4, VAR_2);
  VAR_6++;

  if (FUNC_4(VAR_1, ((void*)0)))
   break;
 }

 FUNC_6("scanned %llu ddt entries with class_max = %u; "
     "suspending=%u", (longlong_t)VAR_6,
     (int)VAR_1->scn_phys.scn_ddt_class_max, (int)VAR_1->scn_suspending);

 FUNC_0(VAR_5 == 0 || VAR_5 == VAR_0);
 FUNC_0(VAR_5 != VAR_0 ||
     VAR_3->ddb_class > VAR_1->scn_phys.scn_ddt_class_max);
}
