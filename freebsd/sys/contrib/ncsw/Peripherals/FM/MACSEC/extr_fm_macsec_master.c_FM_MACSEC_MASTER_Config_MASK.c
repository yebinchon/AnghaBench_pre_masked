
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_2__* t_Handle ;
typedef int t_FmMacsecRegs ;
struct TYPE_11__ {int h_App; int f_Exception; int baseAddr; int h_FmMac; } ;
struct TYPE_13__ {TYPE_1__ nonGuestParams; int h_Fm; } ;
typedef TYPE_3__ t_FmMacsecParams ;
struct TYPE_12__ {int byPassMode; struct TYPE_12__* p_FmMacsecDriverParam; int h_Fm; struct TYPE_12__* fmMacsecModuleName; int h_FmMac; int mflSubtract; int sectagOverhead; int pnExhThr; int reservedSc0; int keysUnreadable; int untagTreatMode; int encryptWithNoChangedTextDiscardUncontrolled; int invalidTagsDeliverUncontrolled; int unknownSciTreatMode; void* txScSpinLock; void* rxScSpinLock; int events; int exceptions; int userExceptions; int h_App; int f_Exception; int * p_FmMacsecRegs; int fmMacsecControllerDriver; } ;
typedef TYPE_2__ t_FmMacsecDriverParam ;
typedef TYPE_2__ t_FmMacsec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_14 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_2__*,char*,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 void* FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

t_Handle FUNC_10(t_FmMacsecParams *VAR_17)
{
    t_FmMacsec *VAR_18;
    uint32_t VAR_19;


    VAR_18 = (t_FmMacsec *) FUNC_8(sizeof(t_FmMacsec));
    if (!VAR_18)
    {
        FUNC_3(VAR_15, VAR_14, ("FM MACSEC driver structure"));
        return ((void*)0);
    }
    FUNC_9(VAR_18, 0, sizeof(t_FmMacsec));
    FUNC_2(&VAR_18->fmMacsecControllerDriver);


    VAR_18->p_FmMacsecDriverParam = (t_FmMacsecDriverParam *)FUNC_8(sizeof(t_FmMacsecDriverParam));
    if (!VAR_18->p_FmMacsecDriverParam)
    {
        FUNC_6(VAR_18);
        FUNC_3(VAR_15, VAR_14, ("FM MACSEC driver parameters"));
        return ((void*)0);
    }
    FUNC_9(VAR_18->p_FmMacsecDriverParam, 0, sizeof(t_FmMacsecDriverParam));


    VAR_18->h_Fm = VAR_17->h_Fm;
    VAR_18->h_FmMac = VAR_17->nonGuestParams.h_FmMac;
    VAR_18->p_FmMacsecRegs = (t_FmMacsecRegs *)FUNC_5(VAR_17->nonGuestParams.baseAddr);
    VAR_18->f_Exception = VAR_17->nonGuestParams.f_Exception;
    VAR_18->h_App = VAR_17->nonGuestParams.h_App;
    VAR_18->userExceptions = VAR_12;
    VAR_18->exceptions = VAR_2;
    VAR_18->events = VAR_1;
    VAR_18->rxScSpinLock = FUNC_7();
    VAR_18->txScSpinLock = FUNC_7();


    VAR_18->p_FmMacsecDriverParam->unknownSciTreatMode = VAR_10;
    VAR_18->p_FmMacsecDriverParam->invalidTagsDeliverUncontrolled = VAR_3;
    VAR_18->p_FmMacsecDriverParam->encryptWithNoChangedTextDiscardUncontrolled = VAR_0;
    VAR_18->p_FmMacsecDriverParam->untagTreatMode = VAR_11;
    VAR_18->p_FmMacsecDriverParam->keysUnreadable = VAR_4;
    VAR_18->p_FmMacsecDriverParam->reservedSc0 = VAR_8;
    VAR_18->p_FmMacsecDriverParam->byPassMode = !VAR_6;
    VAR_18->p_FmMacsecDriverParam->pnExhThr = VAR_7;
    VAR_18->p_FmMacsecDriverParam->sectagOverhead = VAR_9;
    VAR_18->p_FmMacsecDriverParam->mflSubtract = VAR_5;

    FUNC_9(VAR_18->fmMacsecModuleName, 0, (sizeof(char))*VAR_16);
    FUNC_0(VAR_18->h_FmMac,&VAR_19);
    if (FUNC_4 (VAR_18->fmMacsecModuleName, "FM-%d-MAC-%d-MACSEC-Master",
        FUNC_1(VAR_18->h_Fm),VAR_19) != 24)
    {
        FUNC_6(VAR_18->p_FmMacsecDriverParam);
        FUNC_6(VAR_18);
        FUNC_3(VAR_15, VAR_13, ("Sprint failed"));
        return ((void*)0);
    }
    return VAR_18;
}
