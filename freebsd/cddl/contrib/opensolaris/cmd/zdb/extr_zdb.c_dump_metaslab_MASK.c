
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


struct TYPE_17__ {unsigned long long vdev_ms_shift; TYPE_5__* vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
typedef int u_longlong_t ;
struct TYPE_18__ {int sm_shift; TYPE_2__* sm_phys; } ;
typedef TYPE_4__ space_map_t ;
struct TYPE_19__ {int spa_meta_objset; } ;
typedef TYPE_5__ spa_t ;
struct TYPE_20__ {unsigned long long ms_size; TYPE_4__* ms_sm; scalar_t__ ms_fragmentation; int ms_lock; int ms_allocatable; scalar_t__ ms_start; scalar_t__ ms_id; TYPE_1__* ms_group; } ;
typedef TYPE_6__ metaslab_t ;
typedef int freebuf ;
struct TYPE_16__ {int smp_histogram; } ;
struct TYPE_15__ {TYPE_3__* mg_vd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int* VAR_2 ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (scalar_t__,char*,int) ;

__attribute__((used)) static void
FUNC_15(metaslab_t *VAR_3)
{
 vdev_t *VAR_4 = VAR_3->ms_group->mg_vd;
 spa_t *VAR_5 = VAR_4->vdev_spa;
 space_map_t *VAR_6 = VAR_3->ms_sm;
 char VAR_7[32];

 FUNC_14(VAR_3->ms_size - FUNC_12(VAR_6), VAR_7,
     sizeof (VAR_7));

 (void) FUNC_9(
     "\tmetaslab %6llu   offset %12llx   spacemap %6llu   free    %5s\n",
     (u_longlong_t)VAR_3->ms_id, (u_longlong_t)VAR_3->ms_start,
     (u_longlong_t)FUNC_13(VAR_6), VAR_7);

 if (VAR_2['m'] > 2 && !VAR_2['L']) {
  FUNC_7(&VAR_3->ms_lock);
  FUNC_1(FUNC_5(VAR_3));
  FUNC_10(VAR_3->ms_allocatable);
  FUNC_3(VAR_3);
  FUNC_6(VAR_3);
  FUNC_8(&VAR_3->ms_lock);
 }

 if (VAR_2['m'] > 1 && VAR_6 != ((void*)0) &&
     FUNC_11(VAR_5, VAR_1)) {




  (void) FUNC_9("\tOn-disk histogram:\t\tfragmentation %llu\n",
      (u_longlong_t)VAR_3->ms_fragmentation);
  FUNC_2(VAR_6->sm_phys->smp_histogram,
      VAR_0, VAR_6->sm_shift);
 }

 if (VAR_2['d'] > 5 || VAR_2['m'] > 3) {
  FUNC_0(VAR_3->ms_size == (1ULL << VAR_4->vdev_ms_shift));

  FUNC_4(VAR_5->spa_meta_objset, VAR_3->ms_sm);
 }
}
