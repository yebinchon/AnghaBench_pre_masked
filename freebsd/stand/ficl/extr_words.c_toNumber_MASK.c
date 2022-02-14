
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ base; int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef scalar_t__ FICL_UNS ;
typedef int DPUNS ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 char FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_9(FICL_VM *VAR_0)
{
    FICL_UNS VAR_1;
    char *VAR_2;
    DPUNS VAR_3;
    FICL_UNS VAR_4 = VAR_0->base;
    FICL_UNS VAR_5;
    FICL_UNS VAR_6;





    VAR_1 = FUNC_1();
    VAR_2 = (char *)FUNC_0();
    VAR_3 = FUNC_6(VAR_0->pStack);

    for (VAR_5 = *VAR_2; VAR_1 > 0; VAR_5 = *++VAR_2, VAR_1--)
    {
        if (VAR_5 < '0')
            break;

        VAR_6 = VAR_5 - '0';

        if (VAR_6 > 9)
            VAR_6 = FUNC_5(VAR_5) - 'a' + 10;




        if (VAR_6 >= VAR_4)
            break;

        VAR_3 = FUNC_4(VAR_3, VAR_4, VAR_6);
    }

    FUNC_7(VAR_0->pStack, VAR_3);
    FUNC_2(VAR_2);
    FUNC_3(VAR_1);

    return;
}
