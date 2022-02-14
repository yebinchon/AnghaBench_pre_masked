
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* t_Handle ;
typedef int t_FmMacsecSecYSCParams ;
struct TYPE_10__ {int txScParams; int numReceiveChannels; int h_App; int f_Exception; int f_Event; int h_FmMacsec; } ;
typedef TYPE_2__ t_FmMacsecSecYParams ;
struct TYPE_9__ {int txScParams; struct TYPE_9__* p_FmMacsecSecYDriverParam; int events; int exceptions; int numOfTxSc; int numOfRxSc; int isPointToPoint; int sciInsertionMode; int protectFrames; int replayWindow; int replayProtect; int validateFrames; int confidentialityOffset; int confidentialityEnable; int h_App; int f_Exception; int f_Event; int h_FmMacsec; } ;
typedef TYPE_1__ t_FmMacsecSecYDriverParam ;
typedef TYPE_1__ t_FmMacsecSecY ;


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
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

t_Handle FUNC_5(t_FmMacsecSecYParams *VAR_13)
{
    t_FmMacsecSecY *VAR_14;


    VAR_14 = (t_FmMacsecSecY *) FUNC_2(sizeof(t_FmMacsecSecY));
    if (!VAR_14)
    {
        FUNC_0(VAR_12, VAR_11, ("FM MACSEC SECY driver structure"));
        return ((void*)0);
    }
    FUNC_4(VAR_14, 0, sizeof(t_FmMacsecSecY));


    VAR_14->p_FmMacsecSecYDriverParam = (t_FmMacsecSecYDriverParam *)FUNC_2(sizeof(t_FmMacsecSecYDriverParam));
    if (!VAR_14->p_FmMacsecSecYDriverParam)
    {
        FUNC_1(VAR_14);
        FUNC_0(VAR_12, VAR_11, ("FM MACSEC SECY driver parameters"));
        return ((void*)0);
    }
    FUNC_4(VAR_14->p_FmMacsecSecYDriverParam, 0, sizeof(t_FmMacsecSecYDriverParam));


    VAR_14->h_FmMacsec = VAR_13->h_FmMacsec;
    VAR_14->f_Event = VAR_13->f_Event;
    VAR_14->f_Exception = VAR_13->f_Exception;
    VAR_14->h_App = VAR_13->h_App;
    VAR_14->confidentialityEnable = VAR_0;
    VAR_14->confidentialityOffset = VAR_1;
    VAR_14->validateFrames = VAR_10;
    VAR_14->replayProtect = VAR_7;
    VAR_14->replayWindow = VAR_8;
    VAR_14->protectFrames = VAR_5;
    VAR_14->sciInsertionMode = VAR_9;
    VAR_14->isPointToPoint = VAR_6;
    VAR_14->numOfRxSc = VAR_13->numReceiveChannels;
    VAR_14->numOfTxSc = VAR_4;
    VAR_14->exceptions = VAR_3;
    VAR_14->events = VAR_2;

    FUNC_3(&VAR_14->p_FmMacsecSecYDriverParam->txScParams,
           &VAR_13->txScParams,
           sizeof(t_FmMacsecSecYSCParams));
    return VAR_14;
}
