
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_5__ {int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {scalar_t__ ds_userrefs_obj; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int *,scalar_t__,char const*,int,int,int *) ;

int
FUNC_7(dsl_dataset_t *VAR_5, const char *VAR_6,
    boolean_t VAR_7, dmu_tx_t *VAR_8)
{
 dsl_pool_t *VAR_9 = FUNC_2(VAR_8);
 objset_t *VAR_10 = VAR_9->dp_meta_objset;
 int VAR_11 = 0;

 FUNC_0(FUNC_4(VAR_9));

 if (FUNC_5(VAR_6) > VAR_3)
  return (FUNC_1(VAR_0));

 if (VAR_7 && FUNC_5(VAR_6) + VAR_4 >= VAR_3)
  return (FUNC_1(VAR_0));


 if (VAR_5 != ((void*)0) && FUNC_3(VAR_5)->ds_userrefs_obj != 0) {
  uint64_t VAR_12;

  VAR_11 = FUNC_6(VAR_10, FUNC_3(VAR_5)->ds_userrefs_obj,
      VAR_6, 8, 1, &VAR_12);
  if (VAR_11 == 0)
   VAR_11 = FUNC_1(VAR_1);
  else if (VAR_11 == VAR_2)
   VAR_11 = 0;
 }

 return (VAR_11);
}
