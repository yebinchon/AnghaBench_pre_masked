
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * zv_objset; } ;
typedef TYPE_1__ zvol_state_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_7__ {int doi_data_block_size; } ;
typedef TYPE_2__ dmu_object_info_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*,int ,scalar_t__,int ,int **) ;
 int FUNC_4 (char const*,int ,scalar_t__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__,int ) ;
 TYPE_1__* FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;
 int FUNC_11 (int *,scalar_t__) ;

int
FUNC_12(const char *VAR_8, uint64_t VAR_9)
{
 zvol_state_t *VAR_10 = ((void*)0);
 objset_t *VAR_11;
 int VAR_12;
 dmu_object_info_t VAR_13;
 uint64_t VAR_14;
 boolean_t VAR_15 = VAR_0;

 VAR_12 = FUNC_4(VAR_8,
     FUNC_7(VAR_5), &VAR_14, ((void*)0));
 if (VAR_12 != 0)
  return (VAR_12);
 if (VAR_14)
  return (FUNC_0(VAR_3));

 FUNC_5(&VAR_7);
 VAR_10 = FUNC_9(VAR_8);

 if (VAR_10 == ((void*)0) || VAR_10->zv_objset == ((void*)0)) {
  if ((VAR_12 = FUNC_3(VAR_8, VAR_2, VAR_0,
      VAR_4, &VAR_11)) != 0) {
   FUNC_6(&VAR_7);
   return (VAR_12);
  }
  VAR_15 = VAR_1;
  if (VAR_10 != ((void*)0))
   VAR_10->zv_objset = VAR_11;
 } else {
  VAR_11 = VAR_10->zv_objset;
 }

 if ((VAR_12 = FUNC_1(VAR_11, VAR_6, &VAR_13)) != 0 ||
     (VAR_12 = FUNC_8(VAR_9, VAR_13.doi_data_block_size)) != 0)
  goto out;

 VAR_12 = FUNC_11(VAR_11, VAR_9);

 if (VAR_12 == 0 && VAR_10 != ((void*)0))
  VAR_12 = FUNC_10(VAR_10, VAR_9);
out:
 if (VAR_15) {
  FUNC_2(VAR_11, VAR_4);
  if (VAR_10 != ((void*)0))
   VAR_10->zv_objset = ((void*)0);
 }
 FUNC_6(&VAR_7);
 return (VAR_12);
}
