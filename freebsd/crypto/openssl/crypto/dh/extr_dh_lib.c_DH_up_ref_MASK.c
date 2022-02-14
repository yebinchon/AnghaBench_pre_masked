
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int references; } ;
typedef TYPE_1__ DH ;


 scalar_t__ FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,TYPE_1__*) ;

int FUNC_3(DH *VAR_0)
{
    int VAR_1;

    if (FUNC_0(&VAR_0->references, &VAR_1, VAR_0->lock) <= 0)
        return 0;

    FUNC_2("DH", VAR_0);
    FUNC_1(VAR_1 < 2);
    return ((VAR_1 > 1) ? 1 : 0);
}
