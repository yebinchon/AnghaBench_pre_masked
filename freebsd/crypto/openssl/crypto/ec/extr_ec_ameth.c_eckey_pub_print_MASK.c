
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ec; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int BIO ;
typedef int ASN1_PCTX ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_1, const EVP_PKEY *VAR_2, int VAR_3,
                           ASN1_PCTX *VAR_4)
{
    return FUNC_0(VAR_1, VAR_2->pkey.ec, VAR_3, VAR_0);
}
