
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t count; scalar_t__* text; } ;
struct TYPE_7__ {scalar_t__ pad; } ;
typedef int STRINGINFO ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_STRING ;
typedef size_t FICL_COUNT ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__*,char*) ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,char,int) ;

__attribute__((used)) static void FUNC_9(FICL_VM *VAR_1)
{
    FICL_STRING *VAR_2;
    char VAR_3;
    STRINGINFO VAR_4;




    VAR_2 = (FICL_STRING *)VAR_1->pad;
    VAR_3 = (char)FUNC_0();
    VAR_4 = FUNC_8(VAR_1, VAR_3, 1);

    if (FUNC_2(VAR_4) > VAR_0-1)
        FUNC_4(VAR_4, VAR_0-1);

    VAR_2->count = (FICL_COUNT)FUNC_2(VAR_4);
    FUNC_6(VAR_2->text, FUNC_3(VAR_4), FUNC_2(VAR_4));

    VAR_2->text[VAR_2->count] = 0;
    FUNC_5(VAR_2->text, " ");

    FUNC_1(VAR_2);
    return;
}
