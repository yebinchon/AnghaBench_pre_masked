
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keygen_info_count; int* keygen_info; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;



int FUNC_0(EVP_PKEY_CTX *VAR_0, int VAR_1)
{
    if (VAR_1 == -1)
        return VAR_0->keygen_info_count;
    if (VAR_1 < 0 || VAR_1 > VAR_0->keygen_info_count)
        return 0;
    return VAR_0->keygen_info[VAR_1];
}
