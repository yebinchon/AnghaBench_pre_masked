
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {TYPE_2__* p_MemberAd; } ;
typedef TYPE_1__ t_FmPcdFrmReplicMember ;
struct TYPE_22__ {int shadowLock; struct TYPE_22__* p_CcShadow; struct TYPE_22__* p_SourceTd; int h_ShadowSpinlock; struct TYPE_22__* h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdFrmReplicGroup ;
typedef TYPE_2__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,char*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static t_Error FUNC_11(t_FmPcdFrmReplicGroup *VAR_4,
                                              t_FmPcdFrmReplicMember *VAR_5,
                                              t_FmPcdFrmReplicMember *VAR_6,
                                              bool VAR_7,
                                              bool VAR_8)
{
    t_FmPcd *VAR_9;
    t_FmPcdFrmReplicMember VAR_10;
    t_Error VAR_11;

    FUNC_0(VAR_4);
    FUNC_0(VAR_4->h_FmPcd);

    VAR_9 = VAR_4->h_FmPcd;
    FUNC_0(VAR_9->p_CcShadow);

    if (!FUNC_10(VAR_9->h_ShadowSpinlock, &VAR_9->shadowLock))
        return FUNC_2(VAR_0);

    if (VAR_7)
    {
        FUNC_1(VAR_9->p_CcShadow);
        FUNC_6(VAR_4, VAR_9->p_CcShadow, VAR_5);


        VAR_11 = FUNC_7(VAR_4,
                               VAR_4->p_SourceTd,
                               VAR_9->p_CcShadow );

        FUNC_8(VAR_9->shadowLock);
        if (VAR_11)
            FUNC_9(VAR_3, VAR_11, ("Modify source Descriptor in BuildShadowAndModifyDescriptor"));

    }
    else
    {
        FUNC_4(VAR_9->p_CcShadow,
                   VAR_6->p_MemberAd,
                   VAR_2);


        FUNC_3(VAR_9->p_CcShadow, VAR_8);

        VAR_10.p_MemberAd = VAR_9->p_CcShadow;


        FUNC_5(VAR_4, &VAR_10, VAR_5);


        VAR_11 = FUNC_7(VAR_4,
                               VAR_6->p_MemberAd,
                               VAR_9->p_CcShadow);

        FUNC_8(VAR_9->shadowLock);
        if (VAR_11)
            FUNC_9(VAR_3, VAR_11, ("Modify Descriptor in BuildShadowAndModifyDescriptor"));
    }


    return VAR_1;
}
