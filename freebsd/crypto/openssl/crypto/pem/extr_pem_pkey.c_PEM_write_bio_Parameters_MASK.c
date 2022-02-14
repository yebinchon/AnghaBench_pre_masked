
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int i2d_of_void ;
struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {scalar_t__ param_encode; int pem_str; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (int *,char*,int *,TYPE_2__*,int *,int *,int ,int ,int *) ;

int FUNC_2(BIO *VAR_0, EVP_PKEY *VAR_1)
{
    char VAR_2[80];
    if (!VAR_1->ameth || !VAR_1->ameth->param_encode)
        return 0;

    FUNC_0(VAR_2, 80, "%s PARAMETERS", VAR_1->ameth->pem_str);
    return FUNC_1((i2d_of_void *)VAR_1->ameth->param_encode,
                              VAR_2, VAR_0, VAR_1, ((void*)0), ((void*)0), 0, 0, ((void*)0));
}
