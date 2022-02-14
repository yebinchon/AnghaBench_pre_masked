
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_name; int zc_sendobj; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int **) ;
 int FUNC_5 (int *,int ) ;
 char* FUNC_6 (int ,char) ;
 int FUNC_7 (int ,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_8(zfs_cmd_t *VAR_3, nvlist_t *VAR_4, cred_t *VAR_5)
{
 dsl_pool_t *VAR_6;
 dsl_dataset_t *VAR_7;
 char *VAR_8;
 int VAR_9;





 VAR_8 = FUNC_6(VAR_3->zc_name, '@');
 if (VAR_8 == ((void*)0))
  return (FUNC_0(VAR_0));
 VAR_9 = FUNC_4(VAR_3->zc_name, VAR_1, &VAR_6);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_9 = FUNC_1(VAR_6, VAR_3->zc_sendobj, VAR_1, &VAR_7);
 if (VAR_9 != 0) {
  FUNC_5(VAR_6, VAR_1);
  return (VAR_9);
 }

 FUNC_2(VAR_7, VAR_3->zc_name);

 VAR_9 = FUNC_7(VAR_3->zc_name, VAR_7,
     VAR_2, VAR_5);
 FUNC_3(VAR_7, VAR_1);
 FUNC_5(VAR_6, VAR_1);

 return (VAR_9);
}
