
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,void*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int) ;
 int * FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int * FUNC_5 () ;
 void* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int * VAR_3 ;
 int VAR_4 ;

BIO *FUNC_8(int VAR_5)
{
    BIO *VAR_6 = FUNC_3(VAR_4,
                        VAR_1 | (FUNC_7(VAR_5) ? VAR_0 : 0));
    void *VAR_7 = ((void*)0);






    if (FUNC_7(VAR_5) && (VAR_7 = FUNC_6("HARNESS_OSSL_PREFIX")) != ((void*)0)) {
        if (VAR_3 == ((void*)0))
            VAR_3 = FUNC_5();
        VAR_6 = FUNC_4(FUNC_2(VAR_3), VAR_6);
        FUNC_0(VAR_6, VAR_2, 0, VAR_7);
    }

    return VAR_6;
}
