
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char const* const*,int) ;
 int FUNC_1 (int ,char*,char const* const,char const* const) ;
 int FUNC_2 (char const* const) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char const* const) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (char const* const,char*) ;

int
FUNC_8(int VAR_2, const char *const VAR_3[])
{
    int VAR_4;

    FUNC_0(VAR_2, VAR_3, 2);

    if (FUNC_7(VAR_3[1], "echo") == 0) {
        FUNC_0(VAR_2, VAR_3, 3);
        VAR_4 = FUNC_2(VAR_3[2]);
    } else if (FUNC_7(VAR_3[1], "exit-failure") == 0)
        VAR_4 = FUNC_3();
    else if (FUNC_7(VAR_3[1], "exit-signal") == 0)
        VAR_4 = FUNC_4();
    else if (FUNC_7(VAR_3[1], "exit-success") == 0)
        VAR_4 = FUNC_5();
    else if (FUNC_7(VAR_3[1], "stdout-stderr") == 0) {
        FUNC_0(VAR_2, VAR_3, 3);
        VAR_4 = FUNC_6(VAR_3[2]);
    } else {
        FUNC_1(VAR_1, "%s: Unknown helper %s\n", VAR_3[0], VAR_3[1]);
        VAR_4 = VAR_0;
    }

    return VAR_4;
}
