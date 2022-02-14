
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
struct TYPE_9__ {int spa_scrub_reopen; int spa_root_vdev; int spa_dsl_pool; } ;
typedef TYPE_2__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,TYPE_2__**,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_3)
{
 spa_t *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->zc_name, &VAR_4, VAR_1);
 if (VAR_5 != 0)
  return (VAR_5);

 FUNC_3(VAR_4, VAR_2);







 VAR_4->spa_scrub_reopen = FUNC_0(VAR_4->spa_dsl_pool);
 FUNC_5(VAR_4->spa_root_vdev);
 VAR_4->spa_scrub_reopen = VAR_0;

 (void) FUNC_4(VAR_4, ((void*)0), 0);
 FUNC_1(VAR_4, VAR_1);
 return (0);
}
