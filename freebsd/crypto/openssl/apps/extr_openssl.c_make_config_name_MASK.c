
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 () ;
 char* FUNC_2 (size_t,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static char *FUNC_7(void)
{
    const char *VAR_1;
    size_t VAR_2;
    char *VAR_3;

    if ((VAR_1 = FUNC_3("OPENSSL_CONF")) != ((void*)0))
        return FUNC_0(VAR_1);

    VAR_1 = FUNC_1();
    VAR_2 = FUNC_6(VAR_1) + 1 + FUNC_6(VAR_0) + 1;
    VAR_3 = FUNC_2(VAR_2, "config filename buffer");
    FUNC_5(VAR_3, VAR_1);

    FUNC_4(VAR_3, "/");

    FUNC_4(VAR_3, VAR_0);

    return VAR_3;
}
