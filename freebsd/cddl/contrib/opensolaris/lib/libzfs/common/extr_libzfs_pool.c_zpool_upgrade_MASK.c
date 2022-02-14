
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_6__ {int zc_cookie; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_2__*) ;
 int FUNC_3 (int *,int ,int ,int ) ;

int
FUNC_4(zpool_handle_t *VAR_3, uint64_t VAR_4)
{
 zfs_cmd_t VAR_5 = { 0 };
 libzfs_handle_t *VAR_6 = VAR_3->zpool_hdl;

 (void) FUNC_1(VAR_5.zc_name, VAR_3->zpool_name);
 VAR_5.zc_cookie = VAR_4;

 if (FUNC_2(VAR_6, VAR_1, &VAR_5) != 0)
  return (FUNC_3(VAR_6, VAR_2,
      FUNC_0(VAR_0, "cannot upgrade '%s'"),
      VAR_3->zpool_name));
 return (0);
}
