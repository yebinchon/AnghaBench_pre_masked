
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct mrsas_softc {TYPE_5__** streamDetectByLD; } ;
struct mrsas_mpt_cmd {TYPE_3__* io_request; } ;
struct IO_REQUEST_INFO {size_t ldTgtId; scalar_t__ ldStartBlock; scalar_t__ isRead; scalar_t__ numBlocks; } ;
typedef int boolean_t ;
struct TYPE_10__ {size_t mruBitMap; TYPE_4__* streamTrack; } ;
struct TYPE_9__ {scalar_t__ nextSeqLBA; scalar_t__ isRead; } ;
struct TYPE_6__ {int streamDetected; } ;
struct TYPE_7__ {TYPE_1__ raid_context_g35; } ;
struct TYPE_8__ {TYPE_2__ RaidContext; } ;
typedef TYPE_4__ STREAM_DETECT ;
typedef TYPE_5__ LD_STREAM_DETECT ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct mrsas_softc *VAR_5, struct mrsas_mpt_cmd *VAR_6,
    struct IO_REQUEST_INFO *VAR_7)
{
 u_int32_t VAR_8 = VAR_7->ldTgtId;
 LD_STREAM_DETECT *VAR_9 = VAR_5->streamDetectByLD[VAR_8];
 u_int32_t *VAR_10 = &VAR_9->mruBitMap;
 u_int32_t VAR_11, VAR_12, VAR_13;
 u_int32_t VAR_14, VAR_15;
 int VAR_16;
 boolean_t VAR_17 = 0;
 STREAM_DETECT *VAR_18;


 for (VAR_16 = 0; VAR_16 < VAR_1; ++VAR_16) {
  VAR_11 = (*VAR_10 >> (VAR_16 * VAR_0)) &
    VAR_2;
  VAR_18 = &VAR_9->streamTrack[VAR_11];




  if (VAR_18->nextSeqLBA &&
      VAR_7->ldStartBlock >= VAR_18->nextSeqLBA &&
      (VAR_7->ldStartBlock <= (VAR_18->nextSeqLBA+32)) &&
      (VAR_18->isRead == VAR_7->isRead)) {
   if (VAR_7->ldStartBlock != VAR_18->nextSeqLBA &&
       (!VAR_7->isRead || !VAR_17)) {




    continue;
   }
   VAR_6->io_request->RaidContext.raid_context_g35.streamDetected = VAR_3;
   VAR_18->nextSeqLBA = VAR_7->ldStartBlock + VAR_7->numBlocks;



   VAR_15 = (1 << VAR_16 * VAR_0) - 1 ;
   VAR_12 = ((*VAR_10 & VAR_15) <<
       VAR_0);
   VAR_14 = VAR_2 << VAR_16 * VAR_0;
   VAR_13 = (*VAR_10) &
       (~(VAR_15 | VAR_14));
   *VAR_10 =
       (VAR_13 | VAR_12 | VAR_11);
   return;
  }
 }



 VAR_11 = (*VAR_10 >>
     ((VAR_1 - 1) * VAR_0)) & VAR_2;
 VAR_18 = &VAR_9->streamTrack[VAR_11];
 VAR_18->isRead = VAR_7->isRead;
 VAR_18->nextSeqLBA = VAR_7->ldStartBlock + VAR_7->numBlocks;
 *VAR_10 = (((*VAR_10 & VAR_4) << 4) | VAR_11);
 return;
}
