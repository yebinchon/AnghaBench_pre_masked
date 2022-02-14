
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int max_qcount; int call_count; } ;
struct TYPE_7__ {int max_qcount; int call_count; } ;
struct TYPE_8__ {TYPE_3__ kbd; TYPE_1__ aux; } ;
typedef int KBDC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;

int
FUNC_6(KBDC VAR_2)
{
    if (FUNC_0(&FUNC_1(VAR_2)->kbd))
        return FUNC_4(&FUNC_1(VAR_2)->kbd);
    if (!FUNC_5(FUNC_1(VAR_2)))
        return -1;
    return FUNC_3(FUNC_1(VAR_2));
}
