
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_8__ {int * vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_9__ {int vp_nvlist; } ;
typedef TYPE_2__ vdev_phys_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int spa_t ;
typedef int nvlist_t ;
typedef int abd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,int,int **,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *,scalar_t__,int ) ;
 int FUNC_10 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_11 (int *,TYPE_1__*,int,int *,int ,int,int *,int *,int) ;
 int VAR_9 ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_10 ;
 int * FUNC_13 (int *,int *,int *,int) ;
 scalar_t__ FUNC_14 (int *) ;

nvlist_t *
FUNC_15(vdev_t *VAR_11, uint64_t VAR_12)
{
 spa_t *VAR_13 = VAR_11->vdev_spa;
 nvlist_t *VAR_14 = ((void*)0);
 vdev_phys_t *VAR_15;
 abd_t *VAR_16;
 zio_t *VAR_17;
 uint64_t VAR_18 = 0;
 uint64_t VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = VAR_5 | VAR_4 |
     VAR_6;

 FUNC_0(FUNC_9(VAR_13, VAR_2, VAR_1) == VAR_2);

 if (!FUNC_12(VAR_11))
  return (((void*)0));

 VAR_16 = FUNC_1(sizeof (vdev_phys_t), VAR_0);
 VAR_15 = FUNC_3(VAR_16);

retry:
 for (int VAR_22 = 0; VAR_22 < VAR_3; VAR_22++) {
  nvlist_t *VAR_23 = ((void*)0);

  VAR_17 = FUNC_13(VAR_13, ((void*)0), ((void*)0), VAR_21);

  FUNC_11(VAR_17, VAR_11, VAR_22, VAR_16,
      FUNC_8(VAR_9, VAR_10),
      sizeof (vdev_phys_t), ((void*)0), ((void*)0), VAR_21);

  if (FUNC_14(VAR_17) == 0 &&
      FUNC_7(VAR_15->vp_nvlist, sizeof (VAR_15->vp_nvlist),
      &VAR_23, 0) == 0) {







   VAR_20 = FUNC_6(VAR_23,
       VAR_8, &VAR_19);
   if ((VAR_20 || VAR_19 == 0) && !VAR_14) {
    VAR_14 = VAR_23;
    break;
   } else if (VAR_19 <= VAR_12 && VAR_19 > VAR_18) {
    VAR_18 = VAR_19;
    FUNC_5(VAR_14);
    VAR_14 = FUNC_4(VAR_23);
   }
  }

  if (VAR_23 != ((void*)0)) {
   FUNC_5(VAR_23);
   VAR_23 = ((void*)0);
  }
 }

 if (VAR_14 == ((void*)0) && !(VAR_21 & VAR_7)) {
  VAR_21 |= VAR_7;
  goto retry;
 }




 if (VAR_14 == ((void*)0) && VAR_19 != 0) {
  FUNC_10(VAR_11, "label discarded as txg is too large "
      "(%llu > %llu)", (u_longlong_t)VAR_19,
      (u_longlong_t)VAR_12);
 }

 FUNC_2(VAR_16);

 return (VAR_14);
}
