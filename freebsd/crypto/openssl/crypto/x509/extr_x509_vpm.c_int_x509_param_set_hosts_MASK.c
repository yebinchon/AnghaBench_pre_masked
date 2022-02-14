
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hosts; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char,size_t) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int VAR_1 ;
 size_t FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(X509_VERIFY_PARAM *VAR_2, int VAR_3,
                                    const char *VAR_4, size_t VAR_5)
{
    char *VAR_6;





    if (VAR_5 == 0 || VAR_4 == ((void*)0))
        VAR_5 = VAR_4 ? FUNC_8(VAR_4) : 0;
    else if (VAR_4 && FUNC_2(VAR_4, '\0', VAR_5 > 1 ? VAR_5 - 1 : VAR_5))
        return 0;
    if (VAR_5 > 0 && VAR_4[VAR_5 - 1] == '\0')
        --VAR_5;

    if (VAR_3 == VAR_0) {
        FUNC_6(VAR_2->hosts, VAR_1);
        VAR_2->hosts = ((void*)0);
    }
    if (VAR_4 == ((void*)0) || VAR_5 == 0)
        return 1;

    VAR_6 = FUNC_1(VAR_4, VAR_5);
    if (VAR_6 == ((void*)0))
        return 0;

    if (VAR_2->hosts == ((void*)0) &&
        (VAR_2->hosts = FUNC_4()) == ((void*)0)) {
        FUNC_0(VAR_6);
        return 0;
    }

    if (!FUNC_7(VAR_2->hosts, VAR_6)) {
        FUNC_0(VAR_6);
        if (FUNC_5(VAR_2->hosts) == 0) {
            FUNC_3(VAR_2->hosts);
            VAR_2->hosts = ((void*)0);
        }
        return 0;
    }

    return 1;
}
