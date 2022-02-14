
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pkey_type; int type; } ;
typedef TYPE_1__ EVP_MD ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int) ;

EVP_MD *FUNC_2(const EVP_MD *VAR_0)
{
    EVP_MD *VAR_1 = FUNC_0(VAR_0->type, VAR_0->pkey_type);

    if (VAR_1 != ((void*)0))
        FUNC_1(VAR_1, VAR_0, sizeof(*VAR_1));
    return VAR_1;
}
