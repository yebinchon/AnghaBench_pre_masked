
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char const*,int ) ;
 int * FUNC_4 (int *,int ) ;

int FUNC_5(X509_STORE *VAR_1, const char *VAR_2,
                              const char *VAR_3)
{
    X509_LOOKUP *VAR_4;

    if (VAR_2 != ((void*)0)) {
        VAR_4 = FUNC_4(VAR_1, FUNC_1());
        if (VAR_4 == ((void*)0))
            return 0;
        if (FUNC_3(VAR_4, VAR_2, VAR_0) != 1)
            return 0;
    }
    if (VAR_3 != ((void*)0)) {
        VAR_4 = FUNC_4(VAR_1, FUNC_2());
        if (VAR_4 == ((void*)0))
            return 0;
        if (FUNC_0(VAR_4, VAR_3, VAR_0) != 1)
            return 0;
    }
    if ((VAR_3 == ((void*)0)) && (VAR_2 == ((void*)0)))
        return 0;
    return 1;
}
