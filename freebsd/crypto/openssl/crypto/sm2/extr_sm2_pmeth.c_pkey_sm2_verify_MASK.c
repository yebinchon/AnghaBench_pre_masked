
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pkey; } ;
struct TYPE_5__ {int * ec; } ;
struct TYPE_6__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef int EC_KEY ;


 int FUNC_0 (unsigned char const*,size_t,unsigned char const*,size_t,int *) ;

__attribute__((used)) static int FUNC_1(EVP_PKEY_CTX *VAR_0,
                           const unsigned char *VAR_1, size_t VAR_2,
                           const unsigned char *VAR_3, size_t VAR_4)
{
    EC_KEY *VAR_5 = VAR_0->pkey->pkey.ec;

    return FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2, VAR_5);
}
