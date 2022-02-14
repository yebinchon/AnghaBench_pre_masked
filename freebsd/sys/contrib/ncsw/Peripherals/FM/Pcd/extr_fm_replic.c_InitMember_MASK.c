
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ p_MemberAd; int * h_Manip; int node; } ;
typedef TYPE_1__ t_FmPcdFrmReplicMember ;
struct TYPE_12__ {int h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdFrmReplicGroup ;
struct TYPE_13__ {int * h_Manip; } ;
typedef TYPE_3__ t_FmPcdCcNextEngineParams ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__,int *,TYPE_3__*,int ) ;
 int FUNC_6 (int ,int ,char*) ;

__attribute__((used)) static t_FmPcdFrmReplicMember* FUNC_7(t_FmPcdFrmReplicGroup *VAR_3,
                                          t_FmPcdCcNextEngineParams *VAR_4,
                                          bool VAR_5)
{
    t_FmPcdFrmReplicMember *VAR_6 = ((void*)0);

    FUNC_0(VAR_3);


    VAR_6 = FUNC_2(VAR_3);
    if (!VAR_6)
    {
        FUNC_6(VAR_2, VAR_0, ("Available member"));
        return ((void*)0);
    }
    VAR_6->h_Manip = ((void*)0);


    FUNC_4((uint8_t*)VAR_6->p_MemberAd, 0, VAR_1);

    FUNC_3(&VAR_6->node);


    FUNC_5(VAR_6->p_MemberAd,
               ((void*)0),
               VAR_4,
               VAR_3->h_FmPcd);


    if (VAR_4->h_Manip)
        VAR_6->h_Manip = VAR_4->h_Manip;


    FUNC_1(VAR_6->p_MemberAd, VAR_5);

    return VAR_6;
}
