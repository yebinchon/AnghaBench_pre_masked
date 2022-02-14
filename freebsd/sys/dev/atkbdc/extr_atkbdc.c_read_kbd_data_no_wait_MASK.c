
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int max_qcount; int call_count; } ;
struct TYPE_7__ {int max_qcount; int call_count; } ;
struct TYPE_8__ {TYPE_6__ aux; TYPE_1__ kbd; } ;
typedef int KBDC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_5 ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(KBDC VAR_6)
{
    int VAR_7;
    if (FUNC_2(&FUNC_3(VAR_6)->kbd))
        return FUNC_7(&FUNC_3(VAR_6)->kbd);
    VAR_7 = FUNC_6(FUNC_3(VAR_6)) & VAR_2;
    if (VAR_7 == VAR_1) {
        FUNC_0(VAR_0);
        FUNC_1(&FUNC_3(VAR_6)->aux, FUNC_5(FUNC_3(VAR_6)));
        VAR_7 = FUNC_6(FUNC_3(VAR_6)) & VAR_2;
    }
    if (VAR_7 == VAR_3) {
        FUNC_0(VAR_0);
        return FUNC_5(FUNC_3(VAR_6));
    }
    return -1;
}
