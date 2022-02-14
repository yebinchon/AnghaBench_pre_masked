
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pkey; } ;
struct TYPE_7__ {int pubkey; } ;
struct TYPE_5__ {TYPE_3__* ecx; } ;
struct TYPE_6__ {TYPE_1__ pkey; } ;
typedef int EVP_MD_CTX ;
typedef TYPE_3__ ECX_KEY ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char const*,size_t,unsigned char const*,int ,int *,int ) ;
 TYPE_4__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(EVP_MD_CTX *VAR_1, const unsigned char *VAR_2,
                                    size_t VAR_3, const unsigned char *VAR_4,
                                    size_t VAR_5)
{
    const ECX_KEY *VAR_6 = FUNC_1(VAR_1)->pkey->pkey.ecx;

    if (VAR_3 != VAR_0)
        return 0;

    return FUNC_0(VAR_4, VAR_5, VAR_2, VAR_6->pubkey, ((void*)0), 0);
}
