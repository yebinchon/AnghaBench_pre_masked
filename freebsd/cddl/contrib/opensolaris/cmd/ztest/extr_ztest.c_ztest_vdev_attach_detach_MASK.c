
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int zs_mirrors; } ;
typedef TYPE_2__ ztest_shared_t ;
typedef int ztest_ds_t ;
struct TYPE_20__ {int vdev_children; size_t vdev_guid; TYPE_1__* vdev_top; int * vdev_ops; int vdev_path; struct TYPE_20__* vdev_parent; struct TYPE_20__** vdev_child; } ;
typedef TYPE_3__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_22__ {int sav_count; TYPE_3__** sav_vdevs; } ;
struct TYPE_21__ {TYPE_3__* spa_root_vdev; TYPE_5__ spa_spares; } ;
typedef TYPE_4__ spa_t ;
typedef TYPE_5__ spa_aux_vdev_t ;
typedef int nvlist_t ;
typedef int newpath ;
struct TYPE_23__ {size_t zo_raidz; int zo_pool; int zo_dir; } ;
struct TYPE_18__ {int vdev_islog; size_t vdev_ashift; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_1 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,char*,char*,size_t,...) ;
 int * FUNC_3 (char*,int *,int *,size_t,size_t,int ,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,int ,int ,size_t) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (TYPE_4__*,size_t,int *,int) ;
 int FUNC_11 (TYPE_4__*,size_t,size_t,int) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 size_t FUNC_14 (TYPE_3__*) ;
 TYPE_3__* FUNC_15 (TYPE_3__*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t FUNC_17 () ;
 TYPE_9__ VAR_20 ;
 int FUNC_18 (int) ;
 size_t FUNC_19 (TYPE_4__*,int) ;
 TYPE_2__* VAR_21 ;
 TYPE_4__* VAR_22 ;
 int VAR_23 ;

void
FUNC_20(ztest_ds_t *VAR_24, uint64_t VAR_25)
{
 ztest_shared_t *VAR_26 = VAR_21;
 spa_t *VAR_27 = VAR_22;
 spa_aux_vdev_t *VAR_28 = &VAR_27->spa_spares;
 vdev_t *VAR_29 = VAR_27->spa_root_vdev;
 vdev_t *VAR_30, *VAR_31, *VAR_32;
 nvlist_t *VAR_33;
 uint64_t VAR_34;
 uint64_t VAR_35, VAR_36;
 uint64_t VAR_37 = FUNC_17();
 uint64_t VAR_38, VAR_39;
 uint64_t VAR_40, VAR_41;
 char VAR_42[VAR_8], VAR_43[VAR_8];
 int VAR_44;
 int VAR_45 = VAR_0;
 int VAR_46 = VAR_0;
 int VAR_47;
 int VAR_48, VAR_49;

 FUNC_4(&VAR_23);
 VAR_34 = FUNC_1(VAR_26->zs_mirrors, 1) * VAR_20.zo_raidz;

 FUNC_8(VAR_27, VAR_10, VAR_7, VAR_9);







 if (VAR_19) {
  FUNC_9(VAR_27, VAR_10, VAR_7);
  FUNC_5(&VAR_23);
  return;
 }




 VAR_44 = FUNC_18(2);




 VAR_36 = FUNC_19(VAR_27, VAR_1);




 VAR_35 = FUNC_18(VAR_34);




 VAR_30 = VAR_29->vdev_child[VAR_36];
 if (VAR_26->zs_mirrors >= 1) {
  FUNC_0(VAR_30->vdev_ops == &VAR_13);
  FUNC_0(VAR_30->vdev_children >= VAR_26->zs_mirrors);
  VAR_30 = VAR_30->vdev_child[VAR_35 / VAR_20.zo_raidz];
 }
 if (VAR_20.zo_raidz > 1) {
  FUNC_0(VAR_30->vdev_ops == &VAR_14);
  FUNC_0(VAR_30->vdev_children == VAR_20.zo_raidz);
  VAR_30 = VAR_30->vdev_child[VAR_35 % VAR_20.zo_raidz];
 }





 while (VAR_30->vdev_children != 0) {
  VAR_45 = VAR_1;
  FUNC_0(VAR_30->vdev_children >= 2);
  VAR_30 = VAR_30->vdev_child[FUNC_18(VAR_30->vdev_children)];
 }

 VAR_38 = VAR_30->vdev_guid;
 VAR_40 = FUNC_14(VAR_30);
 VAR_47 = VAR_30->vdev_top->vdev_islog;
 (void) FUNC_12(VAR_42, VAR_30->vdev_path);
 VAR_32 = VAR_30->vdev_parent;
 VAR_39 = VAR_32->vdev_guid;




 if (VAR_45 && FUNC_18(2) == 0) {
  FUNC_9(VAR_27, VAR_10, VAR_7);
  VAR_48 = FUNC_11(VAR_27, VAR_38, VAR_39, VAR_0);
  if (VAR_48 != 0 && VAR_48 != VAR_4 && VAR_48 != VAR_2 &&
      VAR_48 != VAR_5 && VAR_48 != VAR_11 &&
      VAR_48 != VAR_12)
   FUNC_2(0, "detach (%s) returned %d", VAR_42, VAR_48);
  FUNC_5(&VAR_23);
  return;
 }





 if (VAR_28->sav_count != 0 && FUNC_18(3) == 0) {
  VAR_31 = VAR_28->sav_vdevs[FUNC_18(VAR_28->sav_count)];
  VAR_46 = VAR_1;
  (void) FUNC_12(VAR_43, VAR_31->vdev_path);
 } else {
  (void) FUNC_7(VAR_43, sizeof (VAR_43), VAR_18,
      VAR_20.zo_dir, VAR_20.zo_pool,
      VAR_36 * VAR_34 + VAR_35);
  if (FUNC_18(2) == 0)
   VAR_43[FUNC_13(VAR_43) - 1] = 'b';
  VAR_31 = FUNC_15(VAR_29, VAR_43);
 }

 if (VAR_31) {



  FUNC_16(VAR_31);
  VAR_41 = FUNC_14(VAR_31);
 } else {






  VAR_41 = 10 * VAR_40 / (9 + FUNC_18(3));
 }
 if (VAR_32->vdev_ops != &VAR_13 &&
     VAR_32->vdev_ops != &VAR_16 && (!VAR_44 ||
     VAR_32->vdev_ops == &VAR_15 ||
     VAR_32->vdev_ops == &VAR_17))
  VAR_49 = VAR_5;
 else if (VAR_46 && (!VAR_44 || VAR_47))
  VAR_49 = VAR_5;
 else if (VAR_31 == VAR_30)
  VAR_49 = VAR_44 ? 0 : VAR_2;
 else if (FUNC_15(VAR_29, VAR_43) != ((void*)0))
  VAR_49 = VAR_2;
 else if (VAR_41 < VAR_40)
  VAR_49 = VAR_6;
 else if (VAR_37 > VAR_30->vdev_top->vdev_ashift)
  VAR_49 = VAR_3;
 else
  VAR_49 = 0;

 FUNC_9(VAR_27, VAR_10, VAR_7);




 VAR_33 = FUNC_3(VAR_43, ((void*)0), ((void*)0), VAR_31 == ((void*)0) ? VAR_41 : 0,
     VAR_37, 0, 0, 0, 1);

 VAR_48 = FUNC_10(VAR_27, VAR_38, VAR_33, VAR_44);

 FUNC_6(VAR_33);






 if (VAR_49 == VAR_5 &&
     (VAR_48 == 0 || VAR_48 == VAR_4 || VAR_48 == VAR_6))
  VAR_49 = VAR_48;




 if (VAR_48 == VAR_6 || VAR_48 == VAR_2)
  VAR_49 = VAR_48;

 if (VAR_48 == VAR_11 ||
     VAR_48 == VAR_12)
  VAR_49 = VAR_48;


 if (VAR_48 != VAR_49 && VAR_49 != VAR_2) {
  FUNC_2(0, "attach (%s %llu, %s %llu, %d) "
      "returned %d, expected %d",
      VAR_42, VAR_40, VAR_43,
      VAR_41, VAR_44, VAR_48, VAR_49);
 }

 FUNC_5(&VAR_23);
}
