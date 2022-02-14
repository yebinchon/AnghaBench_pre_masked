
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int options; int (* f_LoopDequeueRingCB ) (TYPE_2__*) ;TYPE_4__* p_LowQmPortal; } ;
typedef TYPE_2__ t_QmPortal ;
struct TYPE_8__ {int cpu; } ;
struct TYPE_10__ {TYPE_1__ config; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(void *VAR_3)
{
    t_QmPortal *VAR_4 = VAR_3;
    uint32_t VAR_5 = 0;
    uint32_t VAR_6 = FUNC_2(VAR_4->p_LowQmPortal);

    FUNC_0(VAR_2, ("software-portal %d got interrupt", VAR_4->p_LowQmPortal->config.cpu));

    VAR_5 |= (FUNC_4(VAR_4->p_LowQmPortal) &
            VAR_6);

    FUNC_3(VAR_4->p_LowQmPortal, VAR_5);

    if (
        (VAR_4->options & VAR_0))
        VAR_4->f_LoopDequeueRingCB(VAR_4);
    if (VAR_4->options & VAR_1)
        FUNC_1(VAR_4, VAR_5);
}
