
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
typedef int msg ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_2__*) ;
 int FUNC_4 (int *,int ,char*) ;

int
FUNC_5(zpool_handle_t *VAR_3)
{
 zfs_cmd_t VAR_4 = { 0 };
 char VAR_5[1024];
 libzfs_handle_t *VAR_6 = VAR_3->zpool_hdl;

 (void) FUNC_1(VAR_5, sizeof (VAR_5),
     FUNC_0(VAR_0, "cannot cancel removal"));

 (void) FUNC_2(VAR_4.zc_name, VAR_3->zpool_name, sizeof (VAR_4.zc_name));
 VAR_4.zc_cookie = 1;

 if (FUNC_3(VAR_6, VAR_1, &VAR_4) == 0)
  return (0);

 return (FUNC_4(VAR_6, VAR_2, VAR_5));
}
