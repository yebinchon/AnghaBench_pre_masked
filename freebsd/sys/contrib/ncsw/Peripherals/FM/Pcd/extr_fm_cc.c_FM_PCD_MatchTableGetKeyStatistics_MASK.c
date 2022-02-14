
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int * t_Handle ;
struct TYPE_3__ {scalar_t__ numOfKeys; int h_Spinlock; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
typedef int t_FmPcdCcKeyStatistics ;
typedef scalar_t__ t_Error ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,int *) ;
 char* VAR_5 ;
 int FUNC_1 (int ,scalar_t__,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

t_Error FUNC_5(
        t_Handle VAR_6, uint16_t VAR_7,
        t_FmPcdCcKeyStatistics *VAR_8)
{
    t_FmPcdCcNode *VAR_9 = (t_FmPcdCcNode *)VAR_6;
    uint32_t VAR_10;
    t_Error VAR_11;

    FUNC_2(VAR_6, VAR_0);
    FUNC_2(VAR_8, VAR_2);

    VAR_10 = FUNC_3(VAR_9->h_Spinlock);

    if (VAR_7 >= VAR_9->numOfKeys)
        FUNC_1(
                VAR_4,
                VAR_1,
                ("The provided keyIndex exceeds the number of keys in this match table"));

    VAR_11 = FUNC_0(VAR_9, VAR_7, VAR_8);

    FUNC_4(VAR_9->h_Spinlock, VAR_10);

    if (VAR_11 != VAR_3)
        FUNC_1(VAR_4, VAR_11, VAR_5);

    return VAR_3;
}
