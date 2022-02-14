
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;


struct TYPE_38__ {int vdev_children; int vdev_isspare; scalar_t__ vdev_asize; scalar_t__ vdev_ashift; char* vdev_path; char* vdev_devid; int vdev_id; struct TYPE_38__* vdev_parent; struct TYPE_38__* vdev_top; int vdev_crtxg; TYPE_2__* vdev_ops; scalar_t__ vdev_resilver_txg; int vdev_guid; scalar_t__ vdev_islog; struct TYPE_38__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_39__ {int vdev_op_leaf; } ;
typedef TYPE_2__ vdev_ops_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_40__ {scalar_t__ spa_bootfs; int spa_dsl_pool; int * spa_vdev_removal; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,scalar_t__) ;
 char* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__**,int *,int *,int ,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,char*,int *,char*,char*,char*,char*,char*) ;
 TYPE_1__* FUNC_10 (TYPE_3__*,scalar_t__,int ) ;
 int VAR_20 ;
 int FUNC_11 (TYPE_1__*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_1__*,scalar_t__,int) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char*) ;
 int FUNC_21 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_22 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_25 (TYPE_1__*,int ,TYPE_1__*,scalar_t__) ;
 int FUNC_26 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_27 (TYPE_1__*) ;
 TYPE_2__ VAR_21 ;
 int FUNC_28 (TYPE_1__*,TYPE_1__*) ;
 TYPE_2__ VAR_22 ;
 TYPE_2__ VAR_23 ;
 TYPE_2__ VAR_24 ;

