
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ameth; } ;
struct TYPE_6__ {int (* param_print ) (int *,TYPE_2__ const*,int,int *) ;} ;
typedef TYPE_2__ EVP_PKEY ;
typedef int BIO ;
typedef int ASN1_PCTX ;


 int FUNC_0 (int *,TYPE_2__ const*,int,int *) ;
 int FUNC_1 (int *,TYPE_2__ const*,int,char*) ;

int FUNC_2(BIO *VAR_0, const EVP_PKEY *VAR_1,
                          int VAR_2, ASN1_PCTX *VAR_3)
{
    if (VAR_1->ameth && VAR_1->ameth->param_print)
        return VAR_1->ameth->param_print(VAR_0, VAR_1, VAR_2, VAR_3);
    return FUNC_1(VAR_0, VAR_1, VAR_2, "Parameters");
}
