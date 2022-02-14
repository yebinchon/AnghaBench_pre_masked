
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef scalar_t__ zpool_prop_t ;
struct TYPE_4__ {int * zpool_props; int * zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

uint64_t
FUNC_6(zpool_handle_t *VAR_6, zpool_prop_t VAR_7, zprop_source_t *VAR_8)
{
 nvlist_t *VAR_9, *VAR_10;
 uint64_t VAR_11;
 zprop_source_t VAR_12;

 if (VAR_6->zpool_props == ((void*)0) && FUNC_3(VAR_6)) {





  if ((VAR_7 == VAR_2) &&
      (FUNC_0(VAR_6->zpool_config,
      VAR_1, &VAR_9) == 0) &&
      (FUNC_1(VAR_9, VAR_0, &VAR_11)
      == 0)) {
   return (VAR_11);
  }
  return (FUNC_4(VAR_7));
 }

 VAR_10 = VAR_6->zpool_props;
 if (FUNC_0(VAR_10, FUNC_5(VAR_7), &VAR_9) == 0) {
  FUNC_2(FUNC_1(VAR_9, VAR_3, &VAR_11) == 0);
  VAR_12 = VAR_11;
  FUNC_2(FUNC_1(VAR_9, VAR_5, &VAR_11) == 0);
 } else {
  VAR_12 = VAR_4;
  VAR_11 = FUNC_4(VAR_7);
 }

 if (VAR_8)
  *VAR_8 = VAR_12;

 return (VAR_11);
}
