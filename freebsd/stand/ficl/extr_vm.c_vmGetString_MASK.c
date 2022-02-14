
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* text; scalar_t__ count; } ;
typedef int STRINGINFO ;
typedef int FICL_VM ;
typedef TYPE_1__ FICL_STRING ;
typedef scalar_t__ FICL_COUNT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *,char,int ) ;

char *FUNC_5(FICL_VM *VAR_1, FICL_STRING *VAR_2, char VAR_3)
{
    STRINGINFO VAR_4 = FUNC_4(VAR_1, VAR_3, 0);

    if (FUNC_0(VAR_4) > VAR_0)
    {
        FUNC_2(VAR_4, VAR_0);
    }

    FUNC_3(VAR_2->text, FUNC_1(VAR_4), FUNC_0(VAR_4));
    VAR_2->text[FUNC_0(VAR_4)] = '\0';
    VAR_2->count = (FICL_COUNT)FUNC_0(VAR_4);

    return VAR_2->text + FUNC_0(VAR_4) + 1;
}
