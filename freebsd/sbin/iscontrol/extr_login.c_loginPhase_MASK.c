
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int bhs; } ;
struct TYPE_13__ {TYPE_1__ ipdu; } ;
typedef TYPE_2__ pdu_t ;
struct TYPE_14__ {int cmd; int CSG; int NSG; int T; int CID; int tsih; int isid; } ;
typedef TYPE_3__ login_req_t ;
struct TYPE_15__ {int csg; int flags; int tsih; int isid; TYPE_5__* op; } ;
typedef TYPE_4__ isess_t ;
struct TYPE_16__ {char* sessionType; char* initiatorName; char* targetName; char* authMethod; char* maxBurstLength; char* headerDigest; char* dataDigest; char* maxRecvDataSegmentLength; char* errorRecoveryLevel; char* defaultTime2Wait; char* defaultTime2Retain; char* maxOutstandingR2T; char* maxConnections; char* firstBurstLength; int immediateData; int initialR2T; int dataSequenceInOrder; int dataPDUInOrder; } ;
typedef TYPE_5__ isc_opt_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (TYPE_2__*,char*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (char*,char*) ;

int
FUNC_8(isess_t *VAR_5)
{
     pdu_t VAR_6, *VAR_7 = &VAR_6;
     isc_opt_t *VAR_8 = VAR_5->op;
     login_req_t *VAR_9;
     int VAR_10 = 1;

     FUNC_3(3);

     FUNC_2(VAR_7, sizeof(pdu_t));
     VAR_9 = (login_req_t *)&VAR_6.ipdu.bhs;
     VAR_9->cmd = VAR_1 | 0x40;
     FUNC_5(VAR_9->isid, VAR_5->isid, 6);
     VAR_9->tsih = VAR_5->tsih;
     VAR_9->CID = FUNC_4(1);

     if((VAR_9->CSG = VAR_5->csg) == 129)
   VAR_9->NSG = VAR_0;
     else
   VAR_9->NSG = 129;
     VAR_9->T = 1;

     if(VAR_5->flags & VAR_2) {
   VAR_5->flags &= ~VAR_2;

   FUNC_0(VAR_7, "SessionType=%s", VAR_8->sessionType);
   FUNC_0(VAR_7, "InitiatorName=%s", VAR_8->initiatorName);
   if(FUNC_7(VAR_8->sessionType, "Discovery") != 0) {
        FUNC_0(VAR_7, "TargetName=%s", VAR_8->targetName);
   }
     }
     switch(VAR_5->csg) {
     case 128:
   FUNC_0(VAR_7, "AuthMethod=%s", VAR_8->authMethod);
   break;

     case 129:
   if((VAR_5->flags & VAR_3) == 0) {
        VAR_5->flags |= VAR_3;
        FUNC_0(VAR_7, "MaxBurstLength=%d", VAR_8->maxBurstLength);
        FUNC_0(VAR_7, "HeaderDigest=%s", VAR_8->headerDigest);
        FUNC_0(VAR_7, "DataDigest=%s", VAR_8->dataDigest);
        FUNC_0(VAR_7, "MaxRecvDataSegmentLength=%d", VAR_8->maxRecvDataSegmentLength);
        FUNC_0(VAR_7, "ErrorRecoveryLevel=%d", VAR_8->errorRecoveryLevel);
        FUNC_0(VAR_7, "DefaultTime2Wait=%d", VAR_8->defaultTime2Wait);
        FUNC_0(VAR_7, "DefaultTime2Retain=%d", VAR_8->defaultTime2Retain);
        FUNC_0(VAR_7, "DataPDUInOrder=%s", VAR_8->dataPDUInOrder? "Yes": "No");
        FUNC_0(VAR_7, "DataSequenceInOrder=%s", VAR_8->dataSequenceInOrder? "Yes": "No");
        FUNC_0(VAR_7, "MaxOutstandingR2T=%d", VAR_8->maxOutstandingR2T);

        if(FUNC_7(VAR_8->sessionType, "Discovery") != 0) {
      FUNC_0(VAR_7, "MaxConnections=%d", VAR_8->maxConnections);
      FUNC_0(VAR_7, "FirstBurstLength=%d", VAR_8->firstBurstLength);
      FUNC_0(VAR_7, "InitialR2T=%s", VAR_8->initialR2T? "Yes": "No");
      FUNC_0(VAR_7, "ImmediateData=%s", VAR_8->immediateData? "Yes": "No");
        }
   }

   break;
     }

     VAR_10 = FUNC_6(VAR_5, &VAR_6, VAR_4);

     switch(VAR_10) {
     case 0:
   if(VAR_5->csg == 128)




        VAR_10 = FUNC_1(VAR_5);
     }

     return VAR_10;
}
