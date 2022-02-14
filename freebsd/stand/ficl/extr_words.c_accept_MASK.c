
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_UNS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 char* FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_9(FICL_VM *VAR_1)
{
    FICL_UNS VAR_2, VAR_3;
    char *VAR_4;
    char *VAR_5, *VAR_6;





    VAR_5 = FUNC_5(VAR_1);
    VAR_6 = FUNC_6(VAR_1);
    VAR_3 = VAR_6 - VAR_5;
    if (VAR_3 == 0)
        FUNC_7(VAR_1, VAR_0);




    VAR_2 = FUNC_1(VAR_1->pStack);
    VAR_4 = FUNC_2(VAR_1->pStack);

    VAR_3 = (VAR_2 < VAR_3) ? VAR_2 : VAR_3;
    FUNC_3(VAR_4, FUNC_5(VAR_1), VAR_3);
    VAR_5 += VAR_3;
    FUNC_8(VAR_1, VAR_5);
    FUNC_0(VAR_3);

    return;
}
