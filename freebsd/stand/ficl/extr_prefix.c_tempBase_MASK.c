
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int base; } ;
typedef int STRINGINFO ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int,int ) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0->base;
    STRINGINFO VAR_3 = FUNC_3(VAR_0);

    VAR_0->base = VAR_1;
    if (!FUNC_2(VAR_0, VAR_3))
    {
        int VAR_4 = FUNC_0(VAR_3);
        FUNC_4(VAR_0, "%.*s not recognized", VAR_4, FUNC_1(VAR_3));
    }

    VAR_0->base = VAR_2;
    return;
}
