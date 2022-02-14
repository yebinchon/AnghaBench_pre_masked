
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int,char*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_10(FICL_VM *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    char *VAR_8, *VAR_9;





    VAR_5 = FUNC_5(VAR_4->pStack);
    VAR_7 = FUNC_5(VAR_4->pStack);
    VAR_8 = FUNC_6(VAR_4->pStack);

    if ((VAR_7 < 0) || (VAR_8 == ((void*)0))) {
        FUNC_7(VAR_4->pStack, -1);
        return;
    }


    VAR_9 = (char *)FUNC_3(VAR_7+1);
    FUNC_0(VAR_8,VAR_9,VAR_7);
    VAR_9[VAR_7] = 0;


    VAR_6 = FUNC_4(VAR_9, VAR_5);
    FUNC_2(VAR_9);
    FUNC_7(VAR_4->pStack, VAR_6);
    return;
}
