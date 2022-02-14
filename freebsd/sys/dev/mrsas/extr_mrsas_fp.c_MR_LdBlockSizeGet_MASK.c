
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_3__ {scalar_t__ logicalBlockLength; } ;
typedef TYPE_1__ MR_LD_RAID ;
typedef int MR_DRV_RAID_MAP_ALL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;

u_int32_t
FUNC_2(u_int32_t VAR_2, MR_DRV_RAID_MAP_ALL * VAR_3)
{
 MR_LD_RAID *VAR_4;
 u_int32_t VAR_5, VAR_6 = VAR_1;

 VAR_5 = FUNC_1(VAR_2, VAR_3);




 if (VAR_5 >= VAR_0)
  return VAR_6;

 VAR_4 = FUNC_0(VAR_5, VAR_3);
 VAR_6 = VAR_4->logicalBlockLength;
 if (!VAR_6)
  VAR_6 = VAR_1;

 return VAR_6;
}
