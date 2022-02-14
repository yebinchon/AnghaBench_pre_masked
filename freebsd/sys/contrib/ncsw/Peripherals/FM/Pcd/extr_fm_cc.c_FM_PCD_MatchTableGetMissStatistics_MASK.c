
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int * t_Handle ;
struct TYPE_3__ {int h_Spinlock; int numOfKeys; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
typedef int t_FmPcdCcKeyStatistics ;
typedef scalar_t__ t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

t_Error FUNC_5(
        t_Handle VAR_5, t_FmPcdCcKeyStatistics *VAR_6)
{
    t_FmPcdCcNode *VAR_7 = (t_FmPcdCcNode *)VAR_5;
    uint32_t VAR_8;
    t_Error VAR_9;

    FUNC_2(VAR_5, VAR_0);
    FUNC_2(VAR_6, VAR_1);

    VAR_8 = FUNC_3(VAR_7->h_Spinlock);

    VAR_9 = FUNC_0(VAR_7, VAR_7->numOfKeys,
                                     VAR_6);

    FUNC_4(VAR_7->h_Spinlock, VAR_8);

    if (VAR_9 != VAR_2)
        FUNC_1(VAR_3, VAR_9, VAR_4);

    return VAR_2;
}
