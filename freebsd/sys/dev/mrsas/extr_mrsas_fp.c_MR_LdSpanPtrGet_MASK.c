
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct TYPE_8__ {TYPE_2__* ldSpanMap; } ;
struct TYPE_9__ {TYPE_3__ raidMap; } ;
struct TYPE_7__ {TYPE_1__* spanBlock; } ;
struct TYPE_6__ {int span; } ;
typedef int MR_LD_SPAN ;
typedef TYPE_4__ MR_DRV_RAID_MAP_ALL ;



__attribute__((used)) static MR_LD_SPAN *
FUNC_0(u_int32_t VAR_0, u_int32_t VAR_1, MR_DRV_RAID_MAP_ALL * VAR_2)
{
 return &VAR_2->raidMap.ldSpanMap[VAR_0].spanBlock[VAR_1].span;
}
