
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_error_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (scalar_t__,char*,char const*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 long FUNC_2 (char const*,char**,int) ;

atf_error_t
FUNC_3(const char *VAR_5, long *VAR_6)
{
    atf_error_t VAR_7;
    char *VAR_8;
    long VAR_9;

    VAR_4 = 0;
    VAR_9 = FUNC_2(VAR_5, &VAR_8, 10);
    if (VAR_5[0] == '\0' || *VAR_8 != '\0')
        VAR_7 = FUNC_0(VAR_0, "'%s' is not a number", VAR_5);
    else if (VAR_4 == VAR_1 || (VAR_9 == VAR_2 || VAR_9 == VAR_3))
        VAR_7 = FUNC_0(VAR_1, "'%s' is out of range", VAR_5);
    else {
        *VAR_6 = VAR_9;
        VAR_7 = FUNC_1();
    }

    return VAR_7;
}
