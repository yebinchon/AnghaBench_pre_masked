
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {int h_Spinlock; scalar_t__ h_FmPcd; scalar_t__ h_Ad; scalar_t__ h_TmpAd; scalar_t__ maxNumOfKeys; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
struct TYPE_6__ {int h_FmMuram; } ;
typedef TYPE_2__ t_FmPcd ;
typedef int t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int *,scalar_t__,TYPE_1__*,int *,int *) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static t_Error FUNC_7(t_Handle VAR_5)
{
    t_FmPcdCcNode *VAR_6 = (t_FmPcdCcNode *)VAR_5;
    uint32_t VAR_7;

    FUNC_0(VAR_6);

    VAR_7 = FUNC_5(VAR_6->h_Spinlock);

    if (!VAR_6->h_Ad)
    {
        if (VAR_6->maxNumOfKeys)
            VAR_6->h_Ad = VAR_6->h_TmpAd;
        else
            VAR_6->h_Ad = (t_Handle)FUNC_1(
                    ((t_FmPcd *)(VAR_6->h_FmPcd))->h_FmMuram,
                    VAR_2, VAR_3);

        FUNC_6(VAR_6->h_Spinlock, VAR_7);

        if (!VAR_6->h_Ad)
            FUNC_4(VAR_4, VAR_0,
                         ("MURAM allocation for CC action descriptor"));

        FUNC_3(VAR_6->h_Ad, 0, VAR_2);

        FUNC_2(VAR_6->h_Ad, ((void*)0), VAR_6->h_FmPcd,
                               VAR_6, ((void*)0), ((void*)0));
    }
    else
        FUNC_6(VAR_6->h_Spinlock, VAR_7);

    return VAR_1;
}
