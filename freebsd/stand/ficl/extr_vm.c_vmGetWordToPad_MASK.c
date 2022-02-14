
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pad; } ;
typedef int STRINGINFO ;
typedef TYPE_1__ FICL_VM ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 size_t VAR_0 ;
 int FUNC_3 (char*,int ,size_t) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(FICL_VM *VAR_1)
{
    STRINGINFO VAR_2;
    char *VAR_3 = (char *)VAR_1->pad;
    VAR_2 = FUNC_4(VAR_1);

    if (FUNC_0(VAR_2) > VAR_0)
        FUNC_2(VAR_2, VAR_0);

    FUNC_3(VAR_3, FUNC_1(VAR_2), FUNC_0(VAR_2));
    VAR_3[FUNC_0(VAR_2)] = '\0';
    return (int)(FUNC_0(VAR_2));
}
