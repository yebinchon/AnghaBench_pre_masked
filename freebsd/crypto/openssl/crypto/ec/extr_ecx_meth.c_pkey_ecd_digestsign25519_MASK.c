
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pkey; } ;
struct TYPE_7__ {int privkey; int pubkey; } ;
struct TYPE_5__ {TYPE_3__* ecx; } ;
struct TYPE_6__ {TYPE_1__ pkey; } ;
typedef int EVP_MD_CTX ;
typedef TYPE_3__ ECX_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char const*,size_t,int ,int ) ;
 TYPE_4__* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(EVP_MD_CTX *VAR_3, unsigned char *VAR_4,
                                    size_t *VAR_5, const unsigned char *VAR_6,
                                    size_t VAR_7)
{
    const ECX_KEY *VAR_8 = FUNC_2(VAR_3)->pkey->pkey.ecx;

    if (VAR_4 == ((void*)0)) {
        *VAR_5 = VAR_2;
        return 1;
    }
    if (*VAR_5 < VAR_2) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (FUNC_1(VAR_4, VAR_6, VAR_7, VAR_8->pubkey, VAR_8->privkey) == 0)
        return 0;
    *VAR_5 = VAR_2;
    return 1;
}
