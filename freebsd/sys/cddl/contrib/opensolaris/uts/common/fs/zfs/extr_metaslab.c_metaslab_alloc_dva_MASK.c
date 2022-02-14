
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zio_alloc_list_t ;
struct TYPE_14__ {scalar_t__ vs_write_errors; int vs_alloc; int vs_space; } ;
struct TYPE_13__ {scalar_t__ vdev_state; scalar_t__ vdev_children; scalar_t__ vdev_asize; unsigned long long vdev_ms_shift; unsigned long long vdev_ashift; int vdev_id; TYPE_2__ vdev_stat; TYPE_3__* vdev_mg; } ;
typedef TYPE_1__ vdev_t ;
typedef TYPE_2__ vdev_stat_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_15__ {int mg_activation_count; int mg_initialized; int mg_bias; scalar_t__ mg_aliquot; struct TYPE_15__* mg_next; TYPE_4__* mg_class; TYPE_1__* mg_vd; } ;
typedef TYPE_3__ metaslab_group_t ;
struct TYPE_16__ {scalar_t__ mc_aliquot; int mc_alloc; int mc_space; TYPE_3__* mc_rotor; } ;
typedef TYPE_4__ metaslab_class_t ;
typedef int int64_t ;
typedef int dva_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__,unsigned long long) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_10 (scalar_t__*,scalar_t__) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_13 (TYPE_3__*,int *,scalar_t__,scalar_t__,scalar_t__,int *,int,int) ;
 scalar_t__ FUNC_14 (TYPE_3__*,TYPE_3__*,scalar_t__,int,int) ;
 int FUNC_15 (int *,TYPE_3__*,int *,scalar_t__,int,int ,int) ;
 int FUNC_16 (int *,int ,int ,int ) ;
 int FUNC_17 (int *,int ,int ) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 TYPE_1__* FUNC_19 (int *,int ) ;
 scalar_t__ FUNC_20 (TYPE_1__*,scalar_t__) ;

int
FUNC_21(spa_t *VAR_16, metaslab_class_t *VAR_17, uint64_t VAR_18,
    dva_t *VAR_19, int VAR_20, dva_t *VAR_21, uint64_t VAR_22, int VAR_23,
    zio_alloc_list_t *VAR_24, int VAR_25)
{
 metaslab_group_t *VAR_26, *VAR_27;
 vdev_t *VAR_28;
 boolean_t VAR_29 = VAR_0;

 FUNC_0(!FUNC_2(&VAR_19[VAR_20]));




 if (VAR_18 >= VAR_15 && (FUNC_12() & 3) == 0) {
  FUNC_15(VAR_24, ((void*)0), ((void*)0), VAR_18, VAR_20, VAR_9,
      VAR_25);
  return (FUNC_9(VAR_2));
 }
 if (VAR_21) {
  VAR_28 = FUNC_19(VAR_16, FUNC_1(&VAR_21[VAR_20]));







  if (VAR_28 != ((void*)0) && VAR_28->vdev_mg != ((void*)0)) {
   VAR_26 = VAR_28->vdev_mg;

   if (VAR_23 & VAR_5 &&
       VAR_26->mg_next != ((void*)0))
    VAR_26 = VAR_26->mg_next;
  } else {
   VAR_26 = VAR_17->mc_rotor;
  }
 } else if (VAR_20 != 0) {
  VAR_28 = FUNC_19(VAR_16, FUNC_1(&VAR_19[VAR_20 - 1]));
  VAR_26 = VAR_28->vdev_mg->mg_next;
 } else {
  VAR_26 = VAR_17->mc_rotor;
 }





 if (VAR_26->mg_class != VAR_17 || VAR_26->mg_activation_count <= 0)
  VAR_26 = VAR_17->mc_rotor;

 VAR_27 = VAR_26;
top:
 do {
  boolean_t VAR_30;

  FUNC_0(VAR_26->mg_activation_count == 1);
  VAR_28 = VAR_26->mg_vd;




  if (VAR_29) {
   FUNC_16(VAR_16, VAR_7, VAR_3, VAR_6);
   VAR_30 = FUNC_18(VAR_28);
   FUNC_17(VAR_16, VAR_7, VAR_3);
  } else {
   VAR_30 = FUNC_18(VAR_28);
  }
  if (VAR_30 && !FUNC_7(VAR_23) && !VAR_29) {
   VAR_30 = FUNC_14(VAR_26, VAR_27,
       VAR_18, VAR_25, VAR_20);
  }

  if (!VAR_30) {
   FUNC_15(VAR_24, VAR_26, ((void*)0), VAR_18, VAR_20,
       VAR_10, VAR_25);
   goto next;
  }

  FUNC_0(VAR_26->mg_initialized);






  if ((VAR_28->vdev_stat.vs_write_errors > 0 ||
      VAR_28->vdev_state < VAR_12) &&
      VAR_20 == 0 && !VAR_29 && VAR_28->vdev_children == 0) {
   FUNC_15(VAR_24, VAR_26, ((void*)0), VAR_18, VAR_20,
       VAR_11, VAR_25);
   goto next;
  }

  FUNC_0(VAR_26->mg_class == VAR_17);







  uint64_t VAR_31 = 0;
  if (!VAR_29) {
   VAR_31 = VAR_28->vdev_asize >>
       VAR_13;
   if (VAR_31 <= (1ULL << VAR_28->vdev_ms_shift))
    VAR_31 = 0;
  }

  uint64_t VAR_32 = FUNC_20(VAR_28, VAR_18);
  FUNC_0(FUNC_8(VAR_32, 1ULL << VAR_28->vdev_ashift) == 0);

  uint64_t VAR_33 = FUNC_13(VAR_26, VAR_24, VAR_32, VAR_22,
      VAR_31, VAR_19, VAR_20, VAR_25);

  if (VAR_33 != -1ULL) {






   if (VAR_17->mc_aliquot == 0 && VAR_14) {
    vdev_stat_t *VAR_34 = &VAR_28->vdev_stat;
    int64_t VAR_35, VAR_36;

    VAR_35 = (VAR_34->vs_alloc * 100) / (VAR_34->vs_space + 1);
    VAR_36 = (VAR_17->mc_alloc * 100) / (VAR_17->mc_space + 1);
    VAR_26->mg_bias = ((VAR_36 - VAR_35) *
        (int64_t)VAR_26->mg_aliquot) / 100;
   } else if (!VAR_14) {
    VAR_26->mg_bias = 0;
   }

   if (FUNC_10(&VAR_17->mc_aliquot, VAR_32) >=
       VAR_26->mg_aliquot + VAR_26->mg_bias) {
    VAR_17->mc_rotor = VAR_26->mg_next;
    VAR_17->mc_aliquot = 0;
   }

   FUNC_6(&VAR_19[VAR_20], VAR_28->vdev_id);
   FUNC_5(&VAR_19[VAR_20], VAR_33);
   FUNC_4(&VAR_19[VAR_20], !!(VAR_23 & VAR_4));
   FUNC_3(&VAR_19[VAR_20], VAR_32);

   return (0);
  }
next:
  VAR_17->mc_rotor = VAR_26->mg_next;
  VAR_17->mc_aliquot = 0;
 } while ((VAR_26 = VAR_26->mg_next) != VAR_27);




 if (!VAR_29) {
  VAR_29 = VAR_1;
  goto top;
 }

 FUNC_11(&VAR_19[VAR_20], sizeof (dva_t));

 FUNC_15(VAR_24, VAR_27, ((void*)0), VAR_18, VAR_20, VAR_8, VAR_25);
 return (FUNC_9(VAR_2));
}
