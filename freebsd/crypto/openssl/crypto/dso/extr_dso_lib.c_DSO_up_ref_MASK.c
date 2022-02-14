
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int references; } ;
typedef TYPE_1__ DSO ;


 scalar_t__ FUNC_0 (int *,int*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;

int FUNC_4(DSO *VAR_3)
{
    int VAR_4;

    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    if (FUNC_0(&VAR_3->references, &VAR_4, VAR_3->lock) <= 0)
        return 0;

    FUNC_3("DSO", VAR_2);
    FUNC_2(VAR_4 < 2);
    return ((VAR_4 > 1) ? 1 : 0);
}
