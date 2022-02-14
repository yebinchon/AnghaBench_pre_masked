
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * zfs_user_props; int * zfs_props; int zfs_hdl; int zfs_dmustats; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_8__ {int zc_objset_stats; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int nvlist_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int **) ;

__attribute__((used)) static int
FUNC_3(zfs_handle_t *VAR_0, zfs_cmd_t *VAR_1)
{
 nvlist_t *VAR_2, *VAR_3;

 VAR_0->zfs_dmustats = VAR_1->zc_objset_stats;

 if (FUNC_2(VAR_0->zfs_hdl, VAR_1, &VAR_2) != 0) {
  return (-1);
 }





 if ((VAR_3 = FUNC_1(VAR_0, VAR_2)) == ((void*)0)) {
  FUNC_0(VAR_2);
  return (-1);
 }

 FUNC_0(VAR_0->zfs_props);
 FUNC_0(VAR_0->zfs_user_props);

 VAR_0->zfs_props = VAR_2;
 VAR_0->zfs_user_props = VAR_3;

 return (0);
}
