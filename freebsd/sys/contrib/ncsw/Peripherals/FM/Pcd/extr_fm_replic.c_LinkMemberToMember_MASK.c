
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {scalar_t__ p_MemberAd; } ;
typedef TYPE_1__ t_FmPcdFrmReplicMember ;
struct TYPE_10__ {TYPE_3__* h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdFrmReplicGroup ;
struct TYPE_11__ {int physicalMuramBase; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_12__ {int res; } ;
typedef TYPE_4__ t_AdOfTypeResult ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(t_FmPcdFrmReplicGroup *VAR_2,
                               t_FmPcdFrmReplicMember *VAR_3,
                               t_FmPcdFrmReplicMember *VAR_4)
{
    t_AdOfTypeResult *VAR_5 = (t_AdOfTypeResult*)VAR_3->p_MemberAd;
    t_AdOfTypeResult *VAR_6 = ((void*)0);
    t_FmPcd *VAR_7;
    uint32_t VAR_8 = 0;


    if (VAR_4)
    {
        VAR_6 = (t_AdOfTypeResult*)VAR_4->p_MemberAd;
        VAR_7 = VAR_2->h_FmPcd;
        VAR_8 = (FUNC_1(VAR_6) - (VAR_7->physicalMuramBase));
        VAR_8 = ((VAR_8>>VAR_0)<< VAR_1);
    }


    FUNC_0(VAR_5->res, VAR_8);
}
