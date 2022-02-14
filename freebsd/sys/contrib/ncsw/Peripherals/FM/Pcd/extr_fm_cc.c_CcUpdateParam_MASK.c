
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int * t_Handle ;
struct TYPE_12__ {scalar_t__ h_CapwapReassemblyManip; scalar_t__ h_IpReassemblyManip; } ;
typedef TYPE_4__ t_FmPcdCcTree ;
struct TYPE_13__ {size_t numOfKeys; int * h_AdTable; TYPE_6__* keyAndNextEngineParams; } ;
typedef TYPE_5__ t_FmPcdCcNode ;
struct TYPE_9__ {TYPE_5__* h_CcNode; } ;
struct TYPE_10__ {TYPE_1__ ccParams; } ;
struct TYPE_11__ {scalar_t__ nextEngine; scalar_t__ h_Manip; TYPE_2__ params; } ;
struct TYPE_14__ {TYPE_3__ nextEngineParams; } ;
typedef TYPE_6__ t_FmPcdCcKeyAndNextEngineParams ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int *,scalar_t__,int *,int,int,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static t_Error FUNC_4(
        t_Handle VAR_6, t_Handle VAR_7, t_Handle VAR_8,
        t_FmPcdCcKeyAndNextEngineParams *VAR_9,
        uint16_t VAR_10, t_Handle VAR_11, bool VAR_12, uint16_t VAR_13,
        t_Handle VAR_14, bool VAR_15)
{
    t_FmPcdCcNode *VAR_16;
    t_Error VAR_17;
    uint16_t VAR_18 = 0;
    int VAR_19 = 0;
    t_FmPcdCcTree *VAR_20 = (t_FmPcdCcTree *)VAR_14;

    VAR_13++;

    if (VAR_20->h_IpReassemblyManip)
    {
        VAR_17 = FUNC_1(VAR_6, VAR_7, VAR_8,
                               VAR_20->h_IpReassemblyManip, ((void*)0), VAR_12,
                               VAR_13, VAR_14, VAR_15);
        if (VAR_17)
            FUNC_3(VAR_2, VAR_17, VAR_3);
    }

    if (VAR_20->h_CapwapReassemblyManip)
    {
        VAR_17 = FUNC_1(VAR_6, VAR_7, VAR_8,
                               VAR_20->h_CapwapReassemblyManip, ((void*)0), VAR_12,
                               VAR_13, VAR_14, VAR_15);
        if (VAR_17)
            FUNC_3(VAR_2, VAR_17, VAR_3);
    }

    if (VAR_10)
    {
        for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++)
        {
            if (VAR_19 == 0)
                VAR_11 = FUNC_2(VAR_11, VAR_19*VAR_1);
            else
                VAR_11 = FUNC_2(VAR_11, VAR_1);

            if (VAR_9[VAR_19].nextEngineParams.nextEngine
                    == VAR_4)
            {
                VAR_16 =
                        VAR_9[VAR_19].nextEngineParams.params.ccParams.h_CcNode;
                FUNC_0(VAR_16);

                if (VAR_9[VAR_19].nextEngineParams.h_Manip)
                {
                    VAR_17 =
                            FUNC_1(
                                    VAR_6,
                                    ((void*)0),
                                    VAR_8,
                                    VAR_9[VAR_19].nextEngineParams.h_Manip,
                                    VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
                    if (VAR_17)
                        FUNC_3(VAR_2, VAR_17, VAR_3);
                }

                if (VAR_16->keyAndNextEngineParams[VAR_16->numOfKeys].nextEngineParams.nextEngine
                        != VAR_5)
                    VAR_18 = (uint8_t)(VAR_16->numOfKeys + 1);
                else
                    VAR_18 = VAR_16->numOfKeys;

                VAR_17 = FUNC_4(VAR_6, VAR_7, VAR_8,
                                    VAR_16->keyAndNextEngineParams, VAR_18,
                                    VAR_16->h_AdTable, VAR_12, VAR_13,
                                    VAR_14, VAR_15);
                if (VAR_17)
                    FUNC_3(VAR_2, VAR_17, VAR_3);
            }
            else
            {
                if (VAR_9[VAR_19].nextEngineParams.h_Manip)
                {
                    VAR_17 =
                            FUNC_1(
                                    VAR_6,
                                    ((void*)0),
                                    VAR_8,
                                    VAR_9[VAR_19].nextEngineParams.h_Manip,
                                    VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
                    if (VAR_17)
                        FUNC_3(VAR_2, VAR_17, VAR_3);
                }
            }
        }
    }

    return VAR_0;
}
