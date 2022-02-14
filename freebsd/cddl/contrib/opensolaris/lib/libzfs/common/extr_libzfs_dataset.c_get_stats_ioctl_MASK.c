
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zfs_name; TYPE_3__* zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_10__ {int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
struct TYPE_11__ {int libzfs_fd; } ;
typedef TYPE_3__ libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(zfs_handle_t *VAR_3, zfs_cmd_t *VAR_4)
{
 libzfs_handle_t *VAR_5 = VAR_3->zfs_hdl;

 (void) FUNC_1(VAR_4->zc_name, VAR_3->zfs_name, sizeof (VAR_4->zc_name));

 while (FUNC_0(VAR_5->libzfs_fd, VAR_1, VAR_4) != 0) {
  if (VAR_2 == VAR_0) {
   if (FUNC_2(VAR_5, VAR_4) != 0) {
    return (-1);
   }
  } else {
   return (-1);
  }
 }
 return (0);
}
