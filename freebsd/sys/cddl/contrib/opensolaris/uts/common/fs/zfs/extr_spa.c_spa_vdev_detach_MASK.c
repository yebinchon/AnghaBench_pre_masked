
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;


struct TYPE_39__ {scalar_t__ vdev_guid; int vdev_children; scalar_t__ vdev_id; char* vdev_path; int vdev_isspare; void* vdev_detached; int vdev_dtl_list; struct TYPE_39__* vdev_parent; struct TYPE_39__* vdev_top; void* vdev_unspare; TYPE_3__* vdev_ops; struct TYPE_39__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_40__ {scalar_t__ spa_state; scalar_t__ spa_autoexpand; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef void* boolean_t ;
struct TYPE_41__ {int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*,int *,char*,char*) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,scalar_t__,void*) ;
 int VAR_15 ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 void* FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*,scalar_t__,int) ;
 int FUNC_17 (TYPE_2__*,scalar_t__,void*) ;
 int FUNC_18 (TYPE_2__*) ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (char*,char*) ;
 size_t FUNC_22 (char*) ;
 scalar_t__ FUNC_23 (char*,char*,size_t) ;
 int FUNC_24 (int *,TYPE_1__*,int) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*,int ,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*,scalar_t__) ;
 int FUNC_30 (TYPE_1__*,int ,int ) ;
 TYPE_3__ VAR_16 ;
 int FUNC_31 (TYPE_1__*) ;
 int FUNC_32 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_33 (TYPE_1__*) ;
 int FUNC_34 (TYPE_1__*) ;
 TYPE_3__ VAR_17 ;
 TYPE_3__ VAR_18 ;

