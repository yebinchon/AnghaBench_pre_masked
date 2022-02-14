
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {size_t numOfSharedProfiles; int * sharedProfilesIds; TYPE_1__* portsMapping; } ;
typedef TYPE_2__ t_FmPcdPlcr ;
struct TYPE_6__ {TYPE_2__* p_FmPcdPlcr; } ;
typedef TYPE_3__ t_FmPcd ;
typedef int t_Error ;
typedef int e_FmPcdProfileTypeSelection ;
struct TYPE_4__ {size_t numOfProfiles; size_t profilesBase; scalar_t__ h_FmPort; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;



t_Error FUNC_1(t_Handle VAR_5,
                                              e_FmPcdProfileTypeSelection VAR_6,
                                              t_Handle VAR_7,
                                              uint16_t VAR_8,
                                              uint16_t *VAR_9)
{
    t_FmPcd *VAR_10 = (t_FmPcd*)VAR_5;
    t_FmPcdPlcr *VAR_11 = VAR_10->p_FmPcdPlcr;
    uint8_t VAR_12;

    switch (VAR_6)
    {
        case 129:

            for (VAR_12=0;VAR_12<VAR_3;VAR_12++)
                if (VAR_10->p_FmPcdPlcr->portsMapping[VAR_12].h_FmPort == VAR_7)
                    break;
            if (VAR_12 == VAR_3)
                FUNC_0(VAR_4, VAR_1 , ("Invalid port handle."));

            if (!VAR_10->p_FmPcdPlcr->portsMapping[VAR_12].numOfProfiles)
                FUNC_0(VAR_4, VAR_0 , ("Port has no allocated profiles"));
            if (VAR_8 >= VAR_10->p_FmPcdPlcr->portsMapping[VAR_12].numOfProfiles)
                FUNC_0(VAR_4, VAR_0 , ("Profile id is out of range"));
            *VAR_9 = (uint16_t)(VAR_10->p_FmPcdPlcr->portsMapping[VAR_12].profilesBase + VAR_8);
            break;
        case 128:
            if (VAR_8 >= VAR_11->numOfSharedProfiles)
                FUNC_0(VAR_4, VAR_0 , ("Profile id is out of range"));
            *VAR_9 = (uint16_t)(VAR_11->sharedProfilesIds[VAR_8]);
            break;
        default:
            FUNC_0(VAR_4, VAR_0, ("Invalid policer profile type"));
    }

    return VAR_2;
}
