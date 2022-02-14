
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_1__* t_Handle ;
struct TYPE_10__ {int tsbs; int activate; scalar_t__ iprcpt; int member_0; } ;
typedef TYPE_2__ t_FmPcdCcReassmTimeoutParams ;
struct TYPE_9__ {int h_Hc; scalar_t__ physicalMuramBase; int h_Fm; } ;
typedef TYPE_1__ t_FmPcd ;
typedef int t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

t_Error FUNC_6(t_Handle VAR_10, t_Handle VAR_11)
{
    t_FmPcd *VAR_12 = (t_FmPcd*)VAR_10;
    t_FmPcdCcReassmTimeoutParams VAR_13 = { 0 };
    t_Error VAR_14 = VAR_5;
    uint8_t VAR_15;
    uint32_t VAR_16, VAR_17, VAR_18;

    FUNC_0(VAR_12);
    FUNC_0(VAR_11);

    VAR_16 = FUNC_1(VAR_12->h_Fm);
    if (VAR_16 == 0)
        FUNC_4(VAR_7, VAR_3, ("Timestamp scale"));

    VAR_16 = 32 - VAR_16;
    FUNC_3(VAR_6, VAR_18);
    VAR_17 = VAR_16 - VAR_18;

    VAR_13.iprcpt = (uint32_t)(FUNC_5(
            VAR_11) - VAR_12->physicalMuramBase);
    VAR_13.tsbs = (uint8_t)VAR_17;
    VAR_13.activate = VAR_9;
    if ((VAR_14 = FUNC_2(VAR_12->h_Hc, &VAR_13,
                                      &VAR_15)) != VAR_5)
        FUNC_4(VAR_7, VAR_14, VAR_8);

    switch (VAR_15)
    {
        case (0):
            return VAR_5;
        case (1):
            FUNC_4(VAR_7, VAR_4, ("failed to allocate TNUM"));
        case (2):
            FUNC_4(
                    VAR_7, VAR_4,
                    ("failed to allocate internal buffer from the HC-Port"));
        case (3):
            FUNC_4(VAR_7, VAR_2,
                         ("'Disable Timeout Task' with invalid IPRCPT"));
        case (4):
            FUNC_4(VAR_7, VAR_0, ("too many timeout tasks"));
        case (5):
            FUNC_4(VAR_7, VAR_1, ("invalid sub command"));
        default:
            FUNC_4(VAR_7, VAR_2, VAR_8);
    }
    return VAR_5;
}
