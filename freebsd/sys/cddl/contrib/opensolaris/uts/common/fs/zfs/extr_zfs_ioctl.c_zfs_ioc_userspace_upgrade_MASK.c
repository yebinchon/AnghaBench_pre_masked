
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int z_vfs; int * z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
struct TYPE_9__ {int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int objset_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int *,int **,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(zfs_cmd_t *VAR_1)
{
 objset_t *VAR_2;
 int VAR_3 = 0;
 zfsvfs_t *VAR_4;

 if (FUNC_7(VAR_1->zc_name, &VAR_4) == 0) {
  if (!FUNC_6(VAR_4->z_os)) {





   dsl_dataset_t *VAR_5, *VAR_6;

   VAR_5 = FUNC_1(VAR_4->z_os);
   VAR_3 = FUNC_10(VAR_4);
   if (VAR_3 == 0) {
    FUNC_3(VAR_5, &VAR_6,
        VAR_4);
    VAR_3 = FUNC_9(VAR_4, VAR_6);
   }
  }
  if (VAR_3 == 0)
   VAR_3 = FUNC_5(VAR_4->z_os);



  FUNC_8(VAR_4->z_vfs);

 } else {

  VAR_3 = FUNC_2(VAR_1->zc_name, VAR_0, &VAR_2);
  if (VAR_3 != 0)
   return (VAR_3);

  VAR_3 = FUNC_5(VAR_2);
  FUNC_4(VAR_2, VAR_0);
 }

 return (VAR_3);
}
