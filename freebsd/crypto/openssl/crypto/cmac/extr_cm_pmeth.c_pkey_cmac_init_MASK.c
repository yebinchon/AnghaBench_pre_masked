
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ keygen_info_count; int * data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;


 int * FUNC_0 () ;

__attribute__((used)) static int FUNC_1(EVP_PKEY_CTX *VAR_0)
{
    VAR_0->data = FUNC_0();
    if (VAR_0->data == ((void*)0))
        return 0;
    VAR_0->keygen_info_count = 0;
    return 1;
}
