
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_14__ {int fmpl_dpmr; int fmpl_ier; int fmpl_evr; int fmpl_eier; int fmpl_eevr; int fmpl_gcr; } ;
typedef TYPE_3__ t_FmPcdPlcrRegs ;
struct TYPE_15__ {scalar_t__ partPlcrProfilesBase; scalar_t__ partNumOfPlcrProfiles; TYPE_2__* profiles; int sharedProfilesIds; scalar_t__ numOfSharedProfiles; void* h_SwSpinlock; void* h_HwSpinlock; TYPE_3__* p_FmPcdPlcrRegs; } ;
typedef TYPE_4__ t_FmPcdPlcr ;
struct TYPE_16__ {scalar_t__ plcrAutoRefresh; } ;
typedef TYPE_5__ t_FmPcdDriverParam ;
struct TYPE_17__ {int exceptions; TYPE_4__* p_FmPcdPlcr; int h_Fm; int guestId; TYPE_5__* p_FmPcdDriverParam; } ;
typedef TYPE_6__ t_FmPcd ;
typedef scalar_t__ t_Error ;
struct TYPE_12__ {int allocated; } ;
struct TYPE_13__ {TYPE_1__ profilesMng; } ;


 scalar_t__ FUNC_0 (TYPE_6__*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* VAR_19 ;
 scalar_t__ FUNC_4 (TYPE_6__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__,char*) ;
 int VAR_20 ;
 int FUNC_6 (int ,int) ;
 void* FUNC_7 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

t_Error FUNC_8(t_FmPcd *VAR_24)
{
    t_FmPcdDriverParam *VAR_25 = VAR_24->p_FmPcdDriverParam;
    t_FmPcdPlcr *VAR_26 = VAR_24->p_FmPcdPlcr;
    t_FmPcdPlcrRegs *VAR_27 = VAR_24->p_FmPcdPlcr->p_FmPcdPlcrRegs;
    t_Error VAR_28 = VAR_2;
    uint32_t VAR_29 = 0;
    uint16_t VAR_30;

    if ((VAR_26->partPlcrProfilesBase + VAR_26->partNumOfPlcrProfiles) > VAR_14)
        FUNC_5(VAR_17, VAR_0, ("partPlcrProfilesBase+partNumOfPlcrProfiles out of range!!!"));

    VAR_26->h_HwSpinlock = FUNC_7();
    if (!VAR_26->h_HwSpinlock)
        FUNC_5(VAR_17, VAR_1, ("FM Policer HW spinlock"));

    VAR_26->h_SwSpinlock = FUNC_7();
    if (!VAR_26->h_SwSpinlock)
        FUNC_5(VAR_17, VAR_1, ("FM Policer SW spinlock"));

    VAR_30 = FUNC_4(VAR_24,
                                         VAR_26->partPlcrProfilesBase,
                                         VAR_26->partNumOfPlcrProfiles,
                                         VAR_24->guestId);
    if (VAR_30 == (uint16_t)VAR_16)
        FUNC_5(VAR_17, VAR_0, VAR_19);

    if (VAR_26->numOfSharedProfiles)
    {
        VAR_28 = FUNC_0(VAR_24,
                                  VAR_26->numOfSharedProfiles,
                                  VAR_26->sharedProfilesIds);
        if (VAR_28)
            FUNC_5(VAR_17, VAR_28,VAR_19);
    }

    if (VAR_24->guestId != VAR_18)
        return VAR_2;


    VAR_29 = 0;
    VAR_29 |= VAR_12;
    if (VAR_25->plcrAutoRefresh)
        VAR_29 |= VAR_11;
    VAR_29 |= FUNC_3(VAR_24);

    FUNC_6(VAR_27->fmpl_gcr, VAR_29);



    FUNC_6(VAR_27->fmpl_eevr, (VAR_10 | VAR_13));


    VAR_29 = 0;
    if (VAR_24->exceptions & VAR_6)
    {
        FUNC_1(VAR_24->h_Fm);
        VAR_29 |= VAR_10;
    }
    if (VAR_24->exceptions & VAR_7)
        VAR_29 |= VAR_13;
    FUNC_6(VAR_27->fmpl_eier, VAR_29);



    FUNC_6(VAR_27->fmpl_evr, (VAR_15 | VAR_9));


    VAR_29 = 0;
    if (VAR_24->exceptions & VAR_8)
        VAR_29 |= VAR_15;
    if (VAR_24->exceptions & VAR_5)
        VAR_29 |= VAR_9;
    FUNC_6(VAR_27->fmpl_ier, VAR_29);



    FUNC_2(VAR_24->h_Fm,
                   VAR_23,
                   0,
                   VAR_21,
                   VAR_3,
                   VAR_24);
    FUNC_2(VAR_24->h_Fm,
                   VAR_23,
                   0,
                   VAR_22,
                   VAR_4,
                   VAR_24);



    VAR_29 = 0;
    FUNC_6(VAR_27->fmpl_dpmr, VAR_29);
    VAR_24->p_FmPcdPlcr->profiles[0].profilesMng.allocated = VAR_20;

    return VAR_2;
}
