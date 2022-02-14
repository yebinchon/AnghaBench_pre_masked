
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int zpool_props; int zpool_name; TYPE_3__* zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_14__ {int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
struct TYPE_15__ {int libzfs_fd; } ;
typedef TYPE_3__ libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_6(zpool_handle_t *VAR_3)
{
 zfs_cmd_t VAR_4 = { 0 };
 libzfs_handle_t *VAR_5 = VAR_3->zpool_hdl;

 (void) FUNC_1(VAR_4.zc_name, VAR_3->zpool_name, sizeof (VAR_4.zc_name));

 if (FUNC_2(VAR_5, &VAR_4, 0) != 0)
  return (-1);

 while (FUNC_0(VAR_5->libzfs_fd, VAR_1, &VAR_4) != 0) {
  if (VAR_2 == VAR_0) {
   if (FUNC_3(VAR_5, &VAR_4) != 0) {
    FUNC_4(&VAR_4);
    return (-1);
   }
  } else {
   FUNC_4(&VAR_4);
   return (-1);
  }
 }

 if (FUNC_5(VAR_5, &VAR_4, &VAR_3->zpool_props) != 0) {
  FUNC_4(&VAR_4);
  return (-1);
 }

 FUNC_4(&VAR_4);

 return (0);
}
