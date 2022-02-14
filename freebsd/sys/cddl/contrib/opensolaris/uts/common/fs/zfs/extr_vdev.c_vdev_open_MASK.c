
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_19__ {scalar_t__ vs_aux; } ;
struct TYPE_20__ {scalar_t__ vdev_open_thread; scalar_t__ vdev_state; scalar_t__ vdev_min_asize; scalar_t__ vdev_children; scalar_t__ vdev_label_aux; scalar_t__ vdev_physical_ashift; scalar_t__ vdev_logical_ashift; scalar_t__ vdev_ashift; scalar_t__ vdev_asize; TYPE_11__* vdev_ops; int * vdev_aux; int vdev_islog; struct TYPE_20__* vdev_top; scalar_t__ vdev_expanding; scalar_t__ vdev_max_asize; scalar_t__ vdev_psize; int * vdev_parent; TYPE_1__** vdev_child; void* vdev_notrim; scalar_t__ vdev_ishole; scalar_t__ vdev_degraded; scalar_t__ vdev_faulted; void* vdev_removed; TYPE_2__ vdev_stat; void* vdev_reopening; scalar_t__ vdev_offline; void* vdev_cant_write; void* vdev_cant_read; TYPE_4__* vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
typedef int vdev_label_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_21__ {scalar_t__ spa_max_ashift; scalar_t__ spa_min_ashift; int spa_scrub_reopen; scalar_t__ spa_autoexpand; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_18__ {scalar_t__ vdev_state; } ;
struct TYPE_17__ {int (* vdev_op_open ) (TYPE_3__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_6 (TYPE_3__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 TYPE_11__ VAR_27 ;
 int FUNC_9 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_28 ;
 int FUNC_13 (TYPE_3__*,int *,int) ;
 scalar_t__ VAR_29 ;
 int FUNC_14 (int ) ;

int
FUNC_15(vdev_t *VAR_30)
{
 spa_t *VAR_31 = VAR_30->vdev_spa;
 int VAR_32;
 uint64_t VAR_33 = 0;
 uint64_t VAR_34 = 0;
 uint64_t VAR_35, VAR_36, VAR_37;
 uint64_t VAR_38 = 0;
 uint64_t VAR_39 = 0;

 FUNC_0(VAR_30->vdev_open_thread == VAR_26 ||
     FUNC_5(VAR_31, VAR_6, VAR_5) == VAR_6);
 FUNC_0(VAR_30->vdev_state == VAR_21 ||
     VAR_30->vdev_state == VAR_20 ||
     VAR_30->vdev_state == VAR_25);

 VAR_30->vdev_stat.vs_aux = VAR_15;
 VAR_30->vdev_cant_read = VAR_0;
 VAR_30->vdev_cant_write = VAR_0;
 VAR_30->vdev_notrim = VAR_0;
 VAR_30->vdev_min_asize = FUNC_8(VAR_30);





 if (!VAR_30->vdev_removed && VAR_30->vdev_faulted) {
  FUNC_0(VAR_30->vdev_children == 0);
  FUNC_0(VAR_30->vdev_label_aux == VAR_13 ||
      VAR_30->vdev_label_aux == VAR_14);
  FUNC_12(VAR_30, VAR_1, VAR_23,
      VAR_30->vdev_label_aux);
  return (FUNC_3(VAR_3));
 } else if (VAR_30->vdev_offline) {
  FUNC_0(VAR_30->vdev_children == 0);
  FUNC_12(VAR_30, VAR_1, VAR_25, VAR_15);
  return (FUNC_3(VAR_3));
 }

 VAR_32 = VAR_30->vdev_ops->vdev_op_open(VAR_30, &VAR_33, &VAR_34,
     &VAR_38, &VAR_39);





 VAR_30->vdev_reopening = VAR_0;
 if (VAR_29 && VAR_32 == 0)
  VAR_32 = FUNC_13(VAR_30, ((void*)0), VAR_3);

 if (VAR_32) {
  if (VAR_30->vdev_removed &&
      VAR_30->vdev_stat.vs_aux != VAR_16)
   VAR_30->vdev_removed = VAR_0;

  if (VAR_30->vdev_stat.vs_aux == VAR_12) {
   FUNC_12(VAR_30, VAR_1, VAR_25,
       VAR_30->vdev_stat.vs_aux);
  } else {
   FUNC_12(VAR_30, VAR_1, VAR_20,
       VAR_30->vdev_stat.vs_aux);
  }
  return (VAR_32);
 }

 VAR_30->vdev_removed = VAR_0;





 if (VAR_30->vdev_faulted) {
  FUNC_0(VAR_30->vdev_children == 0);
  FUNC_0(VAR_30->vdev_label_aux == VAR_13 ||
      VAR_30->vdev_label_aux == VAR_14);
  FUNC_12(VAR_30, VAR_1, VAR_23,
      VAR_30->vdev_label_aux);
  return (FUNC_3(VAR_3));
 }

 if (VAR_30->vdev_degraded) {
  FUNC_0(VAR_30->vdev_children == 0);
  FUNC_12(VAR_30, VAR_1, VAR_22,
      VAR_13);
 } else {
  FUNC_12(VAR_30, VAR_1, VAR_24, 0);
 }




 if (VAR_30->vdev_ishole || VAR_30->vdev_ops == &VAR_27)
  return (0);

 if (VAR_28 && !VAR_30->vdev_notrim && VAR_30->vdev_ops->vdev_op_leaf)
  FUNC_7(VAR_30);

 for (int VAR_40 = 0; VAR_40 < VAR_30->vdev_children; VAR_40++) {
  if (VAR_30->vdev_child[VAR_40]->vdev_state != VAR_24) {
   FUNC_12(VAR_30, VAR_1, VAR_22,
       VAR_15);
   break;
  }
 }

 VAR_33 = FUNC_2(VAR_33, (uint64_t)sizeof (vdev_label_t));
 VAR_34 = FUNC_2(VAR_34, (uint64_t)sizeof (vdev_label_t));

 if (VAR_30->vdev_children == 0) {
  if (VAR_33 < VAR_9) {
   FUNC_12(VAR_30, VAR_1, VAR_20,
       VAR_17);
   return (FUNC_3(VAR_4));
  }
  VAR_37 = VAR_33;
  VAR_35 = VAR_33 - (VAR_19 + VAR_18);
  VAR_36 = VAR_34 - (VAR_19 +
      VAR_18);
 } else {
  if (VAR_30->vdev_parent != ((void*)0) && VAR_33 < VAR_9 -
      (VAR_19 + VAR_18)) {
   FUNC_12(VAR_30, VAR_1, VAR_20,
       VAR_17);
   return (FUNC_3(VAR_4));
  }
  VAR_37 = 0;
  VAR_35 = VAR_33;
  VAR_36 = VAR_34;
 }

 VAR_30->vdev_psize = VAR_37;




 if (VAR_35 < VAR_30->vdev_min_asize) {
  FUNC_12(VAR_30, VAR_1, VAR_20,
      VAR_11);
  return (FUNC_3(VAR_2));
 }

 VAR_30->vdev_physical_ashift =
     FUNC_1(VAR_39, VAR_30->vdev_physical_ashift);
 VAR_30->vdev_logical_ashift = FUNC_1(VAR_38, VAR_30->vdev_logical_ashift);
 VAR_30->vdev_ashift = FUNC_1(VAR_30->vdev_logical_ashift, VAR_30->vdev_ashift);

 if (VAR_30->vdev_logical_ashift > VAR_8) {
  FUNC_12(VAR_30, VAR_1, VAR_20,
      VAR_10);
  return (VAR_2);
 }

 if (VAR_30->vdev_asize == 0) {




  VAR_30->vdev_asize = VAR_35;
  VAR_30->vdev_max_asize = VAR_36;
 } else {



  if (VAR_30->vdev_ashift > VAR_30->vdev_top->vdev_ashift &&
      VAR_30->vdev_ops->vdev_op_leaf) {
   FUNC_12(VAR_30, VAR_1, VAR_20,
       VAR_11);
   return (VAR_2);
  }
  VAR_30->vdev_max_asize = VAR_36;
 }
 if (VAR_30->vdev_state == VAR_24 &&
     ((VAR_35 > VAR_30->vdev_asize &&
     (VAR_30->vdev_expanding || VAR_31->spa_autoexpand)) ||
     (VAR_35 < VAR_30->vdev_asize)))
  VAR_30->vdev_asize = VAR_35;

 FUNC_11(VAR_30);





 if (VAR_30->vdev_ops->vdev_op_leaf &&
     (VAR_32 = FUNC_14(FUNC_9(VAR_30, ((void*)0)))) != 0) {
  FUNC_12(VAR_30, VAR_1, VAR_23,
      VAR_13);
  return (VAR_32);
 }




 if (VAR_30->vdev_top == VAR_30 && VAR_30->vdev_ashift != 0 &&
     !VAR_30->vdev_islog && VAR_30->vdev_aux == ((void*)0)) {
  if (VAR_30->vdev_ashift > VAR_31->spa_max_ashift)
   VAR_31->spa_max_ashift = VAR_30->vdev_ashift;
  if (VAR_30->vdev_ashift < VAR_31->spa_min_ashift)
   VAR_31->spa_min_ashift = VAR_30->vdev_ashift;
 }






 if (VAR_30->vdev_ops->vdev_op_leaf && !VAR_31->spa_scrub_reopen &&
     FUNC_10(VAR_30, ((void*)0), ((void*)0)))
  FUNC_4(VAR_31, VAR_7);

 return (0);
}