int
FUNC_29(spa_t *VAR_25, uint64_t VAR_26, nvlist_t *VAR_27, int VAR_28)
{
 uint64_t VAR_29, VAR_30;
 vdev_t *VAR_31 = VAR_25->spa_root_vdev;
 vdev_t *VAR_32, *VAR_33, *VAR_34, *VAR_35, *VAR_36;
 vdev_ops_t *VAR_37;
 char *VAR_38, *VAR_39;
 int VAR_40;
 int VAR_41;

 FUNC_0(FUNC_17(VAR_25));

 VAR_29 = FUNC_14(VAR_25);

 VAR_32 = FUNC_10(VAR_25, VAR_26, VAR_0);

 FUNC_0(FUNC_1(&VAR_20));
 if (FUNC_6(VAR_25, VAR_12)) {
  VAR_41 = (FUNC_7(VAR_25)) ?
      VAR_18 : VAR_19;
  return (FUNC_15(VAR_25, ((void*)0), VAR_29, VAR_41));
 }

 if (VAR_25->spa_vdev_removal != ((void*)0))
  return (FUNC_15(VAR_25, ((void*)0), VAR_29, VAR_2));

 if (VAR_32 == ((void*)0))
  return (FUNC_15(VAR_25, ((void*)0), VAR_29, VAR_5));

 if (!VAR_32->vdev_ops->vdev_op_leaf)
  return (FUNC_15(VAR_25, ((void*)0), VAR_29, VAR_6));

 VAR_35 = VAR_32->vdev_parent;

 if ((VAR_41 = FUNC_4(VAR_25, &VAR_34, VAR_27, ((void*)0), 0,
     VAR_17)) != 0)
  return (FUNC_15(VAR_25, ((void*)0), VAR_29, VAR_4));

 if (VAR_34->vdev_children != 1)
  return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_4));

 VAR_33 = VAR_34->vdev_child[0];

 if (!VAR_33->vdev_ops->vdev_op_leaf)
  return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_4));

 if ((VAR_41 = FUNC_24(VAR_34, VAR_29, VAR_28)) != 0)
  return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_41));




 if (VAR_32->vdev_top->vdev_islog && VAR_33->vdev_isspare)
  return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_6));

 if (!VAR_28) {




  if (VAR_35->vdev_ops != &VAR_21 &&
      VAR_35->vdev_ops != &VAR_23)
   return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_6));

  VAR_37 = &VAR_21;
 } else {




  if (VAR_35->vdev_ops == &VAR_24 &&
      VAR_32->vdev_isspare &&
      !FUNC_8(VAR_25, VAR_33->vdev_guid))
   return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_6));
  if (VAR_35->vdev_ops == &VAR_22 &&
      FUNC_16(VAR_25) < VAR_13) {
   return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_6));
  } else if (VAR_35->vdev_ops == &VAR_24 &&
      VAR_33->vdev_isspare != VAR_32->vdev_isspare) {
   return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_6));
  }

  if (VAR_33->vdev_isspare)
   VAR_37 = &VAR_24;
  else
   VAR_37 = &VAR_22;
 }




 if (VAR_33->vdev_asize < FUNC_27(VAR_32))
  return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_7));





 if (VAR_33->vdev_ashift > VAR_32->vdev_top->vdev_ashift)
  return (FUNC_15(VAR_25, VAR_34, VAR_29, VAR_3));





 if (FUNC_19(VAR_32->vdev_path, VAR_33->vdev_path) == 0) {
  FUNC_13(VAR_32->vdev_path);
  VAR_32->vdev_path = FUNC_3(FUNC_20(VAR_33->vdev_path) + 5,
      VAR_11);
  (void) FUNC_18(VAR_32->vdev_path, "%s/%s",
      VAR_33->vdev_path, "old");
  if (VAR_32->vdev_devid != ((void*)0)) {
   FUNC_13(VAR_32->vdev_devid);
   VAR_32->vdev_devid = ((void*)0);
  }
 }


 VAR_33->vdev_resilver_txg = VAR_29;





 if (VAR_35->vdev_ops != VAR_37)
  VAR_35 = FUNC_22(VAR_32, VAR_37);

 FUNC_0(VAR_35->vdev_top->vdev_parent == VAR_31);
 FUNC_0(VAR_35->vdev_ops == VAR_37);
 FUNC_0(VAR_32->vdev_parent == VAR_35);




 FUNC_28(VAR_34, VAR_33);
 VAR_33->vdev_id = VAR_35->vdev_children;
 VAR_33->vdev_crtxg = VAR_32->vdev_crtxg;
 FUNC_21(VAR_35, VAR_33);

 VAR_36 = VAR_33->vdev_top;
 FUNC_0(VAR_35->vdev_top == VAR_36);
 FUNC_0(VAR_36->vdev_parent == VAR_31);

 FUNC_23(VAR_36);






 VAR_30 = VAR_29 + VAR_14;

 FUNC_26(VAR_33, VAR_1, VAR_15,
     VAR_30 - VAR_15);

 if (VAR_33->vdev_isspare) {
  FUNC_11(VAR_33);
  FUNC_5(VAR_25, VAR_33, ((void*)0), VAR_10);
 }

 VAR_38 = FUNC_12(VAR_32->vdev_path);
 VAR_39 = FUNC_12(VAR_33->vdev_path);
 VAR_40 = VAR_33->vdev_isspare;




 FUNC_25(VAR_36, VAR_16, VAR_33, VAR_29);






 FUNC_2(VAR_25->spa_dsl_pool, VAR_30);

 if (VAR_25->spa_bootfs)
  FUNC_5(VAR_25, VAR_33, ((void*)0), VAR_8);

 FUNC_5(VAR_25, VAR_33, ((void*)0), VAR_9);




 (void) FUNC_15(VAR_25, VAR_34, VAR_30, 0);

 FUNC_9(VAR_25, "vdev attach", ((void*)0),
     "%s vdev=%s %s vdev=%s",
     VAR_28 && VAR_40 ? "spare in" :
     VAR_28 ? "replace" : "attach", VAR_39,
     VAR_28 ? "for" : "to", VAR_38);

 FUNC_13(VAR_38);
 FUNC_13(VAR_39);

 return (0);
}
