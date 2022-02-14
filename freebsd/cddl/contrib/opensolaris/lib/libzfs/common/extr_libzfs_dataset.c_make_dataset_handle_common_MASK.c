
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dds_type; scalar_t__ dds_is_snapshot; } ;
struct TYPE_7__ {int * zpool_hdl; void* zfs_type; TYPE_1__ zfs_dmustats; void* zfs_head_type; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef int zfs_cmd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 int * FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(zfs_handle_t *VAR_5, zfs_cmd_t *VAR_6)
{
 if (FUNC_1(VAR_5, VAR_6) != 0)
  return (-1);





 if (VAR_5->zfs_dmustats.dds_type == VAR_1)
  VAR_5->zfs_head_type = VAR_4;
 else if (VAR_5->zfs_dmustats.dds_type == VAR_0)
  VAR_5->zfs_head_type = VAR_2;
 else
  FUNC_0();

 if (VAR_5->zfs_dmustats.dds_is_snapshot)
  VAR_5->zfs_type = VAR_3;
 else if (VAR_5->zfs_dmustats.dds_type == VAR_1)
  VAR_5->zfs_type = VAR_4;
 else if (VAR_5->zfs_dmustats.dds_type == VAR_0)
  VAR_5->zfs_type = VAR_2;
 else
  FUNC_0();

 if ((VAR_5->zpool_hdl = FUNC_2(VAR_5)) == ((void*)0))
  return (-1);

 return (0);
}
