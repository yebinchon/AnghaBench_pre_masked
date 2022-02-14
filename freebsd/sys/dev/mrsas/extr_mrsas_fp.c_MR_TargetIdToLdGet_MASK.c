
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef size_t u_int32_t ;
struct TYPE_4__ {int * ldTgtIdToLd; } ;
struct TYPE_5__ {TYPE_1__ raidMap; } ;
typedef TYPE_2__ MR_DRV_RAID_MAP_ALL ;



u_int8_t
FUNC_0(u_int32_t VAR_0, MR_DRV_RAID_MAP_ALL * VAR_1)
{
 return VAR_1->raidMap.ldTgtIdToLd[VAR_0];
}
