
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ pdu_t ;
struct TYPE_11__ {TYPE_3__* op; } ;
typedef TYPE_2__ isess_t ;
struct TYPE_12__ {char* targetAddress; void* maxOutstandingR2T; void* dataDigest; void* headerDigest; void* targetPortalGroupTag; void* maxXmitDataSegmentLength; void* port; } ;
typedef TYPE_3__ isc_opt_t ;
struct TYPE_14__ {char* name; int len; } ;
struct TYPE_13__ {int (* func ) (TYPE_2__*,char*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 TYPE_8__* VAR_2 ;
 TYPE_8__* VAR_3 ;
 TYPE_7__* VAR_4 ;
 int FUNC_3 (char*,int,char*) ;
 void* FUNC_4 (char*,int ) ;
 char* FUNC_5 (char*,char) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 void* FUNC_9 (char*,char**,int ) ;
 int FUNC_10 (TYPE_2__*,char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_11(isess_t *VAR_6, pdu_t *VAR_7)
{
     isc_opt_t *VAR_8 = VAR_6->op;
     int VAR_9, VAR_10, VAR_11;
     char *VAR_12, *VAR_13;

     FUNC_1(3);

     VAR_9 = VAR_7->ds_len;
     VAR_13 = (char *)VAR_7->ds_addr;
     while(VAR_9 > 0) {
   if(VAR_5 > 1)
        FUNC_3("got: len=%d %s\n", VAR_9, VAR_13);
   VAR_10 = 0;
   if((VAR_12 = FUNC_5(VAR_13, '=')) != ((void*)0))
        VAR_10 = VAR_12 - VAR_13;
   if(VAR_10 > 0) {
        if(FUNC_8(VAR_13, "TargetAddress", VAR_10) == 0) {
      char *VAR_14, *VAR_15, *VAR_16 = ((void*)0);



      VAR_15 = VAR_8->targetAddress = FUNC_6(VAR_12+1);
      if(*VAR_15 == '[') {

    if((VAR_15 = FUNC_5(VAR_15, ']')) != ((void*)0)) {
         *VAR_15++ = '\0';
         VAR_16 = VAR_8->targetAddress;
         VAR_8->targetAddress = FUNC_6(VAR_16+1);
    } else
         VAR_15 = VAR_8->targetAddress;
      }
      if((VAR_14 = FUNC_5(VAR_15, ',')) != ((void*)0)) {
    *VAR_14++ = 0;
    VAR_8->targetPortalGroupTag = FUNC_0(VAR_14);
      }
      if((VAR_14 = FUNC_5(VAR_15, ':')) != ((void*)0)) {
    *VAR_14++ = 0;
    VAR_8->port = FUNC_0(VAR_14);
      }
      if(VAR_16)
    FUNC_2(VAR_16);
        } else if(FUNC_8(VAR_13, "MaxRecvDataSegmentLength", VAR_10) == 0) {

      VAR_8->maxXmitDataSegmentLength = FUNC_9(VAR_12+1, (char **)((void*)0), 0);
        } else if(FUNC_8(VAR_13, "TargetPortalGroupTag", VAR_10) == 0) {
      VAR_8->targetPortalGroupTag = FUNC_9(VAR_12+1, (char **)((void*)0), 0);
        } else if(FUNC_8(VAR_13, "HeaderDigest", VAR_10) == 0) {
      VAR_8->headerDigest = FUNC_4(VAR_12+1, VAR_0);
        } else if(FUNC_8(VAR_13, "DataDigest", VAR_10) == 0) {
      VAR_8->dataDigest = FUNC_4(VAR_12+1, VAR_0);
        } else if(FUNC_8(VAR_13, "MaxOutstandingR2T", VAR_10) == 0)
      VAR_8->maxOutstandingR2T = FUNC_9(VAR_12+1, (char **)((void*)0), 0);







   }
   VAR_11 = FUNC_7(VAR_13) + 1;
   VAR_9 -= VAR_11;
   VAR_13 += VAR_11;
     }

}
