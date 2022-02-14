
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pkey; int * public_key; } ;
typedef TYPE_1__ X509_PUBKEY ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int **,TYPE_1__*) ;

EVP_PKEY *FUNC_3(X509_PUBKEY *VAR_2)
{
    EVP_PKEY *VAR_3 = ((void*)0);

    if (VAR_2 == ((void*)0) || VAR_2->public_key == ((void*)0))
        return ((void*)0);

    if (VAR_2->pkey != ((void*)0))
        return VAR_2->pkey;
    FUNC_2(&VAR_3, VAR_2);

    if (VAR_3 != ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        FUNC_0(VAR_3);
    }

    return ((void*)0);
}
