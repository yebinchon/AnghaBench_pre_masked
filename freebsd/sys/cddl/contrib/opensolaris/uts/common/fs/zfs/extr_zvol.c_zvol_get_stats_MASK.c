
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_3__ {int doi_data_block_size; } ;
typedef TYPE_1__ dmu_object_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,char*,int,int,int *) ;

int
FUNC_3(objset_t *VAR_4, nvlist_t *VAR_5)
{
 int VAR_6;
 dmu_object_info_t VAR_7;
 uint64_t VAR_8;

 VAR_6 = FUNC_2(VAR_4, VAR_3, "size", 8, 1, &VAR_8);
 if (VAR_6)
  return (VAR_6);

 FUNC_1(VAR_5, VAR_1, VAR_8);

 VAR_6 = FUNC_0(VAR_4, VAR_2, &VAR_7);

 if (VAR_6 == 0) {
  FUNC_1(VAR_5, VAR_0,
      VAR_7.doi_data_block_size);
 }

 return (VAR_6);
}
