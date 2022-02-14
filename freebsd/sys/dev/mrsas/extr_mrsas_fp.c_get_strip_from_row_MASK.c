
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
struct TYPE_21__ {scalar_t__ span_row_data_width; scalar_t__ data_row_end; scalar_t__ data_row_start; scalar_t__* strip_offset; scalar_t__ data_strip_start; } ;
struct TYPE_16__ {TYPE_3__* ldSpanMap; } ;
struct TYPE_20__ {TYPE_4__ raidMap; } ;
struct TYPE_19__ {size_t spanDepth; } ;
struct TYPE_18__ {scalar_t__ logStart; scalar_t__ logEnd; int diff; } ;
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
 int VAR_1 ;
 TYPE_7__* FUNC_0 (size_t,TYPE_8__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct mrsas_softc*,int ,char*,size_t,unsigned long) ;

__attribute__((used)) static u_int64_t
FUNC_4(struct mrsas_softc *VAR_2,
    u_int32_t VAR_3, u_int64_t VAR_4, MR_DRV_RAID_MAP_ALL * VAR_5)
{
 MR_LD_RAID *VAR_6 = FUNC_0(VAR_3, VAR_5);
 LD_SPAN_SET *VAR_7;
 MR_QUAD_ELEMENT *VAR_8;
 PLD_SPAN_INFO VAR_9 = VAR_2->log_to_span;
 u_int32_t VAR_10, VAR_11;
 u_int64_t VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_7 = &(VAR_9[VAR_3].span_set[VAR_11]);

  if (VAR_7->span_row_data_width == 0)
   break;
  if (VAR_4 > VAR_7->data_row_end)
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_6->spanDepth; VAR_10++)
   if (VAR_5->raidMap.ldSpanMap[VAR_3].spanBlock[VAR_10].
       block_span_info.noElements >= VAR_11 + 1) {
    VAR_8 = &VAR_5->raidMap.ldSpanMap[VAR_3].
        spanBlock[VAR_10].block_span_info.quad[VAR_11];
    if (VAR_8->logStart <= VAR_4 &&
        VAR_4 <= VAR_8->logEnd &&
        FUNC_2((VAR_4 - VAR_8->logStart),
        VAR_8->diff) == 0) {
     VAR_12 = FUNC_1
         (((VAR_4 - VAR_7->data_row_start)
         - VAR_8->logStart),
         VAR_8->diff);
     VAR_12 *= VAR_7->span_row_data_width;
     VAR_12 += VAR_7->data_strip_start;
     VAR_12 += VAR_7->strip_offset[VAR_10];
     return VAR_12;
    }
   }
 }
 FUNC_3(VAR_2, VAR_1, "AVAGO Debug - get_strip_from_row: returns invalid "
     "strip for ld=%x, row=%lx\n", VAR_3, (long unsigned int)VAR_4);
 return -1;
}
