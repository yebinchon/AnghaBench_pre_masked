
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int vdev_labeltype_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;
 int * FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__*,int *) ;
 int * FUNC_8 (TYPE_1__*,unsigned long long) ;

__attribute__((used)) static boolean_t
FUNC_9(vdev_t *VAR_11, uint64_t VAR_12, vdev_labeltype_t VAR_13,
    uint64_t *VAR_14, uint64_t *VAR_15)
{
 spa_t *VAR_16 = VAR_11->vdev_spa;
 uint64_t VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 uint64_t VAR_22 = 0;
 nvlist_t *VAR_23;

 if (VAR_14)
  *VAR_14 = 0ULL;
 if (VAR_15)
  *VAR_15 = 0ULL;




 if ((VAR_23 = FUNC_8(VAR_11, -1ULL)) == ((void*)0))
  return (VAR_0);

 (void) FUNC_1(VAR_23, VAR_6,
     &VAR_22);

 if (FUNC_1(VAR_23, VAR_9,
     &VAR_17) != 0 ||
     FUNC_1(VAR_23, VAR_7,
     &VAR_19) != 0) {
  FUNC_0(VAR_23);
  return (VAR_0);
 }

 if (VAR_17 != VAR_5 && VAR_17 != VAR_4 &&
     (FUNC_1(VAR_23, VAR_8,
     &VAR_18) != 0 ||
     FUNC_1(VAR_23, VAR_10,
     &VAR_20) != 0)) {
  FUNC_0(VAR_23);
  return (VAR_0);
 }

 FUNC_0(VAR_23);






 if (VAR_17 != VAR_5 && VAR_17 != VAR_4 &&
     !FUNC_3(VAR_18, VAR_19) &&
     !FUNC_7(VAR_19, ((void*)0), ((void*)0)) &&
     !FUNC_5(VAR_19, ((void*)0)))
  return (VAR_0);
 if (VAR_17 != VAR_5 && VAR_17 != VAR_4 &&
     VAR_20 == 0 && VAR_22 == VAR_12)
  return (VAR_1);






 if (FUNC_7(VAR_19, &VAR_21, ((void*)0)) ||
     FUNC_4(VAR_16, VAR_19)) {
  if (VAR_14)
   *VAR_14 = VAR_19;

  switch (VAR_13) {
  case 131:
  case 130:
   return (VAR_1);

  case 129:
   return (!FUNC_4(VAR_16, VAR_19) ||
       VAR_21 != 0ULL);

  case 128:
   return (FUNC_4(VAR_16, VAR_19));
  }
 }




 if (FUNC_5(VAR_19, ((void*)0)))
  return (VAR_1);






 if (VAR_17 != VAR_5 && VAR_17 != VAR_4 &&
     (VAR_16 = FUNC_2(VAR_18, VAR_19)) != ((void*)0) &&
     FUNC_6(VAR_16) == VAR_2)
  VAR_17 = VAR_3;





 return (VAR_17 == VAR_3);
}
