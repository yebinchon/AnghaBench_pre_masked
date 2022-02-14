
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* pad; } ;
typedef TYPE_1__ FICL_VM ;


 char* FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    char *VAR_1 = FUNC_0(VAR_0);
    char *VAR_2 = FUNC_1(VAR_0);
    char *VAR_3 = VAR_0->pad;
    char VAR_4;




    for (VAR_4 = *VAR_1; (VAR_2 != VAR_1) && (VAR_4 != ')'); VAR_4 = *++VAR_1)
        *VAR_3++ = VAR_4;

    *VAR_3 = '\0';
    if ((VAR_2 != VAR_1) && (VAR_4 == ')'))
        VAR_1++;

    FUNC_2(VAR_0, VAR_0->pad, 0);
    FUNC_3(VAR_0, VAR_1);

    return;
}
