
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int node; } ;
typedef TYPE_1__ t_FmPcdLock ;
struct TYPE_9__ {int p_Next; } ;
struct TYPE_8__ {scalar_t__ h_Spinlock; TYPE_3__ freeLocksLst; } ;
typedef TYPE_2__ t_FmPcd ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static t_FmPcdLock * FUNC_5(t_FmPcd *VAR_0)
{
    t_FmPcdLock *VAR_1 = ((void*)0);
    uint32_t VAR_2;

    VAR_2 = FUNC_3(VAR_0->h_Spinlock);
    if (!FUNC_2(&VAR_0->freeLocksLst))
    {
        VAR_1 = FUNC_0(VAR_0->freeLocksLst.p_Next);
        FUNC_1(&VAR_1->node);
    }
    if (VAR_0->h_Spinlock)
     FUNC_4(VAR_0->h_Spinlock, VAR_2);

    return VAR_1;
}
