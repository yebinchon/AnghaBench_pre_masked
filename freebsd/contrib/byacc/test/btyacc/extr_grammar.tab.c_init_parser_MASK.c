
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int keywords ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int *,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;

void
FUNC_2 (void)
{
    static const char *VAR_2[] = {
 "const",
 "restrict",
 "volatile",
 "interrupt",
 "__builtin_va_arg",
 "__builtin_va_list",
 "__const",
 "__const__",
 "__inline",
 "__inline__",
 "__restrict",
 "__restrict__",
 "__volatile",
 "__volatile__",

    };
    unsigned VAR_3;


    VAR_1 = FUNC_1();
    for (VAR_3 = 0; VAR_3 < sizeof(VAR_2)/sizeof(VAR_2[0]); ++VAR_3) {
 FUNC_0(VAR_1, VAR_2[VAR_3], ((void*)0), VAR_0);
    }
}
