
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int ch ;
typedef int atf_error_t ;
typedef int atf_dynstr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int const,char*,int) ;

char *
FUNC_8(const int VAR_0)
{
    char VAR_1;
    ssize_t VAR_2;
    atf_dynstr_t VAR_3;
    atf_error_t VAR_4;

    VAR_4 = FUNC_4(&VAR_3);
    FUNC_0(!FUNC_6(VAR_4));

    while ((VAR_2 = FUNC_7(VAR_0, &VAR_1, sizeof(VAR_1))) == sizeof(VAR_1) &&
           VAR_1 != '\n') {
        VAR_4 = FUNC_1(&VAR_3, "%c", VAR_1);
        FUNC_0(!FUNC_6(VAR_4));
    }
    FUNC_0(VAR_2 != -1);

    if (VAR_2 == 0 && FUNC_5(&VAR_3) == 0) {
        FUNC_2(&VAR_3);
        return ((void*)0);
    } else
        return FUNC_3(&VAR_3);
}
