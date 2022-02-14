
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_perm_action; int zc_objset_type; int zc_cookie; int zc_value; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_1)
{
 int VAR_2;
 dsl_pool_t *VAR_3;
 dsl_dataset_t *VAR_4, *VAR_5;

 VAR_2 = FUNC_3(VAR_1->zc_name, VAR_0, &VAR_3);
 if (VAR_2 != 0)
  return (VAR_2);
 VAR_2 = FUNC_0(VAR_3, VAR_1->zc_name, VAR_0, &VAR_4);
 if (VAR_2 != 0) {
  FUNC_4(VAR_3, VAR_0);
  return (VAR_2);
 }
 VAR_2 = FUNC_0(VAR_3, VAR_1->zc_value, VAR_0, &VAR_5);
 if (VAR_2 != 0) {
  FUNC_1(VAR_4, VAR_0);
  FUNC_4(VAR_3, VAR_0);
  return (VAR_2);
 }

 VAR_2 = FUNC_2(VAR_5, VAR_4, &VAR_1->zc_cookie,
     &VAR_1->zc_objset_type, &VAR_1->zc_perm_action);
 FUNC_1(VAR_5, VAR_0);
 FUNC_1(VAR_4, VAR_0);
 FUNC_4(VAR_3, VAR_0);
 return (VAR_2);
}
