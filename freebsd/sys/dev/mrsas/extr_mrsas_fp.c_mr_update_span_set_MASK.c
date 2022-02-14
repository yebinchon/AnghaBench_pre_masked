
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;


typedef size_t u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_28__ {int diff; int* strip_offset; int span_row_data_width; int log_start_lba; int log_end_lba; int span_row_start; int span_row_end; int data_strip_start; int data_strip_end; int data_row_start; int data_row_end; } ;
struct TYPE_23__ {TYPE_3__* ldSpanMap; } ;
struct TYPE_27__ {TYPE_4__ raidMap; } ;
struct TYPE_26__ {size_t spanDepth; int stripeShift; } ;
struct TYPE_25__ {int diff; scalar_t__ logStart; scalar_t__ logEnd; } ;
struct TYPE_24__ {TYPE_9__* span_set; } ;
struct TYPE_22__ {TYPE_2__* spanBlock; } ;
struct TYPE_20__ {int noElements; TYPE_6__* quad; } ;
struct TYPE_21__ {TYPE_1__ block_span_info; } ;
struct TYPE_19__ {int spanRowDataSize; } ;
typedef TYPE_5__* PLD_SPAN_INFO ;
typedef TYPE_6__ MR_QUAD_ELEMENT ;
typedef TYPE_7__ MR_LD_RAID ;
typedef TYPE_8__ MR_DRV_RAID_MAP_ALL ;
typedef TYPE_9__ LD_SPAN_SET ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (int,TYPE_8__*) ;
 TYPE_15__* FUNC_1 (int,size_t,TYPE_8__*) ;
 int FUNC_2 (int,TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*,TYPE_5__*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (char*,size_t,int) ;

void
FUNC_6(MR_DRV_RAID_MAP_ALL * VAR_2, PLD_SPAN_INFO VAR_3)
{
 u_int8_t VAR_4, VAR_5;
 u_int32_t VAR_6, VAR_7;
 u_int64_t VAR_8;
 MR_LD_RAID *VAR_9;
 LD_SPAN_SET *VAR_10, *VAR_11;
 MR_QUAD_ELEMENT *VAR_12;
 int VAR_13;
 u_int16_t VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_14 = FUNC_2(VAR_13, VAR_2);
  if (VAR_14 >= VAR_0)
   continue;
  VAR_9 = FUNC_0(VAR_14, VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   for (VAR_4 = 0; VAR_4 < VAR_9->spanDepth; VAR_4++) {
    if (VAR_2->raidMap.ldSpanMap[VAR_14].spanBlock[VAR_4].
        block_span_info.noElements < VAR_6 + 1)
     continue;

    VAR_10 = &(VAR_3[VAR_14].span_set[VAR_6]);
    VAR_12 = &VAR_2->raidMap.ldSpanMap[VAR_14].
        spanBlock[VAR_4].block_span_info.quad[VAR_6];

    VAR_10->diff = VAR_12->diff;

    for (VAR_5 = 0, VAR_7 = 0;
        VAR_5 < VAR_9->spanDepth; VAR_5++) {
     if (VAR_2->raidMap.ldSpanMap[VAR_14].spanBlock[VAR_5].
         block_span_info.noElements >= VAR_6 + 1) {
      VAR_10->strip_offset[VAR_5] = VAR_7;
      VAR_7 +=
          FUNC_1(VAR_14, VAR_5, VAR_2)->spanRowDataSize;




     }
    }

    VAR_10->span_row_data_width = VAR_7;
    VAR_8 = FUNC_4(((VAR_12->logEnd -
        VAR_12->logStart) + VAR_12->diff), VAR_12->diff);

    if (VAR_6 == 0) {
     VAR_10->log_start_lba = 0;
     VAR_10->log_end_lba =
         ((VAR_8 << VAR_9->stripeShift) * VAR_7) - 1;

     VAR_10->span_row_start = 0;
     VAR_10->span_row_end = VAR_8 - 1;

     VAR_10->data_strip_start = 0;
     VAR_10->data_strip_end = (VAR_8 * VAR_7) - 1;

     VAR_10->data_row_start = 0;
     VAR_10->data_row_end = (VAR_8 * VAR_12->diff) - 1;
    } else {
     VAR_11 = &(VAR_3[VAR_14].span_set[VAR_6 - 1]);
     VAR_10->log_start_lba = VAR_11->log_end_lba + 1;
     VAR_10->log_end_lba = VAR_10->log_start_lba +
         ((VAR_8 << VAR_9->stripeShift) * VAR_7) - 1;

     VAR_10->span_row_start = VAR_11->span_row_end + 1;
     VAR_10->span_row_end =
         VAR_10->span_row_start + VAR_8 - 1;

     VAR_10->data_strip_start =
         VAR_11->data_strip_end + 1;
     VAR_10->data_strip_end = VAR_10->data_strip_start +
         (VAR_8 * VAR_7) - 1;

     VAR_10->data_row_start = VAR_11->data_row_end + 1;
     VAR_10->data_row_end = VAR_10->data_row_start +
         (VAR_8 * VAR_12->diff) - 1;
    }
    break;
   }
   if (VAR_4 == VAR_9->spanDepth)
    break;
  }
 }



}
