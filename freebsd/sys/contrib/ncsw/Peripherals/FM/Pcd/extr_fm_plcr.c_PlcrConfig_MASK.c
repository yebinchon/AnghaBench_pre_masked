
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
typedef TYPE_4__* t_Handle ;
typedef int t_FmPcdPlcrRegs ;
struct TYPE_16__ {scalar_t__ partNumOfPlcrProfiles; TYPE_3__* profiles; int partPlcrProfilesBase; int numOfSharedProfiles; int * p_FmPcdPlcrRegs; } ;
typedef TYPE_4__ t_FmPcdPlcr ;
struct TYPE_17__ {scalar_t__ guestId; int exceptions; scalar_t__ partNumOfPlcrProfiles; int partPlcrProfilesBase; TYPE_1__* p_FmPcdDriverParam; int h_Fm; } ;
typedef TYPE_6__ t_FmPcdParams ;
typedef TYPE_6__ t_FmPcd ;
struct TYPE_14__ {scalar_t__ ownerId; } ;
struct TYPE_15__ {TYPE_2__ profilesMng; } ;
struct TYPE_13__ {int plcrAutoRefresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;

t_Handle FUNC_6(t_FmPcd *VAR_9, t_FmPcdParams *VAR_10)
{
    t_FmPcdPlcr *VAR_11;
    uint16_t VAR_12=0;

    FUNC_3(VAR_9);
    FUNC_3(VAR_10);

    VAR_11 = (t_FmPcdPlcr *) FUNC_4(sizeof(t_FmPcdPlcr));
    if (!VAR_11)
    {
        FUNC_1(VAR_7, VAR_4, ("FM Policer structure allocation FAILED"));
        return ((void*)0);
    }
    FUNC_5(VAR_11, 0, sizeof(t_FmPcdPlcr));
    if (VAR_9->guestId == VAR_8)
    {
        VAR_11->p_FmPcdPlcrRegs = (t_FmPcdPlcrRegs *)FUNC_2(FUNC_0(VAR_10->h_Fm));
        VAR_9->p_FmPcdDriverParam->plcrAutoRefresh = VAR_3;
        VAR_9->exceptions |= (VAR_1 | VAR_0);
    }

    VAR_11->numOfSharedProfiles = VAR_2;

    VAR_11->partPlcrProfilesBase = VAR_10->partPlcrProfilesBase;
    VAR_11->partNumOfPlcrProfiles = VAR_10->partNumOfPlcrProfiles;

    if ((VAR_9->guestId == VAR_8) &&
        (VAR_11->partNumOfPlcrProfiles == 0))
        VAR_11->partNumOfPlcrProfiles = VAR_5;

    for (VAR_12=0; VAR_12<VAR_5; VAR_12++)
        VAR_11->profiles[VAR_12].profilesMng.ownerId = (uint8_t)VAR_6;

    return VAR_11;
}
