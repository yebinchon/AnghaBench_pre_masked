
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ vdev_ms_count; scalar_t__ vdev_asize; scalar_t__ vdev_ms_shift; int vdev_mg; int vdev_removing; int ** vdev_ms; int vdev_ms_array; int vdev_ishole; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int * spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int objset_t ;
typedef int metaslab_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int **,int **,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__,int,scalar_t__*,int ) ;
 int FUNC_3 (int **,scalar_t__) ;
 int ** FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,scalar_t__,int **) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ,int ) ;
 int FUNC_10 (TYPE_1__*,char*,int) ;

int
FUNC_11(vdev_t *VAR_5, uint64_t VAR_6)
{
 spa_t *VAR_7 = VAR_5->vdev_spa;
 objset_t *VAR_8 = VAR_7->spa_meta_objset;
 uint64_t VAR_9;
 uint64_t VAR_10 = VAR_5->vdev_ms_count;
 uint64_t VAR_11 = VAR_5->vdev_asize >> VAR_5->vdev_ms_shift;
 metaslab_t **VAR_12;
 int VAR_13;

 FUNC_0(VAR_6 == 0 || FUNC_9(VAR_7, VAR_4, VAR_3));




 if (VAR_5->vdev_ms_shift == 0)
  return (0);

 FUNC_0(!VAR_5->vdev_ishole);

 FUNC_0(VAR_10 <= VAR_11);

 VAR_12 = FUNC_4(VAR_11 * sizeof (*VAR_12), VAR_2);

 if (VAR_10 != 0) {
  FUNC_1(VAR_5->vdev_ms, VAR_12, VAR_10 * sizeof (*VAR_12));
  FUNC_3(VAR_5->vdev_ms, VAR_10 * sizeof (*VAR_12));
 }

 VAR_5->vdev_ms = VAR_12;
 VAR_5->vdev_ms_count = VAR_11;
 for (VAR_9 = VAR_10; VAR_9 < VAR_11; VAR_9++) {
  uint64_t VAR_14 = 0;






  if (VAR_6 == 0 && VAR_5->vdev_ms_array != 0) {
   VAR_13 = FUNC_2(VAR_8, VAR_5->vdev_ms_array,
       VAR_9 * sizeof (uint64_t), sizeof (uint64_t), &VAR_14,
       VAR_0);
   if (VAR_13 != 0) {
    FUNC_10(VAR_5, "unable to read the metaslab "
        "array [error=%d]", VAR_13);
    return (VAR_13);
   }
  }

  VAR_13 = FUNC_6(VAR_5->vdev_mg, VAR_9, VAR_14, VAR_6,
      &(VAR_5->vdev_ms[VAR_9]));
  if (VAR_13 != 0) {
   FUNC_10(VAR_5, "metaslab_init failed [error=%d]",
       VAR_13);
   return (VAR_13);
  }
 }

 if (VAR_6 == 0)
  FUNC_7(VAR_7, VAR_4, VAR_1, VAR_3);






 if (VAR_10 == 0 && !VAR_5->vdev_removing)
  FUNC_5(VAR_5->vdev_mg);

 if (VAR_6 == 0)
  FUNC_8(VAR_7, VAR_4, VAR_1);

 return (0);
}
