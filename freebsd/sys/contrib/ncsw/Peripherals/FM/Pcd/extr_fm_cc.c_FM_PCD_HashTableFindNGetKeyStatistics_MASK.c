
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int kgHashShift; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
typedef TYPE_1__ t_FmPcdCcNode ;
typedef TYPE_1__ t_FmPcdCcKeyStatistics ;
typedef scalar_t__ t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__,TYPE_1__*,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__,TYPE_1__*,int ,scalar_t__*,TYPE_1__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

t_Error FUNC_4(
        t_Handle VAR_4, uint8_t VAR_5, uint8_t *VAR_6,
        t_FmPcdCcKeyStatistics *VAR_7)
{
    t_FmPcdCcNode *VAR_8 = (t_FmPcdCcNode *)VAR_4;
    t_Handle VAR_9;
    uint8_t VAR_10;
    uint16_t VAR_11;
    t_Error VAR_12;

    FUNC_3(VAR_8, VAR_0);
    FUNC_3(VAR_6, VAR_1);
    FUNC_3(VAR_7, VAR_1);

    VAR_12 = FUNC_1(VAR_8, VAR_5, VAR_6,
                                                VAR_8->kgHashShift,
                                                &VAR_9, &VAR_10,
                                                &VAR_11);
    if (VAR_12)
        FUNC_2(VAR_2, VAR_12, VAR_3);

    return FUNC_0(VAR_9, VAR_5, VAR_6,
                                                  ((void*)0), VAR_7);
}
