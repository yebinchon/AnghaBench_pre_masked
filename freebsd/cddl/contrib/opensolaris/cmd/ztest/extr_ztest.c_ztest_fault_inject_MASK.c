
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_20__ {int zs_mirrors; int zs_splits; } ;
typedef TYPE_2__ ztest_shared_t ;
typedef int ztest_ds_t ;
struct TYPE_21__ {scalar_t__ vdev_resilver_txg; int vdev_guid; int vdev_path; void* vdev_cant_write; void* vdev_cant_read; scalar_t__ vdev_id; TYPE_4__* vdev_tsd; TYPE_11__* vdev_top; } ;
typedef TYPE_3__ vdev_t ;
typedef int vdev_label_t ;
struct TYPE_22__ {TYPE_1__* vf_vnode; } ;
typedef TYPE_4__ vdev_file_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_24__ {unsigned long long sav_count; TYPE_3__** sav_vdevs; } ;
struct TYPE_23__ {TYPE_6__ spa_l2cache; int spa_root_vdev; } ;
typedef TYPE_5__ spa_t ;
typedef TYPE_6__ spa_aux_vdev_t ;
typedef int pathrand ;
typedef int path0 ;
typedef void* boolean_t ;
typedef int bad ;
struct TYPE_19__ {int v_fd; } ;
struct TYPE_18__ {scalar_t__ vdev_islog; } ;
struct TYPE_17__ {int zo_raidz; int zo_verbose; int zo_pool; int zo_dir; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (size_t,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int,char*) ;
 size_t FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (int,int*,int,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,int ,int ,int) ;
 int FUNC_16 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_17 (TYPE_5__*,int ,int ) ;
 int FUNC_18 (char*,int ) ;
 TYPE_3__* FUNC_19 (int ,char*) ;
 scalar_t__ FUNC_20 (TYPE_5__*,int,int) ;
 int FUNC_21 (TYPE_5__*,int,int ,int *) ;
 int FUNC_22 (TYPE_11__*,int *,int *) ;
 int FUNC_23 (char*,long long,int) ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 TYPE_10__ VAR_18 ;
 unsigned long long FUNC_24 (unsigned long long) ;
 int FUNC_25 (TYPE_5__*,void*) ;
 TYPE_2__* VAR_19 ;
 TYPE_5__* VAR_20 ;
 int VAR_21 ;

void
FUNC_26(ztest_ds_t *VAR_22, uint64_t VAR_23)
{
 ztest_shared_t *VAR_24 = VAR_19;
 spa_t *VAR_25 = VAR_20;
 int VAR_26;
 uint64_t VAR_27;
 uint64_t VAR_28;
 uint64_t VAR_29 = 0x1990c0ffeedecadeULL;
 uint64_t VAR_30, VAR_31;
 char VAR_32[VAR_5];
 char VAR_33[VAR_5];
 size_t VAR_34;
 int VAR_35 = VAR_11 + 2;
 int VAR_36 = 1000;
 int VAR_37;
 int VAR_38;
 vdev_t *VAR_39 = ((void*)0);
 uint64_t VAR_40 = 0;
 boolean_t VAR_41 = VAR_0;

 FUNC_8(&VAR_21);







 if (VAR_16) {
  FUNC_9(&VAR_21);
  return;
 }

 VAR_37 = FUNC_2();
 VAR_28 = FUNC_1(VAR_24->zs_mirrors, 1) * VAR_18.zo_raidz;
 VAR_38 = VAR_24->zs_mirrors;
 FUNC_9(&VAR_21);

 FUNC_0(VAR_28 >= 1);







 FUNC_13(&VAR_17, VAR_7);




 FUNC_16(VAR_25, VAR_9, VAR_3, VAR_7);

 if (FUNC_24(2) == 0) {



  VAR_30 = FUNC_25(VAR_25, VAR_1);
  VAR_31 = FUNC_24(VAR_28) + VAR_24->zs_splits;







  (void) FUNC_15(VAR_32, sizeof (VAR_32), VAR_15,
      VAR_18.zo_dir, VAR_18.zo_pool,
      VAR_30 * VAR_28 + VAR_24->zs_splits);
  (void) FUNC_15(VAR_33, sizeof (VAR_33), VAR_15,
      VAR_18.zo_dir, VAR_18.zo_pool,
      VAR_30 * VAR_28 + VAR_31);

  VAR_39 = FUNC_19(VAR_25->spa_root_vdev, VAR_32);
  if (VAR_39 != ((void*)0) && VAR_39->vdev_top->vdev_islog)
   VAR_41 = VAR_1;






  if (VAR_39 != ((void*)0) && VAR_37 != 1 &&
      (!FUNC_22(VAR_39->vdev_top, ((void*)0), ((void*)0)) ||
      VAR_39->vdev_resilver_txg != 0)) {
   vdev_file_t *VAR_42 = VAR_39->vdev_tsd;

   FUNC_23("injecting fault to vdev %llu; maxfaults=%d",
       (long long)VAR_39->vdev_id, (int)VAR_37);

   if (VAR_42 != ((void*)0) && FUNC_24(3) == 0) {
    (void) FUNC_5(VAR_42->vf_vnode->v_fd);
    VAR_42->vf_vnode->v_fd = -1;
   } else if (FUNC_24(2) == 0) {
    VAR_39->vdev_cant_read = VAR_1;
   } else {
    VAR_39->vdev_cant_write = VAR_1;
   }
   VAR_40 = VAR_39->vdev_guid;
  }
 } else {



  spa_aux_vdev_t *VAR_43 = &VAR_25->spa_l2cache;

  if (VAR_43->sav_count == 0) {
   FUNC_17(VAR_25, VAR_9, VAR_3);
   FUNC_14(&VAR_17);
   return;
  }
  VAR_39 = VAR_43->sav_vdevs[FUNC_24(VAR_43->sav_count)];
  VAR_40 = VAR_39->vdev_guid;
  (void) FUNC_18(VAR_32, VAR_39->vdev_path);
  (void) FUNC_18(VAR_33, VAR_39->vdev_path);

  VAR_31 = 0;
  VAR_28 = 1;
  VAR_37 = VAR_4;
 }

 FUNC_17(VAR_25, VAR_9, VAR_3);
 FUNC_14(&VAR_17);





 if ((VAR_37 >= 2 || VAR_41) && VAR_40 != 0) {
  if (FUNC_24(10) < 6) {
   int VAR_44 = (FUNC_24(2) == 0 ?
       VAR_14 : 0);
   if (VAR_41)
    FUNC_13(&VAR_17, VAR_8);

   FUNC_4(FUNC_20(VAR_25, VAR_40, VAR_44) != VAR_2);

   if (VAR_41)
    FUNC_14(&VAR_17);
  } else {
   FUNC_8(&VAR_21);
   (void) FUNC_21(VAR_25, VAR_40, 0, ((void*)0));
   FUNC_9(&VAR_21);
  }
 }

 if (VAR_37 == 0)
  return;




 VAR_26 = FUNC_10(VAR_33, VAR_6);

 if (VAR_26 == -1)
  return;

 VAR_34 = FUNC_7(VAR_26, 0, VAR_10);

 while (--VAR_36 != 0) {
  VAR_27 = FUNC_24(VAR_34 / (VAR_28 << VAR_35)) *
      (VAR_28 << VAR_35) + (VAR_31 << VAR_35) +
      (FUNC_24(1ULL << (VAR_35 - 1)) & -8ULL);
  if ((VAR_31 & 1) == 0 && VAR_27 < VAR_13)
   continue;






  uint64_t VAR_45 = FUNC_3(VAR_34, sizeof (vdev_label_t));
  if ((VAR_31 & 1) == 1 &&
      VAR_27 + sizeof (VAR_29) > VAR_45 - VAR_12)
   continue;

  FUNC_8(&VAR_21);
  if (VAR_38 != VAR_24->zs_mirrors) {
   FUNC_9(&VAR_21);
   (void) FUNC_5(VAR_26);
   return;
  }

  if (FUNC_12(VAR_26, &VAR_29, sizeof (VAR_29), VAR_27) != sizeof (VAR_29))
   FUNC_6(1, "can't inject bad word at 0x%llx in %s",
       VAR_27, VAR_33);

  FUNC_9(&VAR_21);

  if (VAR_18.zo_verbose >= 7)
   (void) FUNC_11("injected bad word into %s,"
       " offset 0x%llx\n", VAR_33, (u_longlong_t)VAR_27);
 }

 (void) FUNC_5(VAR_26);
}