int
FUNC_35(spa_t *VAR_19, uint64_t VAR_20, uint64_t VAR_21, int VAR_22)
{
 uint64_t VAR_23;
 int VAR_24;
 vdev_t *VAR_25 = VAR_19->spa_root_vdev;
 vdev_t *VAR_26, *VAR_27, *VAR_28, *VAR_29;
 boolean_t VAR_30 = VAR_0;
 uint64_t VAR_31 = 0;
 char *VAR_32;

 FUNC_0(FUNC_20(VAR_19));

 VAR_23 = FUNC_15(VAR_19);

 VAR_26 = FUNC_9(VAR_19, VAR_20, VAR_0);
 FUNC_0(FUNC_1(&VAR_15));
 if (FUNC_6(VAR_19, VAR_8)) {
  VAR_24 = (FUNC_7(VAR_19)) ?
      VAR_13 : VAR_14;
  return (FUNC_16(VAR_19, ((void*)0), VAR_23, VAR_24));
 }

 if (VAR_26 == ((void*)0))
  return (FUNC_16(VAR_19, ((void*)0), VAR_23, VAR_3));

 if (!VAR_26->vdev_ops->vdev_op_leaf)
  return (FUNC_16(VAR_19, ((void*)0), VAR_23, VAR_4));

 VAR_27 = VAR_26->vdev_parent;
 if (VAR_27->vdev_guid != VAR_21 && VAR_21 != 0)
  return (FUNC_16(VAR_19, ((void*)0), VAR_23, VAR_2));




 if (VAR_22 && VAR_27->vdev_ops != &VAR_17 &&
     VAR_27->vdev_ops != &VAR_18)
  return (FUNC_16(VAR_19, ((void*)0), VAR_23, VAR_4));

 FUNC_0(VAR_27->vdev_ops != &VAR_18 ||
     FUNC_19(VAR_19) >= VAR_9);




 if (VAR_27->vdev_ops != &VAR_17 &&
     VAR_27->vdev_ops != &VAR_16 &&
     VAR_27->vdev_ops != &VAR_18)
  return (FUNC_16(VAR_19, ((void*)0), VAR_23, VAR_4));





 if (FUNC_28(VAR_26))
  return (FUNC_16(VAR_19, ((void*)0), VAR_23, VAR_2));

 FUNC_0(VAR_27->vdev_children >= 2);






 if (VAR_27->vdev_ops == &VAR_17 && VAR_26->vdev_id > 0 &&
     VAR_26->vdev_path != ((void*)0)) {
  size_t VAR_33 = FUNC_22(VAR_26->vdev_path);

  for (int VAR_34 = 0; VAR_34 < VAR_27->vdev_children; VAR_34++) {
   VAR_28 = VAR_27->vdev_child[VAR_34];

   if (VAR_28 == VAR_26 || VAR_28->vdev_path == ((void*)0))
    continue;

   if (FUNC_23(VAR_28->vdev_path, VAR_26->vdev_path, VAR_33) == 0 &&
       FUNC_21(VAR_28->vdev_path + VAR_33, "/old") == 0) {
    FUNC_14(VAR_28->vdev_path);
    VAR_28->vdev_path = FUNC_13(VAR_26->vdev_path);
    break;
   }
  }
 }






 if (VAR_27->vdev_ops == &VAR_18 &&
     VAR_26->vdev_id == 0 &&
     VAR_27->vdev_child[VAR_27->vdev_children - 1]->vdev_isspare)
  VAR_30 = VAR_1;
 VAR_24 = FUNC_30(VAR_26, 0, VAR_12);




 FUNC_32(VAR_27, VAR_26);
 FUNC_25(VAR_27);




 VAR_28 = VAR_27->vdev_child[VAR_27->vdev_children - 1];
 if (VAR_30) {
  FUNC_0(VAR_28->vdev_isspare);
  FUNC_12(VAR_28);
  VAR_31 = VAR_28->vdev_guid;
  (void) FUNC_17(VAR_19, VAR_31, VAR_1);
  VAR_28->vdev_unspare = VAR_1;
 }





 if (VAR_27->vdev_children == 1) {
  if (VAR_27->vdev_ops == &VAR_18)
   VAR_28->vdev_unspare = VAR_0;
  FUNC_33(VAR_28);
 }






 VAR_29 = VAR_28->vdev_top;
 FUNC_0(VAR_29->vdev_parent == VAR_25);




 FUNC_31(VAR_28);
 if (VAR_19->spa_autoexpand) {
  FUNC_34(VAR_29);
  FUNC_29(VAR_29, VAR_23);
 }

 FUNC_26(VAR_29);







 VAR_32 = FUNC_13(VAR_26->vdev_path);
 for (int VAR_35 = 0; VAR_35 < VAR_10; VAR_35++)
  (void) FUNC_24(&VAR_29->vdev_dtl_list, VAR_26, VAR_35);
 VAR_26->vdev_detached = VAR_1;
 FUNC_27(VAR_29, VAR_11, VAR_26, VAR_23);

 FUNC_5(VAR_19, VAR_26, ((void*)0), VAR_5);


 FUNC_11(VAR_19, VAR_6);

 VAR_24 = FUNC_16(VAR_19, VAR_26, VAR_23, 0);

 FUNC_8(VAR_19, "detach", ((void*)0),
     "vdev=%s", VAR_32);
 FUNC_14(VAR_32);






 if (VAR_30) {
  spa_t *VAR_36 = ((void*)0);

  FUNC_2(&VAR_15);
  while ((VAR_36 = FUNC_10(VAR_36)) != ((void*)0)) {
   if (VAR_36->spa_state != VAR_7 ||
       VAR_36 == VAR_19)
    continue;

   FUNC_11(VAR_36, VAR_6);
   FUNC_3(&VAR_15);
   (void) FUNC_17(VAR_36, VAR_31, VAR_1);
   FUNC_2(&VAR_15);
   FUNC_4(VAR_36, VAR_6);
  }
  FUNC_3(&VAR_15);


  FUNC_18(VAR_19);
 }


 FUNC_2(&VAR_15);
 FUNC_4(VAR_19, VAR_6);
 FUNC_3(&VAR_15);

 return (VAR_24);
}
