
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct TYPE_6__ {TYPE_1__* ldSpanMap; } ;
struct TYPE_7__ {TYPE_2__ raidMap; } ;
struct TYPE_5__ {int * spanBlock; } ;
typedef int MR_SPAN_BLOCK_INFO ;
typedef TYPE_3__ MR_DRV_RAID_MAP_ALL ;



__attribute__((used)) static MR_SPAN_BLOCK_INFO *
FUNC_0(u_int32_t VAR_0, MR_DRV_RAID_MAP_ALL * VAR_1)
{
 return &VAR_1->raidMap.ldSpanMap[VAR_0].spanBlock[0];
}
