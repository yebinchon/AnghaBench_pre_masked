
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int txScParams ;
struct TYPE_14__ {void* sci; int scId; void* cipherSuite; int confidentialityOffset; int confidentialityEnable; int protectFrames; int sciInsertionMode; int validateFrames; int replayWindow; int replayProtect; } ;
typedef TYPE_1__ t_TxScParams ;
struct TYPE_15__ {scalar_t__ inUse; int scId; } ;
typedef TYPE_2__ t_SecYSc ;
typedef TYPE_1__ t_RxScParams ;
typedef TYPE_2__* t_Handle ;
struct TYPE_16__ {size_t numOfRxSc; size_t numOfTxSc; struct TYPE_16__* h_FmMacsec; int confidentialityOffset; int confidentialityEnable; int protectFrames; int sciInsertionMode; TYPE_2__* p_TxSc; int validateFrames; int replayWindow; int replayProtect; TYPE_2__* p_RxSc; } ;
typedef TYPE_5__ t_FmMacsecSecY ;
typedef int t_Error ;
typedef int rxScParams ;
typedef void* macsecSCI_t ;
typedef scalar_t__ e_ScType ;
typedef void* e_FmMacsecSecYCipherSuite ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_1__*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static t_Handle FUNC_5(t_FmMacsecSecY *VAR_8,
                                     macsecSCI_t VAR_9,
                                     e_FmMacsecSecYCipherSuite VAR_10,
                                     e_ScType VAR_11)
{
    t_SecYSc *VAR_12;
    void *VAR_13;
    uint32_t VAR_14,VAR_15;
    t_Error VAR_16 = VAR_2;
    t_RxScParams VAR_17;
    t_TxScParams VAR_18;

    FUNC_0(VAR_8);
    FUNC_0(VAR_8->h_FmMacsec);

    if (VAR_11 == VAR_7)
    {
        FUNC_4(&VAR_17, 0, sizeof(VAR_17));
        VAR_15 = (VAR_4 - 1);
        VAR_12 = VAR_8->p_RxSc;
        VAR_14 = VAR_8->numOfRxSc;
        VAR_17.confidentialityOffset = VAR_8->confidentialityOffset;
        VAR_17.replayProtect = VAR_8->replayProtect;
        VAR_17.replayWindow = VAR_8->replayWindow;
        VAR_17.validateFrames = VAR_8->validateFrames;
        VAR_17.cipherSuite = VAR_10;
        VAR_13 = &VAR_17;
    }
    else
    {
        FUNC_4(&VAR_18, 0, sizeof(VAR_18));
        VAR_15 = (VAR_5 - 1);
        VAR_12 = VAR_8->p_TxSc;
        VAR_14 = VAR_8->numOfTxSc;
        VAR_18.sciInsertionMode = VAR_8->sciInsertionMode;
        VAR_18.protectFrames = VAR_8->protectFrames;
        VAR_18.confidentialityEnable = VAR_8->confidentialityEnable;
        VAR_18.confidentialityOffset = VAR_8->confidentialityOffset;
        VAR_18.cipherSuite = VAR_10;
        VAR_13 = &VAR_18;
    }

    for (VAR_15=0;VAR_15<VAR_14;VAR_15++)
        if (!VAR_12[VAR_15].inUse)
            break;
    if (VAR_15 == VAR_14)
    {
        FUNC_3(VAR_3, VAR_0, ("FM MACSEC SECY SC"));
        return ((void*)0);
    }

    if (VAR_11 == VAR_7)
    {
        ((t_RxScParams *)VAR_13)->scId = VAR_12[VAR_15].scId;
        ((t_RxScParams *)VAR_13)->sci = VAR_9;
        if ((VAR_16 = FUNC_1(VAR_8->h_FmMacsec, (t_RxScParams *)VAR_13)) != VAR_2)
        {
            FUNC_3(VAR_3, VAR_1, ("FM MACSEC SECY RX SC"));
            return ((void*)0);
        }
    }
    else
    {
        ((t_TxScParams *)VAR_13)->scId = VAR_12[VAR_15].scId;
        ((t_TxScParams *)VAR_13)->sci = VAR_9;
        if ((VAR_16 = FUNC_2(VAR_8->h_FmMacsec, (t_TxScParams *)VAR_13)) != VAR_2)
        {
            FUNC_3(VAR_3, VAR_1, ("FM MACSEC SECY TX SC"));
            return ((void*)0);
        }
    }

    VAR_12[VAR_15].inUse = VAR_6;
    return &VAR_12[VAR_15];
}
