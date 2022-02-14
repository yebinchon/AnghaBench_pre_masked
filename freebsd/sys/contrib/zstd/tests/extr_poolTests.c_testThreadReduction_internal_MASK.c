
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int countdown; int mut; scalar_t__ max; scalar_t__ val; int cond; } ;
typedef TYPE_1__ poolTest_t ;
typedef int POOL_ctx ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(POOL_ctx* VAR_1, poolTest_t VAR_2)
{
    int const VAR_3 = 16;

    VAR_2.countdown = VAR_3;
    VAR_2.val = 0;
    VAR_2.max = 0;

    { int VAR_4;
        for (VAR_4=0; VAR_4<VAR_3; VAR_4++)
            FUNC_1(VAR_1, &VAR_0, &VAR_2);
    }
    FUNC_4(&VAR_2.mut);
    while (VAR_2.countdown > 0)
        FUNC_3(&VAR_2.cond, &VAR_2.mut);
    FUNC_0(VAR_2.val, 0);
    FUNC_0(VAR_2.max, 4);
    FUNC_5(&VAR_2.mut);

    FUNC_0( FUNC_2(VAR_1, 2 ) , 0 );
    VAR_2.countdown = VAR_3;
    VAR_2.val = 0;
    VAR_2.max = 0;
    { int VAR_5;
        for (VAR_5=0; VAR_5<VAR_3; VAR_5++)
            FUNC_1(VAR_1, &VAR_0, &VAR_2);
    }
    FUNC_4(&VAR_2.mut);
    while (VAR_2.countdown > 0)
        FUNC_3(&VAR_2.cond, &VAR_2.mut);
    FUNC_0(VAR_2.val, 0);
    FUNC_0(VAR_2.max, 2);
    FUNC_5(&VAR_2.mut);

    return 0;
}
