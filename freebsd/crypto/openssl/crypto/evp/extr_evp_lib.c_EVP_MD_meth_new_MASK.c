
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int pkey_type; } ;
typedef TYPE_1__ EVP_MD ;


 TYPE_1__* FUNC_0 (int) ;

EVP_MD *FUNC_1(int VAR_0, int VAR_1)
{
    EVP_MD *VAR_2 = FUNC_0(sizeof(*VAR_2));

    if (VAR_2 != ((void*)0)) {
        VAR_2->type = VAR_0;
        VAR_2->pkey_type = VAR_1;
    }
    return VAR_2;
}
