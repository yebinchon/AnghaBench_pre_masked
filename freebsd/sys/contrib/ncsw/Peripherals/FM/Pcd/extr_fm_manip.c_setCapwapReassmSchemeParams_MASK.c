
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int t_Handle ;
struct TYPE_16__ {int numOfUsedExtracts; int privateDflt0; int privateDflt1; int numOfUsedDflts; TYPE_6__* dflts; TYPE_5__* extractArray; } ;
struct TYPE_11__ {scalar_t__ grpId; int h_CcTree; } ;
struct TYPE_12__ {TYPE_2__ cc; } ;
struct TYPE_10__ {int numOfDistinctionUnits; scalar_t__* unitIds; int h_NetEnv; } ;
struct TYPE_17__ {TYPE_7__ keyExtractAndHashParams; int useHash; TYPE_3__ kgNextEngineParams; int nextEngine; TYPE_1__ netEnvParams; } ;
typedef TYPE_8__ t_FmPcdKgSchemeParams ;
typedef int t_FmPcd ;
struct TYPE_15__ {int dfltSelect; int type; } ;
struct TYPE_13__ {int offset; int size; void* action; int src; } ;
struct TYPE_14__ {TYPE_4__ extractNonHdr; void* type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(t_FmPcd* VAR_11,
                                        t_FmPcdKgSchemeParams *VAR_12,
                                        t_Handle VAR_13, uint8_t VAR_14)
{
    uint8_t VAR_15;


    VAR_12->netEnvParams.numOfDistinctionUnits = 1;
    VAR_15 = FUNC_2(
            VAR_11, FUNC_1(VAR_12->netEnvParams.h_NetEnv),
            VAR_2, VAR_0, 0);
    FUNC_0(VAR_15 != VAR_1);
    VAR_12->netEnvParams.unitIds[0] = VAR_15;


    VAR_12->nextEngine = VAR_5;
    VAR_12->kgNextEngineParams.cc.h_CcTree = VAR_13;
    VAR_12->kgNextEngineParams.cc.grpId = VAR_14;
    VAR_12->useHash = VAR_3;


    VAR_12->keyExtractAndHashParams.numOfUsedExtracts = 2;
    VAR_12->keyExtractAndHashParams.extractArray[0].type =
            VAR_8;
    VAR_12->keyExtractAndHashParams.extractArray[0].extractNonHdr.src =
            VAR_7;
    VAR_12->keyExtractAndHashParams.extractArray[0].extractNonHdr.action =
            VAR_4;
    VAR_12->keyExtractAndHashParams.extractArray[0].extractNonHdr.offset = 20;
    VAR_12->keyExtractAndHashParams.extractArray[0].extractNonHdr.size = 4;
    VAR_12->keyExtractAndHashParams.extractArray[1].type =
            VAR_8;
    VAR_12->keyExtractAndHashParams.extractArray[1].extractNonHdr.src =
            VAR_6;
    VAR_12->keyExtractAndHashParams.extractArray[1].extractNonHdr.action =
            VAR_4;
    VAR_12->keyExtractAndHashParams.extractArray[1].extractNonHdr.offset = 0;
    VAR_12->keyExtractAndHashParams.extractArray[1].extractNonHdr.size = 1;

    VAR_12->keyExtractAndHashParams.privateDflt0 = 0x0;
    VAR_12->keyExtractAndHashParams.privateDflt1 = 0x0;
    VAR_12->keyExtractAndHashParams.numOfUsedDflts = 1;
    VAR_12->keyExtractAndHashParams.dflts[0].type = VAR_10;
    VAR_12->keyExtractAndHashParams.dflts[0].dfltSelect = VAR_9;
}
