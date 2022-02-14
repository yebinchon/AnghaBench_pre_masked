
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_name; int zc_defer_destroy; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;
typedef scalar_t__ dmu_objset_type_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,char) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(zfs_cmd_t *VAR_3)
{
 objset_t *VAR_4;
 dmu_objset_type_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->zc_name, VAR_2, &VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_5 = FUNC_2(VAR_4);
 FUNC_1(VAR_4, VAR_2);

 if (VAR_5 == VAR_0)
  FUNC_6(VAR_3->zc_name);

 if (FUNC_5(VAR_3->zc_name, '@'))
  VAR_6 = FUNC_4(VAR_3->zc_name, VAR_3->zc_defer_destroy);
 else
  VAR_6 = FUNC_3(VAR_3->zc_name);
 if (VAR_5 == VAR_1 && VAR_6 == 0)



  (void) FUNC_7(VAR_3->zc_name);

 return (VAR_6);
}
