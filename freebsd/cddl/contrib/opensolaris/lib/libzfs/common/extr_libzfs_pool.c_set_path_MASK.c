
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* zpool_name; TYPE_1__* zpool_hdl; } ;
typedef TYPE_2__ zpool_handle_t ;
struct TYPE_8__ {int zc_guid; int zc_value; int zc_name; int member_0; } ;
typedef TYPE_3__ zfs_cmd_t ;
typedef int nvlist_t ;
struct TYPE_6__ {int libzfs_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(zpool_handle_t *VAR_2, nvlist_t *VAR_3, const char *VAR_4)
{
 zfs_cmd_t VAR_5 = { 0 };

 (void) FUNC_2(VAR_5.zc_name, VAR_2->zpool_name, sizeof (VAR_5.zc_name));
 (void) FUNC_2(VAR_5.zc_value, VAR_4, sizeof (VAR_5.zc_value));
 FUNC_3(FUNC_1(VAR_3, VAR_1,
     &VAR_5.zc_guid) == 0);

 (void) FUNC_0(VAR_2->zpool_hdl->libzfs_fd, VAR_0, &VAR_5);
}
