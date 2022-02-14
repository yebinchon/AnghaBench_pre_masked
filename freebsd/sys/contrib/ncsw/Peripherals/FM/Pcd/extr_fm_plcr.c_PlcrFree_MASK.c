
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* p_FmPcdPlcr; int guestId; int h_Fm; } ;
typedef TYPE_2__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_6__ {scalar_t__ h_HwSpinlock; scalar_t__ h_SwSpinlock; scalar_t__ partNumOfPlcrProfiles; int partPlcrProfilesBase; int sharedProfilesIds; scalar_t__ numOfSharedProfiles; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

t_Error FUNC_4(t_FmPcd *VAR_4)
{
    FUNC_0(VAR_4->h_Fm, VAR_3, 0, VAR_1);
    FUNC_0(VAR_4->h_Fm, VAR_3, 0, VAR_2);

    if (VAR_4->p_FmPcdPlcr->numOfSharedProfiles)
        FUNC_1(VAR_4,
                           VAR_4->p_FmPcdPlcr->numOfSharedProfiles,
                           VAR_4->p_FmPcdPlcr->sharedProfilesIds);

    if (VAR_4->p_FmPcdPlcr->partNumOfPlcrProfiles)
        FUNC_2(VAR_4,
                                     VAR_4->p_FmPcdPlcr->partPlcrProfilesBase,
                                     VAR_4->p_FmPcdPlcr->partNumOfPlcrProfiles,
                                     VAR_4->guestId);

    if (VAR_4->p_FmPcdPlcr->h_SwSpinlock)
        FUNC_3(VAR_4->p_FmPcdPlcr->h_SwSpinlock);

    if (VAR_4->p_FmPcdPlcr->h_HwSpinlock)
        FUNC_3(VAR_4->p_FmPcdPlcr->h_HwSpinlock);

    return VAR_0;
}
