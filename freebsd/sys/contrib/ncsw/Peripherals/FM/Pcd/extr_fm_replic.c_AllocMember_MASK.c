
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* t_Handle ;
struct TYPE_11__ {int node; int * p_MemberAd; } ;
typedef TYPE_2__ t_FmPcdFrmReplicMember ;
struct TYPE_10__ {int availableMembersList; int h_FmPcd; } ;
typedef TYPE_1__ t_FmPcdFrmReplicGroup ;
typedef int t_Error ;
typedef int t_AdOfTypeResult ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;

__attribute__((used)) static t_Error FUNC_9(t_FmPcdFrmReplicGroup *VAR_5)
{
    t_FmPcdFrmReplicMember *VAR_6;
    t_Handle VAR_7;

    FUNC_0(VAR_5);

    VAR_7 = FUNC_2(VAR_5->h_FmPcd);
    FUNC_0(VAR_7);


    VAR_6 = (t_FmPcdFrmReplicMember *)FUNC_7(sizeof(t_FmPcdFrmReplicMember));
    if (!VAR_6)
        FUNC_5(VAR_4, VAR_0, ("Frame replicator member"));

    FUNC_8(VAR_6, 0 ,sizeof(t_FmPcdFrmReplicMember));


    VAR_6->p_MemberAd =
        (t_AdOfTypeResult*)FUNC_1(VAR_7,
                                             VAR_2,
                                             VAR_3);
    if (!VAR_6->p_MemberAd)
    {
        FUNC_6(VAR_6);
        FUNC_5(VAR_4, VAR_0, ("member AD table"));
    }
    FUNC_3((uint8_t*)VAR_6->p_MemberAd, 0, VAR_2);


    FUNC_4(&VAR_6->node, &(VAR_5->availableMembersList));

    return VAR_1;
}
