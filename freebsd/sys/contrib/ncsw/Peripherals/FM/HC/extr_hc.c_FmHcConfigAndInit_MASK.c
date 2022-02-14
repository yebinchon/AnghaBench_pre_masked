
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint16_t ;
typedef int t_HcFrame ;
typedef int * t_Handle ;
struct TYPE_13__ {int qmChannel; int dfltFqid; int errFqid; } ;
struct TYPE_14__ {TYPE_1__ nonRxParams; } ;
struct TYPE_16__ {int h_HcPortDev; TYPE_2__ specificParams; int h_Fm; int liodnBase; int portId; int portType; int baseAddr; int dataMemId; int h_QmArg; int f_QmEnqueue; int h_FmPcd; } ;
typedef TYPE_4__ t_FmPortParams ;
struct TYPE_15__ {int qmChannel; int confFqid; int errFqid; int liodnBase; int portId; int portBaseAddr; int h_QmArg; int f_QmEnqueue; } ;
struct TYPE_17__ {TYPE_3__ params; int h_Fm; int h_FmPcd; } ;
typedef TYPE_5__ t_FmHcParams ;
typedef TYPE_4__ t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int fmPortParam ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_4__*,int ,int) ;

t_Handle FUNC_11(t_FmHcParams *VAR_8)
{
    t_FmHc *VAR_9;
    t_FmPortParams VAR_10;
    t_Error VAR_11;

    VAR_9 = (t_FmHc *)FUNC_9(sizeof(t_FmHc));
    if (!VAR_9)
    {
        FUNC_7(VAR_5, VAR_2, ("HC obj"));
        return ((void*)0);
    }
    FUNC_10(VAR_9,0,sizeof(t_FmHc));

    VAR_9->h_FmPcd = VAR_8->h_FmPcd;
    VAR_9->f_QmEnqueue = VAR_8->params.f_QmEnqueue;
    VAR_9->h_QmArg = VAR_8->params.h_QmArg;
    VAR_9->dataMemId = VAR_0;

    VAR_11 = FUNC_4(VAR_9);
    if (VAR_11 != VAR_3)
    {
        FUNC_7(VAR_4, VAR_11, VAR_6);
        FUNC_5(VAR_9);
        return ((void*)0);
    }

    if (!FUNC_6(VAR_8->h_Fm))
        return (t_Handle)VAR_9;

    FUNC_10(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.baseAddr = VAR_8->params.portBaseAddr;
    VAR_10.portType = VAR_7;
    VAR_10.portId = VAR_8->params.portId;
    VAR_10.liodnBase = VAR_8->params.liodnBase;
    VAR_10.h_Fm = VAR_8->h_Fm;

    VAR_10.specificParams.nonRxParams.errFqid = VAR_8->params.errFqid;
    VAR_10.specificParams.nonRxParams.dfltFqid = VAR_8->params.confFqid;
    VAR_10.specificParams.nonRxParams.qmChannel = VAR_8->params.qmChannel;

    VAR_9->h_HcPortDev = FUNC_0(&VAR_10);
    if (!VAR_9->h_HcPortDev)
    {
        FUNC_7(VAR_4, VAR_1, ("FM HC port!"));
        FUNC_8(VAR_9);
        return ((void*)0);
    }

    VAR_11 = FUNC_1(VAR_9->h_HcPortDev,
                                       (uint16_t)sizeof(t_HcFrame));

    if (VAR_11 != VAR_3)
    {
        FUNC_7(VAR_4, VAR_11, ("FM HC port init!"));
        FUNC_5(VAR_9);
        return ((void*)0);
    }


    VAR_11 = FUNC_3(VAR_9->h_HcPortDev);
    if (VAR_11 != VAR_3)
    {
        FUNC_7(VAR_4, VAR_11, ("FM HC port init!"));
        FUNC_5(VAR_9);
        return ((void*)0);
    }

    VAR_11 = FUNC_2(VAR_9->h_HcPortDev);
    if (VAR_11 != VAR_3)
    {
        FUNC_7(VAR_4, VAR_11, ("FM HC port enable!"));
        FUNC_5(VAR_9);
        return ((void*)0);
    }

    return (t_Handle)VAR_9;
}
