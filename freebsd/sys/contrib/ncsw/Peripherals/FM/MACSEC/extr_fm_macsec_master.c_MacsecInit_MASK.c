
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_11__ {size_t changedTextWithNoEncryptDeliverUncontrolled; size_t onlyScbIsSetDeliverUncontrolled; size_t unknownSciTreatMode; size_t invalidTagsDeliverUncontrolled; size_t encryptWithNoChangedTextDiscardUncontrolled; size_t untagTreatMode; size_t keysUnreadable; size_t reservedSc0; size_t byPassMode; size_t pnExhThr; size_t exceptions; int h_Fm; int h_FmMac; struct TYPE_11__* p_FmMacsecDriverParam; int numTxScAvailable; int numRxScAvailable; TYPE_2__* p_FmMacsecRegs; int userExceptions; scalar_t__ mflSubtract; TYPE_1__* intrMng; } ;
typedef TYPE_3__ t_FmMacsecDriverParam ;
typedef TYPE_3__ t_FmMacsec ;
typedef int t_Error ;
struct TYPE_10__ {int erer; int tpnet; int mfl; int cfg; } ;
struct TYPE_9__ {int f_Isr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_1 (int ,size_t*) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_3__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_17 ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static t_Error FUNC_7(t_Handle VAR_22)
{
    t_FmMacsec *VAR_23 = (t_FmMacsec*)VAR_22;
    t_FmMacsecDriverParam *VAR_24 = ((void*)0);
    uint32_t VAR_25,VAR_26,VAR_27;

    FUNC_4(VAR_23, VAR_10);
    FUNC_4(VAR_23->p_FmMacsecDriverParam, VAR_10);

    FUNC_0(VAR_23, VAR_9);

    VAR_24 = VAR_23->p_FmMacsecDriverParam;

    for (VAR_26=0;VAR_26<VAR_20;VAR_26++)
        VAR_23->intrMng[VAR_26].f_Isr = VAR_17;

    VAR_25 = 0;
    VAR_25 |= (VAR_24->changedTextWithNoEncryptDeliverUncontrolled << VAR_6)|
              (VAR_24->onlyScbIsSetDeliverUncontrolled << VAR_1) |
              (VAR_24->unknownSciTreatMode << VAR_8) |
              (VAR_24->invalidTagsDeliverUncontrolled << VAR_2) |
              (VAR_24->encryptWithNoChangedTextDiscardUncontrolled << VAR_3) |
              (VAR_24->untagTreatMode << VAR_7) |
              (VAR_24->keysUnreadable << VAR_4) |
              (VAR_24->reservedSc0 << VAR_5) |
              (VAR_24->byPassMode << VAR_0);
    FUNC_5(VAR_23->p_FmMacsecRegs->cfg, VAR_25);

    VAR_25 = FUNC_2(VAR_23->h_FmMac);


    VAR_25 -= VAR_24->mflSubtract;
    FUNC_5(VAR_23->p_FmMacsecRegs->mfl, VAR_25);

    FUNC_5(VAR_23->p_FmMacsecRegs->tpnet, VAR_24->pnExhThr);

    if (!VAR_23->userExceptions)
        VAR_23->exceptions &= ~VAR_12;
    FUNC_5(VAR_23->p_FmMacsecRegs->erer, VAR_23->exceptions);

    VAR_23->numRxScAvailable = VAR_15;
    if (VAR_24->reservedSc0)
        VAR_23->numRxScAvailable --;
    VAR_23->numTxScAvailable = VAR_16;

    FUNC_6(VAR_24);
    VAR_23->p_FmMacsecDriverParam = ((void*)0);

    FUNC_1(VAR_23->h_FmMac, &VAR_27);
    FUNC_3(VAR_23->h_Fm,
                   VAR_21,
                   (uint8_t)VAR_27,
                   VAR_19,
                   VAR_14,
                   VAR_23);

    FUNC_3(VAR_23->h_Fm,
                   VAR_21,
                   0,
                   VAR_18,
                   VAR_13,
                   VAR_23);

    return VAR_11;
}
