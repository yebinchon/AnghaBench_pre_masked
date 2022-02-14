
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef size_t u_int32_t ;
struct mrsas_softc {TYPE_5__* log_to_span; } ;
struct TYPE_21__ {scalar_t__ span_row_data_width; scalar_t__ data_row_end; } ;
struct TYPE_16__ {TYPE_3__* ldSpanMap; } ;
struct TYPE_20__ {TYPE_4__ raidMap; } ;
struct TYPE_19__ {size_t spanDepth; scalar_t__ stripeShift; } ;
struct TYPE_18__ {scalar_t__ diff; scalar_t__ logStart; scalar_t__ logEnd; scalar_t__ offsetInSpan; } ;
struct TYPE_17__ {TYPE_9__* span_set; } ;
struct TYPE_15__ {TYPE_2__* spanBlock; } ;
struct TYPE_13__ {size_t noElements; TYPE_6__* quad; } ;
struct TYPE_14__ {TYPE_1__ block_span_info; } ;
typedef TYPE_5__* PLD_SPAN_INFO ;
typedef TYPE_6__ MR_QUAD_ELEMENT ;
typedef TYPE_7__ MR_LD_RAID ;
typedef TYPE_8__ MR_DRV_RAID_MAP_ALL ;
typedef TYPE_9__ LD_SPAN_SET ;


 size_t VAR_0 ;
 TYPE_7__* FUNC_0 (size_t,TYPE_8__*) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

u_int32_t
FUNC_3(struct mrsas_softc *VAR_2, u_int32_t VAR_3, u_int64_t VAR_4,
    u_int64_t *VAR_5, MR_DRV_RAID_MAP_ALL * VAR_6, int *VAR_7)
{
 MR_LD_RAID *VAR_8 = FUNC_0(VAR_3, VAR_6);
 LD_SPAN_SET *VAR_9;
 MR_QUAD_ELEMENT *VAR_10;
 u_int32_t VAR_11, VAR_12;
 PLD_SPAN_INFO VAR_13 = VAR_2->log_to_span;

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_9 = &(VAR_13[VAR_3].span_set[VAR_12]);

  if (VAR_9->span_row_data_width == 0)
   break;
  if (VAR_4 > VAR_9->data_row_end)
   continue;

  for (VAR_11 = 0; VAR_11 < VAR_8->spanDepth; VAR_11++)
   if (VAR_6->raidMap.ldSpanMap[VAR_3].spanBlock[VAR_11].
       block_span_info.noElements >= VAR_12 + 1) {
    VAR_10 = &VAR_6->raidMap.ldSpanMap[VAR_3].
        spanBlock[VAR_11].
        block_span_info.quad[VAR_12];
    if (VAR_10->diff == 0) {
     *VAR_7 = 1;
     return VAR_11;
    }
    if (VAR_10->logStart <= VAR_4 &&
        VAR_4 <= VAR_10->logEnd &&
        (FUNC_2(VAR_4 - VAR_10->logStart,
        VAR_10->diff)) == 0) {
     if (VAR_5 != ((void*)0)) {
      u_int64_t VAR_14;

      VAR_14 = FUNC_1
          ((VAR_4 - VAR_10->logStart),
          VAR_10->diff);
      VAR_14 = (VAR_14 + VAR_10->offsetInSpan)
          << VAR_8->stripeShift;
      *VAR_5 = VAR_14;
     }
     return VAR_11;
    }
   }
 }
 return VAR_1;
}
