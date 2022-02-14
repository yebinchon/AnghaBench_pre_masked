
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int atf_dynstr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int *,int const,char*,int) ;
 size_t const FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*,size_t const) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int const,int*,int ) ;

void
FUNC_13(const pid_t VAR_0, const int VAR_1, const char *VAR_2,
               const char *VAR_3)
{
    int VAR_4;
    FUNC_0(FUNC_12(VAR_0, &VAR_4, 0) != -1);

    atf_dynstr_t VAR_5;
    FUNC_8(&VAR_5, VAR_0, "out", 1);

    atf_dynstr_t VAR_6;
    FUNC_8(&VAR_6, VAR_0, "err", 1);

    FUNC_5(FUNC_4(&VAR_5), "subprocess stdout: ");
    FUNC_5(FUNC_4(&VAR_6), "subprocess stderr: ");

    FUNC_0(FUNC_3(VAR_4));
    FUNC_1(VAR_1, FUNC_2(VAR_4));

    const char *VAR_7 = "save:";
    const size_t VAR_8 = FUNC_9(VAR_7);

    if (FUNC_9(VAR_2) > VAR_8 &&
        FUNC_10(VAR_2, VAR_7, VAR_8) == 0) {
        FUNC_7(FUNC_4(&VAR_5),
                            VAR_2 + VAR_8);
    } else {
        FUNC_0(FUNC_6(FUNC_4(&VAR_5),
                                           VAR_2));
    }

    if (FUNC_9(VAR_3) > VAR_8 &&
        FUNC_10(VAR_3, VAR_7, VAR_8) == 0) {
        FUNC_7(FUNC_4(&VAR_6),
                            VAR_3 + VAR_8);
    } else {
        FUNC_0(FUNC_6(FUNC_4(&VAR_6),
                                           VAR_3));
    }

    FUNC_0(FUNC_11(FUNC_4(&VAR_5)) != -1);
    FUNC_0(FUNC_11(FUNC_4(&VAR_6)) != -1);
}
