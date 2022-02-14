
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_12__ {scalar_t__ h_Manip; int nextEngine; } ;
typedef TYPE_2__ t_NetEnvParams ;
typedef scalar_t__ t_Handle ;
struct TYPE_13__ {int numOfEntries; scalar_t__ h_CapwapReassemblyManip; int numOfGrps; TYPE_1__* fmPcdGroupParam; int ccTreeBaseAddr; } ;
typedef TYPE_3__ t_FmPcdCcTree ;
typedef TYPE_2__ t_FmPcdCcNextEngineParams ;
typedef scalar_t__ t_Error ;
struct TYPE_11__ {int baseGroupEntry; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,TYPE_3__*,scalar_t__,size_t) ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_5 (int ,int *,TYPE_2__*,scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

t_Error FUNC_10(t_Handle VAR_9, t_Handle VAR_10,
                          t_Handle VAR_11, t_Handle VAR_12,
                          bool VAR_13)
{
    t_FmPcdCcTree *VAR_14 = (t_FmPcdCcTree *)VAR_10;
    t_FmPcdCcNextEngineParams VAR_15;
    t_NetEnvParams VAR_16;
    t_Handle VAR_17;
    uint8_t VAR_18;
    t_Error VAR_19;

    FUNC_0(VAR_14);


    FUNC_9(&VAR_15, 0, sizeof(t_FmPcdCcNextEngineParams));
    FUNC_9(&VAR_16, 0, sizeof(t_NetEnvParams));

    VAR_17 = FUNC_8(VAR_14->ccTreeBaseAddr);

    if (VAR_14->numOfEntries > (VAR_5 - 1))
        FUNC_7(VAR_6, VAR_2, ("need one free entries for CPR"));

    VAR_15.nextEngine = VAR_8;
    VAR_15.h_Manip = VAR_12;


    VAR_19 = FUNC_2(VAR_14);
    if (VAR_19)
        return FUNC_3(VAR_0);

    if (VAR_14->h_CapwapReassemblyManip == VAR_12)
    {
        FUNC_1(VAR_14);
        return VAR_3;
    }

    if ((VAR_14->h_CapwapReassemblyManip)
            && (VAR_14->h_CapwapReassemblyManip != VAR_12))
    {
        FUNC_1(VAR_14);
        FUNC_7(VAR_6, VAR_1,
                     ("This tree was previously updated with different CPR"));
    }

    VAR_18 = VAR_14->numOfGrps++;
    VAR_14->fmPcdGroupParam[VAR_18].baseGroupEntry =
            (VAR_5 - 1);

    if (VAR_13)
    {
        VAR_19 = FUNC_4(VAR_9, VAR_11,
                                                VAR_14,
                                                VAR_12, VAR_18);
        if (VAR_19)
        {
            VAR_14->numOfGrps--;
            FUNC_1(VAR_14);
            FUNC_7(VAR_6, VAR_19, VAR_7);
        }
    }

    FUNC_5(
            FUNC_6(VAR_17, (VAR_5-1) * VAR_4),
            ((void*)0), &VAR_15, VAR_9);

    VAR_14->h_CapwapReassemblyManip = VAR_12;

    FUNC_1(VAR_14);

    return VAR_3;
}
