
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_12__ {TYPE_6__* p_FmPcdPlcr; } ;
typedef TYPE_4__ t_FmPcd ;
typedef scalar_t__ t_Error ;
struct TYPE_13__ {TYPE_3__* portsMapping; TYPE_2__* profiles; } ;
struct TYPE_11__ {size_t numOfProfiles; size_t profilesBase; } ;
struct TYPE_9__ {int ownerId; scalar_t__ allocated; } ;
struct TYPE_10__ {TYPE_1__ profilesMng; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (size_t,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,size_t,size_t) ;
 size_t FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,size_t) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 scalar_t__ VAR_8 ;

t_Error FUNC_8(t_Handle VAR_9, uint8_t VAR_10, uint16_t VAR_11)
{
    t_FmPcd *VAR_12 = (t_FmPcd*)VAR_9;
    t_Error VAR_13 = VAR_3;
    uint32_t VAR_14;
    uint32_t VAR_15;
    uint16_t VAR_16, VAR_17, VAR_18 = 0;

    FUNC_7(VAR_12, VAR_1);

    if (!VAR_11)
        return VAR_3;

    FUNC_0(VAR_10);

    if (VAR_11>VAR_4)
        FUNC_6(VAR_6, VAR_2, ("numProfiles is too big."));

    if (!FUNC_2(VAR_11))
        FUNC_6(VAR_5, VAR_2, ("numProfiles must be a power of 2."));

    VAR_17 = 0;
    VAR_14 = 0;
    VAR_15 = FUNC_4(VAR_12->p_FmPcdPlcr);

    for (VAR_16=0; VAR_16<VAR_4; )
    {
        if (!VAR_12->p_FmPcdPlcr->profiles[VAR_16].profilesMng.allocated)
        {
            VAR_14++;
            VAR_16++;
            if (VAR_14 == VAR_11)
                break;
        }
        else
        {
            VAR_14 = 0;

            VAR_16 = VAR_17 = (uint16_t)(VAR_17 + VAR_11);
        }
    }

    if (VAR_14 == VAR_11)
    {
        for (VAR_16=VAR_17; VAR_16<VAR_17 + VAR_11; VAR_16++)
        {
            VAR_12->p_FmPcdPlcr->profiles[VAR_16].profilesMng.allocated = VAR_8;
            VAR_12->p_FmPcdPlcr->profiles[VAR_16].profilesMng.ownerId = VAR_10;
        }
    }
    else
    {
        FUNC_5(VAR_12->p_FmPcdPlcr, VAR_15);
        FUNC_6(VAR_6, VAR_0, ("No profiles."));
    }
    FUNC_5(VAR_12->p_FmPcdPlcr, VAR_15);

    VAR_13 = FUNC_3(VAR_12, VAR_10, VAR_11, VAR_17);
    if (VAR_13)
    {
        FUNC_6(VAR_5, VAR_13, VAR_7);
    }

    FUNC_1(VAR_18, VAR_10);

    VAR_12->p_FmPcdPlcr->portsMapping[VAR_18].numOfProfiles = VAR_11;
    VAR_12->p_FmPcdPlcr->portsMapping[VAR_18].profilesBase = VAR_17;

    return VAR_3;
}
