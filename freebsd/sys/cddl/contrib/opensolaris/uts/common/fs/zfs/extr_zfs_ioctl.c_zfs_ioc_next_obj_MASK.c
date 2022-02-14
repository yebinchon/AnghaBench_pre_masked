
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zc_obj; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
struct TYPE_9__ {int os_dsl_dataset; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_10__ {int ds_prev_snap_txg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_1 (int ,int ,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(zfs_cmd_t *VAR_2)
{
 objset_t *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->zc_name, VAR_1, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);

 VAR_4 = FUNC_0(VAR_3, &VAR_2->zc_obj, VAR_0,
     FUNC_3(VAR_3->os_dsl_dataset)->ds_prev_snap_txg);

 FUNC_2(VAR_3, VAR_1);
 return (VAR_4);
}
