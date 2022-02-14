
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {scalar_t__* enqueued; int h_QmArg; scalar_t__ (* f_QmEnqueue ) (int ,void*) ;int h_FmPcd; } ;
typedef TYPE_1__ t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t) ;
 int VAR_2 ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,void*) ;

__attribute__((used)) static __inline__ t_Error FUNC_9(t_FmHc *VAR_5, t_DpaaFD *VAR_6, uint32_t VAR_7)
{
    t_Error VAR_8 = VAR_0;
    uint32_t VAR_9;
    uint32_t VAR_10=100;

    VAR_9 = FUNC_4(VAR_5->h_FmPcd);
    FUNC_0(!VAR_5->enqueued[VAR_7]);
    VAR_5->enqueued[VAR_7] = VAR_4;
    FUNC_5(VAR_5->h_FmPcd, VAR_9);
    FUNC_1(VAR_3, ("Send Hc, SeqNum %d, buff@0x%x, fd offset 0x%x",
                VAR_7,
                FUNC_2(VAR_6),
                FUNC_3(VAR_6)));
    VAR_8 = VAR_5->f_QmEnqueue(VAR_5->h_QmArg, (void *)VAR_6);
    if (VAR_8)
        FUNC_6(VAR_2, VAR_8, ("HC enqueue failed"));

    while (VAR_5->enqueued[VAR_7] && --VAR_10)
        FUNC_7(100);

    if (!VAR_10)
        FUNC_6(VAR_2, VAR_1, ("HC Callback, timeout exceeded"));

    return VAR_8;
}
