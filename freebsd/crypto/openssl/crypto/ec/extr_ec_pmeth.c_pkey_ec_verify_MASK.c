
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ md; } ;
struct TYPE_8__ {TYPE_2__* pkey; TYPE_4__* data; } ;
struct TYPE_6__ {int * ec; } ;
struct TYPE_7__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef TYPE_4__ EC_PKEY_CTX ;
typedef int EC_KEY ;


 int FUNC_0 (int,unsigned char const*,size_t,unsigned char const*,size_t,int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_1,
                          const unsigned char *VAR_2, size_t VAR_3,
                          const unsigned char *VAR_4, size_t VAR_5)
{
    int VAR_6, VAR_7;
    EC_PKEY_CTX *VAR_8 = VAR_1->data;
    EC_KEY *VAR_9 = VAR_1->pkey->pkey.ec;

    if (VAR_8->md)
        VAR_7 = FUNC_1(VAR_8->md);
    else
        VAR_7 = VAR_0;

    VAR_6 = FUNC_0(VAR_7, VAR_4, VAR_5, VAR_2, VAR_3, VAR_9);

    return VAR_6;
}
