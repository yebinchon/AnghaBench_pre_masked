
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pkey; } ;
struct TYPE_5__ {int * tbuf; } ;
typedef TYPE_1__ RSA_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(RSA_PKEY_CTX *VAR_2, EVP_PKEY_CTX *VAR_3)
{
    if (VAR_2->tbuf != ((void*)0))
        return 1;
    if ((VAR_2->tbuf = FUNC_1(FUNC_0(VAR_3->pkey))) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }
    return 1;
}
