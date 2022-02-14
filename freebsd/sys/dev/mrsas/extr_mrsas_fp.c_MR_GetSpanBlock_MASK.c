
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct TYPE_10__ {scalar_t__ spanDepth; scalar_t__ stripeShift; } ;
struct TYPE_9__ {scalar_t__ diff; scalar_t__ logStart; scalar_t__ logEnd; scalar_t__ offsetInSpan; } ;
struct TYPE_7__ {scalar_t__ noElements; TYPE_3__* quad; } ;
struct TYPE_8__ {TYPE_1__ block_span_info; } ;
typedef TYPE_2__ MR_SPAN_BLOCK_INFO ;
typedef TYPE_3__ MR_QUAD_ELEMENT ;
typedef TYPE_4__ MR_LD_RAID ;
typedef int MR_DRV_RAID_MAP_ALL ;


 TYPE_4__* FUNC_0 (scalar_t__,int *) ;
 TYPE_2__* FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

u_int32_t
FUNC_4(u_int32_t VAR_0, u_int64_t VAR_1, u_int64_t *VAR_2,
    MR_DRV_RAID_MAP_ALL * VAR_3, int *VAR_4)
{
 MR_SPAN_BLOCK_INFO *VAR_5 = FUNC_1(VAR_0, VAR_3);
 MR_QUAD_ELEMENT *VAR_6;
 MR_LD_RAID *VAR_7 = FUNC_0(VAR_0, VAR_3);
 u_int32_t VAR_8, VAR_9;
 u_int64_t VAR_10, VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_7->spanDepth; VAR_8++, VAR_5++) {
  for (VAR_9 = 0; VAR_9 < VAR_5->block_span_info.noElements; VAR_9++) {
   VAR_6 = &VAR_5->block_span_info.quad[VAR_9];
   if (VAR_6->diff == 0) {
    *VAR_4 = 1;
    return VAR_8;
   }
   if (VAR_6->logStart <= VAR_1 && VAR_1 <= VAR_6->logEnd &&
       (FUNC_3(VAR_1 - VAR_6->logStart, VAR_6->diff)) == 0) {
    if (VAR_2 != ((void*)0)) {
     VAR_10 = FUNC_2((VAR_1 - VAR_6->logStart), VAR_6->diff);
     VAR_11 = VAR_10;
     VAR_10 = (VAR_10 + VAR_6->offsetInSpan) << VAR_7->stripeShift;
     *VAR_2 = VAR_10;
    }
    return VAR_8;
   }
  }
 }
 return VAR_8;
}
