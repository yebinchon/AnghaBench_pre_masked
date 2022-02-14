
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef int t_Handle ;
struct TYPE_22__ {int numOfUsedExtracts; int privateDflt0; int privateDflt1; size_t numOfUsedDflts; TYPE_2__* dflts; TYPE_10__* extractArray; } ;
struct TYPE_18__ {scalar_t__ grpId; int h_CcTree; } ;
struct TYPE_19__ {TYPE_4__ cc; } ;
struct TYPE_17__ {int numOfDistinctionUnits; scalar_t__* unitIds; int h_NetEnv; } ;
struct TYPE_14__ {int useHash; TYPE_8__ keyExtractAndHashParams; TYPE_5__ kgNextEngineParams; int nextEngine; TYPE_3__ netEnvParams; } ;
typedef TYPE_11__ t_FmPcdKgSchemeParams ;
typedef int t_FmPcd ;
typedef scalar_t__ e_FmPcdKgKnownFieldsDfltTypes ;
struct TYPE_15__ {int size; int offset; } ;
struct TYPE_20__ {int ipv6; int ipv4; } ;
struct TYPE_21__ {TYPE_1__ fromHdr; TYPE_6__ fullField; } ;
struct TYPE_23__ {int ignoreProtocolValidation; TYPE_7__ extractByHdrType; void* type; void* hdr; } ;
struct TYPE_16__ {int dfltSelect; scalar_t__ type; } ;
struct TYPE_13__ {TYPE_9__ extractByHdr; void* type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,void*,int,int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_3(t_FmPcd* VAR_17,
                                    t_FmPcdKgSchemeParams *VAR_18,
                                    t_Handle VAR_19, bool VAR_20,
                                    uint8_t VAR_21)
{
    uint32_t VAR_22;
    uint8_t VAR_23;


    VAR_18->netEnvParams.numOfDistinctionUnits = 2;
    if (VAR_20)
        VAR_23 = FUNC_2(
                VAR_17, FUNC_1(VAR_18->netEnvParams.h_NetEnv),
                VAR_3, VAR_0, 0);
    else
        VAR_23 = FUNC_2(
                VAR_17, FUNC_1(VAR_18->netEnvParams.h_NetEnv),
                VAR_4, VAR_0, 0);
    FUNC_0(VAR_23 != VAR_2);
    VAR_18->netEnvParams.unitIds[0] = VAR_23;

    VAR_23 = FUNC_2(
            VAR_17, FUNC_1(VAR_18->netEnvParams.h_NetEnv),
            VAR_5, VAR_0, 0);
    FUNC_0(VAR_23 != VAR_2);
    VAR_18->netEnvParams.unitIds[1] = VAR_23;


    VAR_18->nextEngine = VAR_12;
    VAR_18->kgNextEngineParams.cc.h_CcTree = VAR_19;
    VAR_18->kgNextEngineParams.cc.grpId = VAR_21;
    VAR_18->useHash = VAR_11;


    if (VAR_20 == VAR_11)
    {
        VAR_18->keyExtractAndHashParams.numOfUsedExtracts = 4;
        VAR_18->keyExtractAndHashParams.extractArray[0].type =
                VAR_13;
        VAR_18->keyExtractAndHashParams.extractArray[0].extractByHdr.type =
                VAR_15;
        VAR_18->keyExtractAndHashParams.extractArray[0].extractByHdr.hdr =
                VAR_3;
        VAR_18->keyExtractAndHashParams.extractArray[0].extractByHdr.extractByHdrType.fullField.ipv4 =
                VAR_6;
        VAR_18->keyExtractAndHashParams.extractArray[1].type =
                VAR_13;
        VAR_18->keyExtractAndHashParams.extractArray[1].extractByHdr.type =
                VAR_15;
        VAR_18->keyExtractAndHashParams.extractArray[1].extractByHdr.hdr =
                VAR_3;
        VAR_18->keyExtractAndHashParams.extractArray[1].extractByHdr.extractByHdrType.fullField.ipv4 =
                VAR_8;
        VAR_18->keyExtractAndHashParams.extractArray[2].type =
                VAR_13;
        VAR_18->keyExtractAndHashParams.extractArray[2].extractByHdr.type =
                VAR_15;
        VAR_18->keyExtractAndHashParams.extractArray[2].extractByHdr.hdr =
                VAR_3;
        VAR_18->keyExtractAndHashParams.extractArray[2].extractByHdr.extractByHdrType.fullField.ipv4 =
                VAR_7;
        VAR_18->keyExtractAndHashParams.extractArray[3].type =
                VAR_13;
        VAR_18->keyExtractAndHashParams.extractArray[3].extractByHdr.hdr =
                VAR_3;
        VAR_18->keyExtractAndHashParams.extractArray[3].extractByHdr.type =
                VAR_14;
        VAR_18->keyExtractAndHashParams.extractArray[3].extractByHdr.ignoreProtocolValidation =
                VAR_0;
        VAR_18->keyExtractAndHashParams.extractArray[3].extractByHdr.extractByHdrType.fromHdr.size =
                2;
        VAR_18->keyExtractAndHashParams.extractArray[3].extractByHdr.extractByHdrType.fromHdr.offset =
                4;
    }
    else
    {
        VAR_18->keyExtractAndHashParams.numOfUsedExtracts = 3;
        VAR_18->keyExtractAndHashParams.extractArray[0].type =
                VAR_13;
        VAR_18->keyExtractAndHashParams.extractArray[0].extractByHdr.type =
                VAR_15;
        VAR_18->keyExtractAndHashParams.extractArray[0].extractByHdr.hdr =
                VAR_4;
        VAR_18->keyExtractAndHashParams.extractArray[0].extractByHdr.extractByHdrType.fullField.ipv6 =
                VAR_9;
        VAR_18->keyExtractAndHashParams.extractArray[1].type =
                VAR_13;
        VAR_18->keyExtractAndHashParams.extractArray[1].extractByHdr.type =
                VAR_15;
        VAR_18->keyExtractAndHashParams.extractArray[1].extractByHdr.hdr =
                VAR_4;
        VAR_18->keyExtractAndHashParams.extractArray[1].extractByHdr.extractByHdrType.fullField.ipv6 =
                VAR_10;
        VAR_18->keyExtractAndHashParams.extractArray[2].type =
                VAR_13;
        VAR_18->keyExtractAndHashParams.extractArray[2].extractByHdr.hdr =
                VAR_5;
        VAR_18->keyExtractAndHashParams.extractArray[2].extractByHdr.type =
                VAR_14;
        VAR_18->keyExtractAndHashParams.extractArray[2].extractByHdr.extractByHdrType.fromHdr.size =
                4;
        VAR_18->keyExtractAndHashParams.extractArray[2].extractByHdr.extractByHdrType.fromHdr.offset =
                4;
        VAR_18->keyExtractAndHashParams.extractArray[2].extractByHdr.ignoreProtocolValidation =
                VAR_11;
    }

    VAR_18->keyExtractAndHashParams.privateDflt0 = 0x01020304;
    VAR_18->keyExtractAndHashParams.privateDflt1 = 0x11121314;
    VAR_18->keyExtractAndHashParams.numOfUsedDflts =
            VAR_1;
    for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++)
    {
        VAR_18->keyExtractAndHashParams.dflts[VAR_22].type =
                (e_FmPcdKgKnownFieldsDfltTypes)VAR_22;
        VAR_18->keyExtractAndHashParams.dflts[VAR_22].dfltSelect =
                VAR_16;
    }
}
