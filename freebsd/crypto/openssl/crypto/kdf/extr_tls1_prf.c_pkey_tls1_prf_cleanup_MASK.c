
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int seedlen; int seed; int seclen; int sec; } ;
typedef TYPE_1__ TLS1_PRF_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(EVP_PKEY_CTX *VAR_0)
{
    TLS1_PRF_PKEY_CTX *VAR_1 = VAR_0->data;
    FUNC_1(VAR_1->sec, VAR_1->seclen);
    FUNC_0(VAR_1->seed, VAR_1->seedlen);
    FUNC_2(VAR_1);
}
