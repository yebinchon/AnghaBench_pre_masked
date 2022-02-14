
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_ioc_t ;
struct TYPE_3__ {int zc_nvlist_dst_filled; } ;
typedef TYPE_1__ zfs_cmd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;





 scalar_t__ VAR_2 ;

void
FUNC_0(zfs_cmd_t *VAR_3, const zfs_ioc_t VAR_4)
{
 if (VAR_2 >= VAR_1)
  return;

 switch (VAR_4) {
 case 131:
 case 132:
 case 129:
 case 128:
 case 130:
  VAR_3->zc_nvlist_dst_filled = VAR_0;
 break;
 }
}
