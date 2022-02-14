
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
typedef int KBDC ;


 TYPE_1__* FUNC_0 (int ) ;

int
FUNC_1(KBDC VAR_0, int VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_0(VAR_0)->lock;
    FUNC_0(VAR_0)->lock = VAR_1;

    return (VAR_2 != VAR_1);
}
