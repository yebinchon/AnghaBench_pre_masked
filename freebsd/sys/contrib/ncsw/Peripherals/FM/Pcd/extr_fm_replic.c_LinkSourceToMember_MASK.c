
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {scalar_t__ physicalMuramBase; int p_MemberAd; int matchTblPtr; struct TYPE_9__* h_FmPcd; } ;
typedef TYPE_1__ t_FmPcdFrmReplicMember ;
typedef TYPE_1__ t_FmPcdFrmReplicGroup ;
typedef TYPE_1__ t_FmPcd ;
typedef TYPE_1__ t_AdOfTypeContLookup ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(t_FmPcdFrmReplicGroup *VAR_0,
                               t_AdOfTypeContLookup *VAR_1,
                               t_FmPcdFrmReplicMember *VAR_2)
{
    t_FmPcd *VAR_3;

    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_0);
    FUNC_0(VAR_0->h_FmPcd);


    VAR_3 = VAR_0->h_FmPcd;

    FUNC_1(VAR_1->matchTblPtr,
        (uint32_t)(FUNC_2(VAR_2->p_MemberAd) -
                        VAR_3->physicalMuramBase));
}
