
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fd; TYPE_1__* op; } ;
typedef TYPE_2__ isess_t ;
struct TYPE_9__ {scalar_t__ targetName; int * dataDigest; int * headerDigest; int maxluns; int maxBurstLength; int maxXmitDataSegmentLength; int maxRecvDataSegmentLength; int targetAddress; int initiatorName; } ;
typedef TYPE_3__ isc_opt_t ;
struct TYPE_7__ {scalar_t__ targetName; int * dataDigest; int * headerDigest; int maxluns; int maxBurstLength; int maxXmitDataSegmentLength; int maxRecvDataSegmentLength; int targetAddress; int initiatorName; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,char) ;

int
FUNC_6(isess_t *VAR_2, int VAR_3)
{
     isc_opt_t VAR_4;
     char *VAR_5;

     FUNC_2(3);

     FUNC_0(&VAR_4, sizeof(isc_opt_t));

     if((VAR_3 & VAR_1) == 0) {
   VAR_4.initiatorName = VAR_2->op->initiatorName;
   VAR_4.targetAddress = VAR_2->op->targetAddress;
   if(VAR_2->op->targetName != 0)
        VAR_4.targetName = VAR_2->op->targetName;

   VAR_4.maxRecvDataSegmentLength = VAR_2->op->maxRecvDataSegmentLength;
   VAR_4.maxXmitDataSegmentLength = VAR_2->op->maxXmitDataSegmentLength;
   VAR_4.maxBurstLength = VAR_2->op->maxBurstLength;
   VAR_4.maxluns = VAR_2->op->maxluns;
     }
     else {



   if(VAR_2->op->headerDigest != ((void*)0)) {
        VAR_5 = FUNC_5(VAR_2->op->headerDigest, ',');
        if(VAR_5 == ((void*)0))
      VAR_4.headerDigest = VAR_2->op->headerDigest;
        FUNC_1(1, "oop.headerDigest=%s", VAR_4.headerDigest);
   }
   if(VAR_2->op->dataDigest != ((void*)0)) {
        VAR_5 = FUNC_5(VAR_2->op->dataDigest, ',');
        if(VAR_5 == ((void*)0))
      VAR_4.dataDigest = VAR_2->op->dataDigest;
        FUNC_1(1, "oop.dataDigest=%s", VAR_4.dataDigest);
   }
     }

     if(FUNC_3(VAR_2->fd, VAR_0, &VAR_4)) {
   FUNC_4("ISCSISETOPT");
   return -1;
     }
     return 0;
}
