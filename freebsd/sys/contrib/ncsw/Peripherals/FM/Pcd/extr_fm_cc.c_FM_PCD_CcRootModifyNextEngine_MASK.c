
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_11__ {scalar_t__ h_FmPcd; } ;
typedef TYPE_1__ t_FmPcdCcTree ;
typedef TYPE_1__ t_FmPcdCcNextEngineParams ;
typedef TYPE_1__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_7 ;

t_Error FUNC_7(
        t_Handle VAR_8, uint8_t VAR_9, uint8_t VAR_10,
        t_FmPcdCcNextEngineParams *VAR_11)
{
    t_FmPcd *VAR_12;
    t_FmPcdCcTree *VAR_13 = (t_FmPcdCcTree *)VAR_8;
    t_Error VAR_14 = VAR_4;

    FUNC_6(VAR_11, VAR_3);
    FUNC_6(VAR_13, VAR_2);
    VAR_12 = (t_FmPcd *)VAR_13->h_FmPcd;
    FUNC_6(VAR_12, VAR_1);

    if (!FUNC_3(VAR_12))
    {
        FUNC_0(VAR_7, ("FmPcdLockTryLockAll failed"));
        return FUNC_1(VAR_0);
    }

    VAR_14 = FUNC_2(VAR_12, VAR_13, VAR_9, VAR_10,
                                           VAR_11);
    FUNC_4(VAR_12);

    if (VAR_14)
    {
        FUNC_5(VAR_5, VAR_14, VAR_6);
    }

    return VAR_4;
}
