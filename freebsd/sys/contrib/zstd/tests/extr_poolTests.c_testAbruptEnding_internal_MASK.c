
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ val; } ;
typedef TYPE_1__ abruptEndCanary_t ;
typedef int POOL_ctx ;


 int FUNC_0 (scalar_t__,int const) ;
 int FUNC_1 (int * const) ;
 int FUNC_2 (int * const,int *,TYPE_1__*) ;
 int * FUNC_3 (int,int const) ;
 int FUNC_4 (int * const) ;
 scalar_t__ FUNC_5 (int * const,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(abruptEndCanary_t VAR_1)
{
    int const VAR_2 = 16;

    POOL_ctx* const VAR_3 = FUNC_3(3 , VAR_2 );
    FUNC_1(VAR_3);
    VAR_1.val = 0;

    { int VAR_4;
        for (VAR_4=0; VAR_4<VAR_2; VAR_4++)
            FUNC_2(VAR_3, &VAR_0, &VAR_1);
    }
    FUNC_0( FUNC_5(VAR_3, 1 ) , 0 );

    FUNC_4(VAR_3);
    FUNC_0(VAR_1.val, VAR_2);
    return 0;
}
