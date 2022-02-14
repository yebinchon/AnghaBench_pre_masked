
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int64_t ;
typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct mrsas_softc {int map_id; scalar_t__ lb_pending_cmds; scalar_t__ UnevenSpanSupport; int ** ld_drv_map; } ;
struct IO_REQUEST_INFO {scalar_t__ ldStartBlock; int numBlocks; int span_arm; int pd_after_lb; int ldTgtId; } ;
struct TYPE_6__ {int rowSize; } ;
struct TYPE_5__ {scalar_t__* last_accessed_block; int * scsi_pending_cmds; } ;
typedef TYPE_1__* PLD_LOAD_BALANCE_INFO ;
typedef TYPE_2__ MR_LD_RAID ;
typedef int MR_DRV_RAID_MAP_ALL ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int,int *) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__,int,int *) ;
 scalar_t__ FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*,int,int,int,int) ;

u_int8_t
FUNC_9(struct mrsas_softc *VAR_4,
    PLD_LOAD_BALANCE_INFO VAR_5, struct IO_REQUEST_INFO *VAR_6)
{
 MR_LD_RAID *VAR_7;
 MR_DRV_RAID_MAP_ALL *VAR_8;
 u_int16_t VAR_9;
 u_int16_t VAR_10, VAR_11, VAR_12;
 u_int64_t VAR_13, VAR_14;
 u_int8_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u_int32_t VAR_20, VAR_21;

 u_int64_t VAR_22 = VAR_6->ldStartBlock;
 u_int32_t VAR_23 = VAR_6->numBlocks;

 VAR_18 = ((VAR_6->span_arm & VAR_2)
     >> VAR_3);
 VAR_19 = (VAR_6->span_arm & VAR_1);

 VAR_8 = VAR_4->ld_drv_map[(VAR_4->map_id & 1)];
 VAR_12 = FUNC_5(VAR_6->ldTgtId, VAR_8);
 VAR_7 = FUNC_2(VAR_12, VAR_8);
 VAR_21 = VAR_4->UnevenSpanSupport ?
     FUNC_6(VAR_8, VAR_12, VAR_18) : VAR_7->rowSize;

 VAR_20 = FUNC_3(VAR_12, VAR_18, VAR_8);
 VAR_16 = FUNC_1(VAR_20, VAR_19, VAR_8);
 VAR_17 = FUNC_1(VAR_20, (VAR_19 + 1) >= VAR_21 ?
     (VAR_19 + 1 - VAR_21) : VAR_19 + 1, VAR_8);


 VAR_9 = FUNC_4(VAR_17, VAR_8);
 if (VAR_9 == VAR_0) {
  VAR_15 = VAR_19;
 } else {

  VAR_10 = FUNC_7(&VAR_5->scsi_pending_cmds[VAR_16]);
  VAR_11 = FUNC_7(&VAR_5->scsi_pending_cmds[VAR_17]);


  VAR_13 = FUNC_0(VAR_22, VAR_5->last_accessed_block[VAR_16]);
  VAR_14 = FUNC_0(VAR_22, VAR_5->last_accessed_block[VAR_17]);
  VAR_15 = (VAR_13 <= VAR_14 ? VAR_19 : VAR_19 ^ 1);

  if ((VAR_15 == VAR_19 && VAR_10 > VAR_11 + VAR_4->lb_pending_cmds) ||
      (VAR_15 != VAR_19 && VAR_11 > VAR_10 + VAR_4->lb_pending_cmds))
   VAR_15 ^= 1;


  VAR_6->span_arm = (VAR_18 << VAR_3) | VAR_15;
  VAR_6->pd_after_lb = (VAR_15 == VAR_19) ? VAR_16 : VAR_17;
 }

 VAR_5->last_accessed_block[VAR_15 == VAR_19 ? VAR_16 : VAR_17] = VAR_22 + VAR_23 - 1;







 return VAR_6->pd_after_lb;
}
