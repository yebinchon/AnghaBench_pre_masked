
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef size_t u_int32_t ;
struct mrsas_softc {TYPE_5__* log_to_span; } ;
struct TYPE_19__ {scalar_t__ span_row_data_width; scalar_t__ data_strip_end; scalar_t__ data_strip_start; size_t* strip_offset; } ;
struct TYPE_15__ {TYPE_3__* ldSpanMap; } ;
struct TYPE_18__ {TYPE_4__ raidMap; } ;
struct TYPE_17__ {size_t spanDepth; } ;
struct TYPE_16__ {TYPE_8__* span_set; } ;
struct TYPE_14__ {TYPE_2__* spanBlock; } ;
struct TYPE_12__ {size_t noElements; } ;
struct TYPE_13__ {TYPE_1__ block_span_info; } ;
typedef TYPE_5__* PLD_SPAN_INFO ;
typedef TYPE_6__ MR_LD_RAID ;
typedef TYPE_7__ MR_DRV_RAID_MAP_ALL ;
typedef TYPE_8__ LD_SPAN_SET ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (size_t,TYPE_7__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct mrsas_softc*,int ,char*,size_t,unsigned long,...) ;

__attribute__((used)) static u_int32_t
FUNC_3(struct mrsas_softc *VAR_2,
    u_int32_t VAR_3, u_int64_t VAR_4, MR_DRV_RAID_MAP_ALL * VAR_5)
{
 MR_LD_RAID *VAR_6 = FUNC_0(VAR_3, VAR_5);
 LD_SPAN_SET *VAR_7;
 PLD_SPAN_INFO VAR_8 = VAR_2->log_to_span;
 u_int32_t VAR_9, VAR_10, VAR_11, VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_7 = &(VAR_8[VAR_3].span_set[VAR_9]);

  if (VAR_7->span_row_data_width == 0)
   break;
  if (VAR_4 > VAR_7->data_strip_end)
   continue;

  VAR_10 = (u_int32_t)FUNC_1
      ((VAR_4 - VAR_7->data_strip_start),
      VAR_7->span_row_data_width);

  for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_6->spanDepth; VAR_11++)
   if (VAR_5->raidMap.ldSpanMap[VAR_3].spanBlock[VAR_11].
       block_span_info.noElements >= VAR_9 + 1) {
    if (VAR_10 >= VAR_7->strip_offset[VAR_11])
     VAR_12 = VAR_7->strip_offset[VAR_11];
    else
     break;
   }
  FUNC_2(VAR_2, VAR_1, "AVAGO PRL11: get_arm_from_strip: "
      "for ld=0x%x strip=0x%lx arm is  0x%x\n", VAR_3,
      (long unsigned int)VAR_4, (VAR_10 - VAR_12));
  return (VAR_10 - VAR_12);
 }

 FUNC_2(VAR_2, VAR_1, "AVAGO Debug: - get_arm_from_strip: returns invalid arm"
     " for ld=%x strip=%lx\n", VAR_3, (long unsigned int)VAR_4);

 return -1;
}
