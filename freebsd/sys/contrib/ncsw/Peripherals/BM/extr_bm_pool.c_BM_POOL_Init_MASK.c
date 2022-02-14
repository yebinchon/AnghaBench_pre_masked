
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_7__ {int flags; scalar_t__ bpid; int spMaxBufs; int numOfBuffers; int h_BmPortal; struct TYPE_7__* p_BmPoolDriverParams; struct bm_buffer* sp; int depletionThresholds; int h_Bm; scalar_t__ useDepletion; int shadowMode; scalar_t__ useStockpile; scalar_t__ dynamicBpid; } ;
typedef TYPE_1__ t_BmPool ;
struct bm_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_12 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct bm_buffer*,int ,int) ;

t_Error FUNC_10(t_Handle VAR_13)
{
    t_BmPool *VAR_14 = (t_BmPool *)VAR_13;
    t_Error VAR_15;

    FUNC_5(VAR_14, VAR_4);
    FUNC_5(VAR_14->p_BmPoolDriverParams, VAR_4);

    VAR_14->flags |= (VAR_14->p_BmPoolDriverParams->dynamicBpid)?VAR_1:0;
    VAR_14->flags |= (VAR_14->p_BmPoolDriverParams->useStockpile)?VAR_2:0;
    VAR_14->flags |= ((!VAR_14->shadowMode) &&
                        (VAR_14->p_BmPoolDriverParams->useDepletion))?VAR_0:0;

    if (VAR_14->flags & VAR_1)
    {
        if((VAR_14->bpid = (uint8_t)FUNC_2(VAR_14->h_Bm, VAR_8, (uint32_t)0)) == (uint8_t)VAR_9)
        {
            FUNC_1(VAR_14);
            FUNC_4(VAR_3, VAR_5, ("can't allocate new dynamic pool id"));
        }
    }
    else
    {
        if (FUNC_2(VAR_14->h_Bm, VAR_12, (uint32_t)VAR_14->bpid) == (uint32_t)VAR_9)
        {
            FUNC_1(VAR_14);
            FUNC_4(VAR_3, VAR_5, ("can't force pool id %d", VAR_14->bpid));
        }
    }
    if (VAR_14->flags & VAR_0)
    {
        if(FUNC_3(VAR_14->h_Bm, VAR_14->bpid, VAR_14->p_BmPoolDriverParams->depletionThresholds))
        {
            FUNC_1(VAR_14);
            FUNC_4(VAR_10, VAR_5, ("can't set thresh for pool bpid %d",VAR_14->bpid));
        }

        FUNC_8(VAR_14);
    }

    if (VAR_14->flags & VAR_2)
    {
        VAR_14->sp = (struct bm_buffer *)FUNC_7(sizeof(struct bm_buffer) * VAR_14->spMaxBufs);
        if (!VAR_14->sp)
        {
            FUNC_1(VAR_14);
            FUNC_4(VAR_10, VAR_6, ("Bm Pool Stockpile"));
        }
        FUNC_9(VAR_14->sp, 0, sizeof(struct bm_buffer) * VAR_14->spMaxBufs);
    }

    FUNC_6(VAR_14->p_BmPoolDriverParams);
    VAR_14->p_BmPoolDriverParams = ((void*)0);




    if ((VAR_15 = FUNC_0 (VAR_14, VAR_14->h_BmPortal, VAR_14->numOfBuffers)) != VAR_7)
    {
        FUNC_1(VAR_14);
        FUNC_4(VAR_10, VAR_15, VAR_11);
    }

    return VAR_7;
}
