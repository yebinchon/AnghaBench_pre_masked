
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_7__ {scalar_t__ h_FmPcd; int * h_Spinlock; scalar_t__ p_Hmct; scalar_t__ h_NextManip; scalar_t__ owner; } ;
typedef TYPE_1__ t_FmPcdManip ;
struct TYPE_8__ {int h_FmMuram; } ;
typedef TYPE_2__ t_FmPcd ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;

t_Error FUNC_10(t_Handle VAR_5)
{
    t_FmPcdManip *VAR_6 = (t_FmPcdManip *)VAR_5;

    FUNC_7(VAR_6, VAR_0);

    if (VAR_6->owner)
        FUNC_5(
                VAR_4,
                VAR_1,
                ("This manipulation node not be removed because this node is occupied, first - unbind this node "));

    if (VAR_6->h_NextManip)
    {
        FUNC_4(VAR_6->h_NextManip, ((void*)0));
        FUNC_1(VAR_6->h_NextManip, VAR_3);
    }

    if (VAR_6->p_Hmct
            && (FUNC_3(VAR_6) || !FUNC_2(VAR_6)))
        FUNC_0(((t_FmPcd *)VAR_6->h_FmPcd)->h_FmMuram,
                         VAR_6->p_Hmct);

    if (VAR_6->h_Spinlock)
    {
        FUNC_9(VAR_6->h_Spinlock);
        VAR_6->h_Spinlock = ((void*)0);
    }

    FUNC_6(VAR_6, VAR_6->h_FmPcd);

    FUNC_8(VAR_5);

    return VAR_2;
}
