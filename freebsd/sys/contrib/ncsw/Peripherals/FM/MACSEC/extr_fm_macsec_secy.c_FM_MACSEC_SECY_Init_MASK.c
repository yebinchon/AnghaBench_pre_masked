
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_13__ {int cipherSuite; int sci; } ;
struct TYPE_14__ {int numOfRxSc; size_t scId; int numOfTxSc; int exceptions; int events; struct TYPE_14__* p_FmMacsecSecYDriverParam; TYPE_2__ txScParams; int h_FmMacsec; TYPE_1__* sa; struct TYPE_14__* p_TxSc; void* type; struct TYPE_14__* p_RxSc; scalar_t__ isPointToPoint; } ;
typedef TYPE_3__ t_SecYSc ;
typedef scalar_t__ t_Handle ;
typedef TYPE_3__ t_FmMacsecSecYDriverParam ;
typedef TYPE_3__ t_FmMacsecSecY ;
typedef int t_Error ;
typedef void* e_ScSaId ;
struct TYPE_12__ {void* saId; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,void*,scalar_t__,int,size_t*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,size_t,int ) ;
 int FUNC_6 (int ,int ,size_t,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_12 (TYPE_3__*,int ,int) ;

t_Error FUNC_13(t_Handle VAR_21)
{
    t_FmMacsecSecY *VAR_22 = (t_FmMacsecSecY *)VAR_21;
    t_FmMacsecSecYDriverParam *VAR_23 = ((void*)0);
    uint32_t VAR_24[VAR_10], VAR_25[VAR_11], VAR_26, VAR_27;
    t_Error VAR_28;

    FUNC_9(VAR_22, VAR_1);
    FUNC_9(VAR_22->p_FmMacsecSecYDriverParam, VAR_1);

    FUNC_0(VAR_22, VAR_0);

    VAR_23 = VAR_22->p_FmMacsecSecYDriverParam;

    if ((VAR_22->isPointToPoint) &&
        ((VAR_28 = FUNC_7(VAR_22->h_FmMacsec, VAR_13)) != VAR_3))
        FUNC_8(VAR_8, VAR_28, ("Can't set Poin-to-Point"));


    VAR_22->p_RxSc = (t_SecYSc *)FUNC_11(sizeof(t_SecYSc) * VAR_22->numOfRxSc);
    if (!VAR_22->p_RxSc)
        FUNC_8(VAR_8, VAR_2, ("FM MACSEC SECY RX SC"));
    FUNC_12(VAR_22->p_RxSc, 0, sizeof(t_SecYSc) * VAR_22->numOfRxSc);
    if ((VAR_28 = FUNC_2(VAR_22->h_FmMacsec, VAR_19, VAR_22->isPointToPoint, VAR_22->numOfRxSc, VAR_24)) != VAR_3)
    {
        if (VAR_22->p_TxSc)
            FUNC_10(VAR_22->p_TxSc);
        if (VAR_22->p_RxSc)
            FUNC_10(VAR_22->p_RxSc);
        return FUNC_1(VAR_28);
    }
    for (VAR_26=0; VAR_26<VAR_22->numOfRxSc; VAR_26++)
    {
        VAR_22->p_RxSc[VAR_26].scId = VAR_24[VAR_26];
        VAR_22->p_RxSc[VAR_26].type = VAR_19;
        for (VAR_27=0; VAR_27<VAR_9;VAR_27++)
            VAR_22->p_RxSc[VAR_26].sa[VAR_27].saId = (e_ScSaId)VAR_12;
    }


    VAR_22->p_TxSc = (t_SecYSc *)FUNC_11(sizeof(t_SecYSc) * VAR_22->numOfTxSc);
    if (!VAR_22->p_TxSc)
        FUNC_8(VAR_8, VAR_2, ("FM MACSEC SECY TX SC"));
    FUNC_12(VAR_22->p_TxSc, 0, sizeof(t_SecYSc) * VAR_22->numOfTxSc);

    if ((VAR_28 = FUNC_2(VAR_22->h_FmMacsec, VAR_20, VAR_22->isPointToPoint, VAR_22->numOfTxSc, VAR_25)) != VAR_3)
    {
        if (VAR_22->p_TxSc)
            FUNC_10(VAR_22->p_TxSc);
        if (VAR_22->p_RxSc)
            FUNC_10(VAR_22->p_RxSc);
        return FUNC_1(VAR_28);
    }
    for (VAR_26=0; VAR_26<VAR_22->numOfTxSc; VAR_26++)
    {
        VAR_22->p_TxSc[VAR_26].scId = VAR_25[VAR_26];
        VAR_22->p_TxSc[VAR_26].type = VAR_20;
        for (VAR_27=0; VAR_27<VAR_9;VAR_27++)
            VAR_22->p_TxSc[VAR_26].sa[VAR_27].saId = (e_ScSaId)VAR_12;
        FUNC_3(VAR_22->h_FmMacsec,
                             VAR_18,
                             (uint8_t)VAR_25[VAR_26],
                             VAR_14,
                             VAR_7,
                             VAR_22);
        FUNC_3(VAR_22->h_FmMacsec,
                             VAR_18,
                             (uint8_t)VAR_25[VAR_26],
                             VAR_15,
                             VAR_6,
                             VAR_22);

        if (VAR_22->exceptions & VAR_5)
            FUNC_6(VAR_22->h_FmMacsec, VAR_17, VAR_25[VAR_26], VAR_13);
        if (VAR_22->events & VAR_4)
            FUNC_5(VAR_22->h_FmMacsec, VAR_16, VAR_25[VAR_26], VAR_13);
    }

    FUNC_4(VAR_22,
                         VAR_23->txScParams.sci,
                         VAR_23->txScParams.cipherSuite,
                         VAR_20);
    FUNC_10(VAR_23);
    VAR_22->p_FmMacsecSecYDriverParam = ((void*)0);

    return VAR_3;
}
