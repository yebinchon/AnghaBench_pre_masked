
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CERT_LOOKUP ;
typedef int EVP_PKEY ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int const* VAR_1 ;
 int FUNC_1 (int,size_t*) ;

const SSL_CERT_LOOKUP *FUNC_2(const EVP_PKEY *VAR_2, size_t *VAR_3)
{
    int VAR_4 = FUNC_0(VAR_2);
    size_t VAR_5;

    if (VAR_4 == VAR_0)
        return ((void*)0);

    if (!FUNC_1(VAR_4, &VAR_5))
        return ((void*)0);

    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_5;

    return &VAR_1[VAR_5];
}
