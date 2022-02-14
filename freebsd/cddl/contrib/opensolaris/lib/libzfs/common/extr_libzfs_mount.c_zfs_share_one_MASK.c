
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_2__ {int ms_mntstatus; } ;
typedef TYPE_1__ mount_state_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(zfs_handle_t *VAR_0, void *VAR_1)
{
 mount_state_t *VAR_2 = VAR_1;
 int VAR_3 = 0;

 if (FUNC_0(VAR_0) != 0)
  VAR_3 = VAR_2->ms_mntstatus = -1;
 return (VAR_3);
}
