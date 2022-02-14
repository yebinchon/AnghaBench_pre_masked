
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int vdev_guid; struct TYPE_10__* vdev_top; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int vdev_labeltype_t ;
typedef scalar_t__ uint_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_11__ {scalar_t__ sav_npending; int ** sav_pending; } ;
typedef TYPE_3__ spa_aux_vdev_t ;
typedef int nvlist_t ;
struct TYPE_9__ {char const* vdev_op_type; int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,char const*,int ***,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *,TYPE_2__**,int *,int *,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_12(spa_t *VAR_10, nvlist_t *VAR_11, uint64_t VAR_12, int VAR_13,
    spa_aux_vdev_t *VAR_14, const char *VAR_15, uint64_t VAR_16,
    vdev_labeltype_t VAR_17)
{
 nvlist_t **VAR_18;
 uint_t VAR_19, VAR_20;
 vdev_t *VAR_21;
 int VAR_22;

 FUNC_0(FUNC_5(VAR_10, VAR_4, VAR_3) == VAR_4);




 if (FUNC_4(VAR_11, VAR_15, &VAR_18, &VAR_20) != 0)
  return (0);

 if (VAR_20 == 0)
  return (FUNC_1(VAR_0));





 if (FUNC_7(VAR_10) < VAR_16)
  return (FUNC_1(VAR_2));





 VAR_14->sav_pending = VAR_18;
 VAR_14->sav_npending = VAR_20;

 for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
  if ((VAR_22 = FUNC_6(VAR_10, &VAR_21, VAR_18[VAR_19], ((void*)0), 0,
      VAR_13)) != 0)
   goto out;

  if (!VAR_21->vdev_ops->vdev_op_leaf) {
   FUNC_9(VAR_21);
   VAR_22 = FUNC_1(VAR_0);
   goto out;
  }
  VAR_21->vdev_top = VAR_21;

  if ((VAR_22 = FUNC_11(VAR_21)) == 0 &&
      (VAR_22 = FUNC_10(VAR_21, VAR_12, VAR_17)) == 0) {
   FUNC_2(FUNC_3(VAR_18[VAR_19], VAR_8,
       VAR_21->vdev_guid) == 0);
  }

  FUNC_9(VAR_21);

  if (VAR_22 &&
      (VAR_13 != VAR_6 && VAR_13 != VAR_5))
   goto out;
  else
   VAR_22 = 0;
 }

out:
 VAR_14->sav_pending = ((void*)0);
 VAR_14->sav_npending = 0;
 return (VAR_22);
}
