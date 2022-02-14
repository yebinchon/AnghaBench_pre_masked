
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; } ;
typedef int STRINGINFO ;
typedef int FICL_WORD ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_DICT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int * FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(FICL_VM *VAR_5)
{
    FICL_DICT *VAR_6 = FUNC_5(VAR_5);
    FICL_WORD *VAR_7;
    STRINGINFO VAR_8;

    FUNC_1(VAR_8, 0);
    FUNC_2(VAR_8, ((void*)0));

    VAR_5->state = VAR_0;
    VAR_7 = FUNC_3(VAR_6, VAR_8, VAR_3, VAR_1 | VAR_2);
    FUNC_0(VAR_7);
    FUNC_4(VAR_5, VAR_4);
    return;
}
