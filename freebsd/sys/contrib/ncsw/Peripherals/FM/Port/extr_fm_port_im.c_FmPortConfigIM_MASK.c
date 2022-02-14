
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_12__ {int bufferSize; scalar_t__ f_VirtToPhys; scalar_t__ f_PhysToVirt; int f_PutBuf; int f_GetBuf; int h_BufferPool; } ;
struct TYPE_14__ {int f_TxConf; int f_RxStore; TYPE_1__ rxPoolParams; int dataMemAttributes; int dataMemId; int liodnOffset; int h_FmMuram; } ;
struct TYPE_15__ {TYPE_3__ imRxTxParams; } ;
struct TYPE_17__ {TYPE_4__ specificParams; } ;
typedef TYPE_6__ t_FmPortParams ;
struct TYPE_13__ {int bufferSize; scalar_t__ f_VirtToPhys; scalar_t__ f_PhysToVirt; int f_PutBuf; int f_GetBuf; int h_BufferPool; } ;
struct TYPE_16__ {int mrblr; int bdRingSize; int f_TxConf; TYPE_2__ rxPool; int f_RxStore; int fwExtStructsMemAttr; int fwExtStructsMemId; int dataMemAttributes; int dataMemId; int h_FmMuram; } ;
struct TYPE_18__ {scalar_t__ portType; TYPE_5__ im; scalar_t__ fmanCtrlEventId; int polling; int h_Fm; int exceptions; TYPE_8__* p_FmPortDriverParam; } ;
typedef TYPE_7__ t_FmPort ;
struct TYPE_19__ {int liodnOffset; } ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

void FUNC_4 (t_FmPort *VAR_14, t_FmPortParams *VAR_15)
{
    FUNC_0(VAR_14);

    FUNC_3(VAR_14->p_FmPortDriverParam, VAR_5);

    VAR_14->im.h_FmMuram = VAR_15->specificParams.imRxTxParams.h_FmMuram;
    VAR_14->p_FmPortDriverParam->liodnOffset = VAR_15->specificParams.imRxTxParams.liodnOffset;
    VAR_14->im.dataMemId = VAR_15->specificParams.imRxTxParams.dataMemId;
    VAR_14->im.dataMemAttributes = VAR_15->specificParams.imRxTxParams.dataMemAttributes;

    VAR_14->im.fwExtStructsMemId = VAR_1;
    VAR_14->im.fwExtStructsMemAttr = VAR_0;

    if ((VAR_14->portType == VAR_12) ||
        (VAR_14->portType == VAR_13))
    {
        VAR_14->im.rxPool.h_BufferPool = VAR_15->specificParams.imRxTxParams.rxPoolParams.h_BufferPool;
        VAR_14->im.rxPool.f_GetBuf = VAR_15->specificParams.imRxTxParams.rxPoolParams.f_GetBuf;
        VAR_14->im.rxPool.f_PutBuf = VAR_15->specificParams.imRxTxParams.rxPoolParams.f_PutBuf;
        VAR_14->im.rxPool.bufferSize = VAR_15->specificParams.imRxTxParams.rxPoolParams.bufferSize;
        VAR_14->im.rxPool.f_PhysToVirt = VAR_15->specificParams.imRxTxParams.rxPoolParams.f_PhysToVirt;
        if (!VAR_14->im.rxPool.f_PhysToVirt)
            VAR_14->im.rxPool.f_PhysToVirt = VAR_10;
        VAR_14->im.rxPool.f_VirtToPhys = VAR_15->specificParams.imRxTxParams.rxPoolParams.f_VirtToPhys;
        if (!VAR_14->im.rxPool.f_VirtToPhys)
            VAR_14->im.rxPool.f_VirtToPhys = VAR_11;
        VAR_14->im.f_RxStore = VAR_15->specificParams.imRxTxParams.f_RxStore;

        VAR_14->im.mrblr = 0x8000;
        while (VAR_14->im.mrblr)
        {
            if (VAR_14->im.rxPool.bufferSize & VAR_14->im.mrblr)
                break;
            VAR_14->im.mrblr >>= 1;
        }
        if (VAR_14->im.mrblr != VAR_14->im.rxPool.bufferSize)
            FUNC_1(VAR_9, ("Max-Rx-Buffer-Length set to %d", VAR_14->im.mrblr));
        VAR_14->im.bdRingSize = VAR_3;
        VAR_14->exceptions = VAR_2;
        if (FUNC_2(VAR_14->h_Fm))
            VAR_14->polling = VAR_6;
        else
            VAR_14->polling = VAR_8;
        VAR_14->fmanCtrlEventId = (uint8_t)VAR_7;
    }
    else
    {
        VAR_14->im.f_TxConf = VAR_15->specificParams.imRxTxParams.f_TxConf;

        VAR_14->im.bdRingSize = VAR_4;
    }
}
