
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {size_t commandSequence; } ;
typedef TYPE_1__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {int h_FmPcd; scalar_t__* enqueued; } ;
typedef TYPE_2__ t_FmHc ;
typedef int t_DpaaFD ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,char*) ;
 int VAR_3 ;

void FUNC_8(t_Handle VAR_4, t_DpaaFD *VAR_5)
{
    t_FmHc *VAR_6 = (t_FmHc*)VAR_4;
    t_HcFrame *VAR_7;
    uint32_t VAR_8;

    FUNC_0(VAR_6);

    VAR_8 = FUNC_4(VAR_6->h_FmPcd);
    VAR_7 = (t_HcFrame *)FUNC_6(FUNC_2(VAR_5), FUNC_3(VAR_5));

    FUNC_1(VAR_3, ("Hc Conf, SeqNum %d, FD@0x%x, fd offset 0x%x",
                VAR_7->commandSequence, FUNC_2(VAR_5), FUNC_3(VAR_5)));

    if (!(VAR_6->enqueued[VAR_7->commandSequence]))
        FUNC_7(VAR_2, VAR_0, ("Not an Host-Command frame received!"));
    else
        VAR_6->enqueued[VAR_7->commandSequence] = VAR_1;
    FUNC_5(VAR_6->h_FmPcd, VAR_8);
}
