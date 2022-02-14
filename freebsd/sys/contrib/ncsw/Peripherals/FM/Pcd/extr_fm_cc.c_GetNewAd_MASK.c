
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * t_Handle ;
struct TYPE_5__ {scalar_t__ h_FmPcd; } ;
typedef TYPE_1__ t_FmPcdCcTree ;
struct TYPE_6__ {scalar_t__ maxNumOfKeys; scalar_t__ h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdCcNode ;
struct TYPE_7__ {int * p_CcShadow; } ;
typedef TYPE_3__ t_FmPcd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static __inline__ t_Handle FUNC_3(t_Handle VAR_4, bool VAR_5)
{
    t_FmPcd *VAR_6;
    t_Handle VAR_7;

    if (VAR_5)
        VAR_6 = (t_FmPcd *)(((t_FmPcdCcTree *)VAR_4)->h_FmPcd);
    else
        VAR_6 = (t_FmPcd *)(((t_FmPcdCcNode *)VAR_4)->h_FmPcd);

    if ((VAR_5 && VAR_6->p_CcShadow)
            || (!VAR_5 && ((t_FmPcdCcNode *)VAR_4)->maxNumOfKeys))
    {
        if (!VAR_6->p_CcShadow)
        {
            FUNC_2(VAR_3, VAR_0, ("CC Shadow not allocated"));
            return ((void*)0);
        }

        VAR_7 = VAR_6->p_CcShadow;
    }
    else
    {
        VAR_7 = (t_Handle)FUNC_0(FUNC_1(VAR_6),
                                           VAR_1,
                                           VAR_2);
        if (!VAR_7)
        {
            FUNC_2(VAR_3, VAR_0, ("MURAM allocation for CC node action descriptor"));
            return ((void*)0);
        }
    }

    return VAR_7;
}
