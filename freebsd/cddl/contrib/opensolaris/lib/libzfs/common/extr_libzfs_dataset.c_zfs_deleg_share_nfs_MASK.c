
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_share_op_t ;
struct TYPE_6__ {int z_sharemax; int z_sharetype; void* z_exportdata; void* z_sharedata; } ;
struct TYPE_7__ {TYPE_1__ zc_share; int zc_string; int zc_value; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef void* uint64_t ;
struct TYPE_8__ {int libzfs_fd; } ;
typedef TYPE_3__ libzfs_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,char*,int) ;

int
FUNC_2(libzfs_handle_t *VAR_1, char *VAR_2, char *VAR_3,
    char *VAR_4, void *VAR_5, void *VAR_6,
    int VAR_7, zfs_share_op_t VAR_8)
{
 zfs_cmd_t VAR_9 = { 0 };
 int VAR_10;

 (void) FUNC_1(VAR_9.zc_name, VAR_2, sizeof (VAR_9.zc_name));
 (void) FUNC_1(VAR_9.zc_value, VAR_3, sizeof (VAR_9.zc_value));
 if (VAR_4)
  (void) FUNC_1(VAR_9.zc_string, VAR_4, sizeof (VAR_9.zc_string));
 VAR_9.zc_share.z_sharedata = (uint64_t)(uintptr_t)VAR_6;
 VAR_9.zc_share.z_exportdata = (uint64_t)(uintptr_t)VAR_5;
 VAR_9.zc_share.z_sharetype = VAR_8;
 VAR_9.zc_share.z_sharemax = VAR_7;
 VAR_10 = FUNC_0(VAR_1->libzfs_fd, VAR_0, &VAR_9);
 return (VAR_10);
}
