
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int u_longlong_t ;
struct TYPE_6__ {scalar_t__ spa_config_object; int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_7__ {scalar_t__ db_data; } ;
typedef TYPE_2__ dmu_buf_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,scalar_t__,void*,int) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(spa_t *VAR_2)
{
 dmu_buf_t *VAR_3;
 size_t VAR_4 = 0;
 int VAR_5 = 0;


 VAR_5 = FUNC_0(VAR_2->spa_meta_objset,
     VAR_2->spa_config_object, VAR_0, &VAR_3);

 if (VAR_5 == 0) {
  VAR_4 = *(uint64_t *)VAR_3->db_data;
  FUNC_1(VAR_3, VAR_0);

  (void) FUNC_4("\nMOS Configuration:\n");
  FUNC_2(VAR_2->spa_meta_objset,
      VAR_2->spa_config_object, (void *)&VAR_4, 1);
 } else {
  (void) FUNC_3(VAR_1, "dmu_bonus_hold(%d) failed, errno %d",
      (u_longlong_t)VAR_2->spa_config_object, VAR_5);
 }
}
