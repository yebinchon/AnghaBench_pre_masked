
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int h_BufferPool; int (* f_PutBuf ) (int ,int *,int ) ;int f_VirtToPhys; int f_PhysToVirt; } ;
struct TYPE_13__ {size_t currBdId; scalar_t__ p_BdRing; int * p_BdShadow; TYPE_4__* p_FmPortImPram; int h_FmMuram; TYPE_2__ rxPool; } ;
struct TYPE_11__ {int gen; } ;
struct TYPE_14__ {scalar_t__ portType; TYPE_3__ im; int fmanCtrlEventId; int h_Fm; TYPE_1__ rxQd; scalar_t__ exceptions; int polling; } ;
typedef TYPE_4__ t_FmPort ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 size_t FUNC_11 (TYPE_4__*,size_t) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_16 (int ,int *,int ) ;

void FUNC_17(t_FmPort *VAR_4)
{
    uint32_t VAR_5;
    uint8_t *VAR_6;

    FUNC_0(VAR_4);
    FUNC_0(VAR_4->im.p_FmPortImPram);

    if ((VAR_4->portType == VAR_1) ||
        (VAR_4->portType == VAR_2))
    {
        if (!VAR_4->polling || VAR_4->exceptions)
        {

            FUNC_9(VAR_4->h_Fm, VAR_4->fmanCtrlEventId, 0);

            FUNC_7(VAR_4->h_Fm, VAR_4->fmanCtrlEventId);

            FUNC_13(VAR_4->im.p_FmPortImPram->rxQd.gen, 0);

            FUNC_10(VAR_4->h_Fm, VAR_4->fmanCtrlEventId);
        }

        FUNC_8(VAR_4);


        VAR_5 = FUNC_2(FUNC_1(VAR_4->im.currBdId));

        while (VAR_5 & VAR_0)
        {
            VAR_6 = FUNC_4(VAR_4->im.rxPool.f_PhysToVirt, FUNC_1(VAR_4->im.currBdId));

            FUNC_5(VAR_4->im.rxPool.f_VirtToPhys, FUNC_1(VAR_4->im.currBdId), ((void*)0));
            FUNC_3(FUNC_1(VAR_4->im.currBdId), 0);

            VAR_4->im.rxPool.f_PutBuf(VAR_4->im.rxPool.h_BufferPool,
                                         VAR_6,
                                         VAR_4->im.p_BdShadow[VAR_4->im.currBdId]);

            VAR_4->im.currBdId = FUNC_11(VAR_4, VAR_4->im.currBdId);
            VAR_5 = FUNC_2(FUNC_1(VAR_4->im.currBdId));
        }
    }
    else
        FUNC_12(VAR_4, VAR_3);

    FUNC_6(VAR_4->im.h_FmMuram, VAR_4->im.p_FmPortImPram);

    if (VAR_4->im.p_BdShadow)
        FUNC_14(VAR_4->im.p_BdShadow);

    if (VAR_4->im.p_BdRing)
        FUNC_15(VAR_4->im.p_BdRing);
}
