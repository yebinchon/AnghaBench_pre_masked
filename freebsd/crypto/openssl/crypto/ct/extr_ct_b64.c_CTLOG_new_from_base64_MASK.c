
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int CTLOG ;


 int * FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (char const*,unsigned char**) ;
 int * FUNC_5 (int *,unsigned char const**,int) ;

int FUNC_6(CTLOG **VAR_3, const char *VAR_4, const char *VAR_5)
{
    unsigned char *VAR_6 = ((void*)0);
    int VAR_7;
    const unsigned char *VAR_8;
    EVP_PKEY *VAR_9 = ((void*)0);

    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    VAR_7 = FUNC_4(VAR_4, &VAR_6);
    if (VAR_7 < 0) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    VAR_8 = VAR_6;
    VAR_9 = FUNC_5(((void*)0), &VAR_8, VAR_7);
    FUNC_3(VAR_6);
    if (VAR_9 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    *VAR_3 = FUNC_0(VAR_9, VAR_5);
    if (*VAR_3 == ((void*)0)) {
        FUNC_2(VAR_9);
        return 0;
    }

    return 1;
}
