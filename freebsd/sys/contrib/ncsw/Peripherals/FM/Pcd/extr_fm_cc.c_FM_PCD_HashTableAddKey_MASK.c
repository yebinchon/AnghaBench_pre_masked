
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_8__ {int kgHashShift; struct TYPE_8__* p_Key; scalar_t__ p_Mask; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
typedef TYPE_1__ t_FmPcdCcKeyParams ;
typedef scalar_t__ t_Error ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,TYPE_1__*,int ,scalar_t__*,int *,int *) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (int ,scalar_t__,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

t_Error FUNC_4(t_Handle VAR_6, uint8_t VAR_7,
                               t_FmPcdCcKeyParams *VAR_8)
{
    t_FmPcdCcNode *VAR_9 = (t_FmPcdCcNode *)VAR_6;
    t_Handle VAR_10;
    uint8_t VAR_11;
    uint16_t VAR_12;
    t_Error VAR_13;

    FUNC_3(VAR_9, VAR_0);
    FUNC_3(VAR_8, VAR_2);
    FUNC_3(VAR_8->p_Key, VAR_2);

    if (VAR_8->p_Mask)
        FUNC_2(VAR_4, VAR_1,
                     ("Keys masks not supported for hash table"));

    VAR_13 = FUNC_1(VAR_9, VAR_7,
                                                VAR_8->p_Key,
                                                VAR_9->kgHashShift,
                                                &VAR_10, &VAR_11,
                                                &VAR_12);
    if (VAR_13)
        FUNC_2(VAR_4, VAR_13, VAR_5);

    return FUNC_0(VAR_10, VAR_3, VAR_7,
                                   VAR_8);
}
