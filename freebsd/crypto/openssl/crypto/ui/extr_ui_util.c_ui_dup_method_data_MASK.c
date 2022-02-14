
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pem_password_cb_data {int dummy; } ;
typedef int CRYPTO_EX_DATA ;


 void* FUNC_0 (void*,int) ;

__attribute__((used)) static int FUNC_1(CRYPTO_EX_DATA *VAR_0, const CRYPTO_EX_DATA *VAR_1,
                              void *VAR_2, int VAR_3, long VAR_4, void *VAR_5)
{
    void **VAR_6 = (void **)VAR_2;
    if (*VAR_6 != ((void*)0))
        *VAR_6 = FUNC_0(*VAR_6, sizeof(struct pem_password_cb_data));
    return 1;
}
