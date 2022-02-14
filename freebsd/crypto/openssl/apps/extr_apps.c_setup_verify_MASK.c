
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char const*,int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int VAR_2 ;

X509_STORE *FUNC_9(const char *VAR_3, const char *VAR_4, int VAR_5, int VAR_6)
{
    X509_STORE *VAR_7 = FUNC_8();
    X509_LOOKUP *VAR_8;

    if (VAR_7 == ((void*)0))
        goto end;

    if (VAR_3 != ((void*)0) || !VAR_5) {
        VAR_8 = FUNC_6(VAR_7, FUNC_3());
        if (VAR_8 == ((void*)0))
            goto end;
        if (VAR_3) {
            if (!FUNC_5(VAR_8, VAR_3, VAR_1)) {
                FUNC_0(VAR_2, "Error loading file %s\n", VAR_3);
                goto end;
            }
        } else {
            FUNC_5(VAR_8, ((void*)0), VAR_0);
        }
    }

    if (VAR_4 != ((void*)0) || !VAR_6) {
        VAR_8 = FUNC_6(VAR_7, FUNC_4());
        if (VAR_8 == ((void*)0))
            goto end;
        if (VAR_4) {
            if (!FUNC_2(VAR_8, VAR_4, VAR_1)) {
                FUNC_0(VAR_2, "Error loading directory %s\n", VAR_4);
                goto end;
            }
        } else {
            FUNC_2(VAR_8, ((void*)0), VAR_0);
        }
    }

    FUNC_1();
    return VAR_7;
 end:
    FUNC_7(VAR_7);
    return ((void*)0);
}
