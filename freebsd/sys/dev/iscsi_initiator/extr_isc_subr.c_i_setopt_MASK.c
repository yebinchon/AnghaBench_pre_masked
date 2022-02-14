
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ maxRecvDataSegmentLength; scalar_t__ maxXmitDataSegmentLength; scalar_t__ maxBurstLength; scalar_t__ maxluns; int * initiatorName; int * targetName; int * targetAddress; } ;
struct TYPE_7__ {int * dataDigest; int * hdrDigest; TYPE_1__ opt; } ;
typedef TYPE_2__ isc_session_t ;
struct TYPE_8__ {scalar_t__ maxRecvDataSegmentLength; scalar_t__ maxXmitDataSegmentLength; scalar_t__ maxBurstLength; scalar_t__ maxluns; int * dataDigest; int * headerDigest; int * initiatorName; int * targetName; int * targetAddress; } ;
typedef TYPE_3__ isc_opt_t ;
typedef int digest_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int *,char*) ;

int
FUNC_4(isc_session_t *VAR_3, isc_opt_t *VAR_4)
{
     if(VAR_4->maxRecvDataSegmentLength > 0) {
   VAR_3->opt.maxRecvDataSegmentLength = VAR_4->maxRecvDataSegmentLength;
   FUNC_2(2, "maxRecvDataSegmentLength=%d", VAR_3->opt.maxRecvDataSegmentLength);
     }
     if(VAR_4->maxXmitDataSegmentLength > 0) {

   VAR_3->opt.maxXmitDataSegmentLength = VAR_4->maxXmitDataSegmentLength;
   FUNC_2(2, "opt.maXmitDataSegmentLength=%d", VAR_3->opt.maxXmitDataSegmentLength);
     }
     if(VAR_4->maxBurstLength != 0) {
   VAR_3->opt.maxBurstLength = VAR_4->maxBurstLength;
   FUNC_2(2, "opt.maxBurstLength=%d", VAR_3->opt.maxBurstLength);
     }

     if(VAR_4->targetAddress != ((void*)0)) {
   if(VAR_3->opt.targetAddress != ((void*)0))
        FUNC_0(VAR_3->opt.targetAddress, VAR_1);
   VAR_3->opt.targetAddress = FUNC_1(VAR_4->targetAddress, 128);
   FUNC_2(2, "opt.targetAddress='%s'", VAR_3->opt.targetAddress);
     }
     if(VAR_4->targetName != ((void*)0)) {
   if(VAR_3->opt.targetName != ((void*)0))
        FUNC_0(VAR_3->opt.targetName, VAR_1);
   VAR_3->opt.targetName = FUNC_1(VAR_4->targetName, 128);
   FUNC_2(2, "opt.targetName='%s'", VAR_3->opt.targetName);
     }
     if(VAR_4->initiatorName != ((void*)0)) {
   if(VAR_3->opt.initiatorName != ((void*)0))
        FUNC_0(VAR_3->opt.initiatorName, VAR_1);
   VAR_3->opt.initiatorName = FUNC_1(VAR_4->initiatorName, 128);
   FUNC_2(2, "opt.initiatorName='%s'", VAR_3->opt.initiatorName);
     }

     if(VAR_4->maxluns > 0) {
   if(VAR_4->maxluns > VAR_0)
        VAR_3->opt.maxluns = VAR_0;
   VAR_3->opt.maxluns = VAR_4->maxluns;
   FUNC_2(2, "opt.maxluns=%d", VAR_3->opt.maxluns);
     }

     if(VAR_4->headerDigest != ((void*)0)) {
   FUNC_2(2, "opt.headerDigest='%s'", VAR_4->headerDigest);
   if(FUNC_3(VAR_4->headerDigest, "CRC32C") == 0) {
        VAR_3->hdrDigest = (digest_t *)VAR_2;
        FUNC_2(2, "opt.headerDigest set");
   }
     }
     if(VAR_4->dataDigest != ((void*)0)) {
   FUNC_2(2, "opt.dataDigest='%s'", VAR_4->headerDigest);
   if(FUNC_3(VAR_4->dataDigest, "CRC32C") == 0) {
        VAR_3->dataDigest = (digest_t *)VAR_2;
        FUNC_2(2, "opt.dataDigest set");
   }
     }

     return 0;
}
