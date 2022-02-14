
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* appname; } ;
typedef TYPE_1__ OPENSSL_INIT_SETTINGS ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;

int FUNC_2(OPENSSL_INIT_SETTINGS *VAR_0,
                                    const char *VAR_1)
{
    char *VAR_2 = ((void*)0);

    if (VAR_1 != ((void*)0)) {
        VAR_2 = FUNC_1(VAR_1);
        if (VAR_2 == ((void*)0))
            return 0;
    }

    FUNC_0(VAR_0->appname);
    VAR_0->appname = VAR_2;

    return 1;
}
