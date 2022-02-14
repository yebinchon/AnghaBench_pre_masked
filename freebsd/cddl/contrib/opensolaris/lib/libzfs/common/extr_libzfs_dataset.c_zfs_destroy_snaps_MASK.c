
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zfs_hdl; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct destroydata {char* snapname; int nvl; int member_0; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct destroydata*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ,int ,char*) ;

int
FUNC_9(zfs_handle_t *VAR_3, char *VAR_4, boolean_t VAR_5)
{
 int VAR_6;
 struct destroydata VAR_7 = { 0 };

 VAR_7.snapname = VAR_4;
 FUNC_4(FUNC_1(&VAR_7.nvl, VAR_1, 0) == 0);
 (void) FUNC_5(FUNC_7(VAR_3), &VAR_7);

 if (FUNC_2(VAR_7.nvl)) {
  VAR_6 = FUNC_8(VAR_3->zfs_hdl, VAR_0,
      FUNC_0(VAR_2, "cannot destroy '%s@%s'"),
      VAR_3->zfs_name, VAR_4);
 } else {
  VAR_6 = FUNC_6(VAR_3->zfs_hdl, VAR_7.nvl, VAR_5);
 }
 FUNC_3(VAR_7.nvl);
 return (VAR_6);
}
