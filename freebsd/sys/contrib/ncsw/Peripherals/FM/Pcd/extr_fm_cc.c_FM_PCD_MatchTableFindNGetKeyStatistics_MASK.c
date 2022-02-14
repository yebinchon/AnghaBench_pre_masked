
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {scalar_t__ numOfKeys; int h_Spinlock; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
typedef int t_FmPcdCcKeyStatistics ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,int *) ;
 char* VAR_3 ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

t_Error FUNC_8(
        t_Handle VAR_4, uint8_t VAR_5, uint8_t *VAR_6, uint8_t *VAR_7,
        t_FmPcdCcKeyStatistics *VAR_8)
{
    t_FmPcdCcNode *VAR_9 = (t_FmPcdCcNode *)VAR_4;
    uint16_t VAR_10;
    uint32_t VAR_11;
    t_Error VAR_12;

    FUNC_5(VAR_6, VAR_0);
    FUNC_5(VAR_8, VAR_0);

    VAR_11 = FUNC_6(VAR_9->h_Spinlock);

    VAR_12 = FUNC_1(VAR_9, VAR_5, VAR_6, VAR_7, &VAR_10);
    if (FUNC_2(VAR_12) != VAR_1)
    {
        FUNC_7(VAR_9->h_Spinlock, VAR_11);
        FUNC_4(VAR_2, VAR_12,
                     ("The received key and mask pair was not found in the "
                     "match table of the provided node"));
    }

    FUNC_0(VAR_10 < VAR_9->numOfKeys);

    VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_8);

    FUNC_7(VAR_9->h_Spinlock, VAR_11);

    if (VAR_12 != VAR_1)
        FUNC_4(VAR_2, VAR_12, VAR_3);

    return VAR_1;
}
