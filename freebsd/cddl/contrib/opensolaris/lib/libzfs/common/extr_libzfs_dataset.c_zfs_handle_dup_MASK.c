
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zfs_props_table; int * zfs_mntopts; int zfs_hdl; int zfs_mntcheck; int * zfs_recvd_props; int * zfs_user_props; int * zfs_props; int zfs_dmustats; int zfs_head_type; int zfs_type; int zfs_name; int zpool_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int **,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (int ,int *) ;

zfs_handle_t *
FUNC_6(zfs_handle_t *VAR_0)
{
 zfs_handle_t *VAR_1 = FUNC_0(sizeof (zfs_handle_t), 1);

 if (VAR_1 == ((void*)0))
  return (((void*)0));

 VAR_1->zfs_hdl = VAR_0->zfs_hdl;
 VAR_1->zpool_hdl = VAR_0->zpool_hdl;
 (void) FUNC_3(VAR_1->zfs_name, VAR_0->zfs_name,
     sizeof (VAR_1->zfs_name));
 VAR_1->zfs_type = VAR_0->zfs_type;
 VAR_1->zfs_head_type = VAR_0->zfs_head_type;
 VAR_1->zfs_dmustats = VAR_0->zfs_dmustats;
 if (VAR_0->zfs_props != ((void*)0)) {
  if (FUNC_2(VAR_0->zfs_props, &VAR_1->zfs_props, 0) != 0) {
   (void) FUNC_1(VAR_1->zfs_hdl);
   FUNC_4(VAR_1);
   return (((void*)0));
  }
 }
 if (VAR_0->zfs_user_props != ((void*)0)) {
  if (FUNC_2(VAR_0->zfs_user_props,
      &VAR_1->zfs_user_props, 0) != 0) {
   (void) FUNC_1(VAR_1->zfs_hdl);
   FUNC_4(VAR_1);
   return (((void*)0));
  }
 }
 if (VAR_0->zfs_recvd_props != ((void*)0)) {
  if (FUNC_2(VAR_0->zfs_recvd_props,
      &VAR_1->zfs_recvd_props, 0)) {
   (void) FUNC_1(VAR_1->zfs_hdl);
   FUNC_4(VAR_1);
   return (((void*)0));
  }
 }
 VAR_1->zfs_mntcheck = VAR_0->zfs_mntcheck;
 if (VAR_0->zfs_mntopts != ((void*)0)) {
  VAR_1->zfs_mntopts = FUNC_5(VAR_0->zfs_hdl,
      VAR_0->zfs_mntopts);
 }
 VAR_1->zfs_props_table = VAR_0->zfs_props_table;
 return (VAR_1);
}
