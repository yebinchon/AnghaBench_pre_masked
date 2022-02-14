
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char const*,char**) ;

atf_error_t
FUNC_6(const char *VAR_0, const char *VAR_1,
                       atf_error_t (*VAR_2)(const char *, void *),
                       void *VAR_3)
{
    atf_error_t VAR_4;
    char *VAR_5, *VAR_6, *VAR_7;

    VAR_5 = FUNC_4(VAR_0);
    if (VAR_5 == ((void*)0)) {
        VAR_4 = FUNC_2();
        goto out;
    }

    VAR_4 = FUNC_1();
    VAR_6 = FUNC_5(VAR_5, VAR_1, &VAR_7);
    while (VAR_6 != ((void*)0) && !FUNC_0(VAR_4)) {
        VAR_4 = VAR_2(VAR_6, VAR_3);
        VAR_6 = FUNC_5(((void*)0), VAR_1, &VAR_7);
    }

    FUNC_3(VAR_5);
out:
    return VAR_4;
}
