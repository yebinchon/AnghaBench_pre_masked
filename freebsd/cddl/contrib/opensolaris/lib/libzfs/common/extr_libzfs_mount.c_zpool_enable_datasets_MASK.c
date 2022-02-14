
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zpool_hdl; int zpool_name; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int zfs_handle_t ;
struct TYPE_9__ {char const* ms_mntopts; int ms_mntflags; int ms_mntstatus; int member_0; } ;
typedef TYPE_2__ mount_state_t ;
struct TYPE_10__ {int cb_used; int * cb_handles; int member_0; } ;
typedef TYPE_3__ get_all_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int ,TYPE_2__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_3__*) ;
 int VAR_4 ;
 int * FUNC_5 (int ,int ,int ) ;
 int VAR_5 ;

int
FUNC_6(zpool_handle_t *VAR_6, const char *VAR_7, int VAR_8)
{
 get_all_cb_t VAR_9 = { 0 };
 mount_state_t VAR_10 = { 0 };
 zfs_handle_t *VAR_11;
 int VAR_12 = 0;

 if ((VAR_11 = FUNC_5(VAR_6->zpool_hdl, VAR_6->zpool_name,
     VAR_2)) == ((void*)0))
  goto out;






 FUNC_1(&VAR_9, VAR_11);
 if (FUNC_4(VAR_11, VAR_3, &VAR_9) != 0)
  goto out;




 VAR_10.ms_mntopts = VAR_7;
 VAR_10.ms_mntflags = VAR_8;
 FUNC_3(VAR_6->zpool_hdl, VAR_9.cb_handles, VAR_9.cb_used,
     VAR_4, &VAR_10, VAR_1);
 if (VAR_10.ms_mntstatus != 0)
  VAR_12 = VAR_10.ms_mntstatus;






 VAR_10.ms_mntstatus = 0;
 FUNC_3(VAR_6->zpool_hdl, VAR_9.cb_handles, VAR_9.cb_used,
     VAR_5, &VAR_10, VAR_0);
 if (VAR_10.ms_mntstatus != 0)
  VAR_12 = VAR_10.ms_mntstatus;

out:
 for (int VAR_13 = 0; VAR_13 < VAR_9.cb_used; VAR_13++)
  FUNC_2(VAR_9.cb_handles[VAR_13]);
 FUNC_0(VAR_9.cb_handles);

 return (VAR_12);
}
