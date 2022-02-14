
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* md_data; } ;
struct TYPE_4__ {int md_size; } ;
typedef TYPE_1__ KECCAK1600_CTX ;
typedef TYPE_2__ EVP_MD_CTX ;




__attribute__((used)) static int FUNC_0(EVP_MD_CTX *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
    KECCAK1600_CTX *VAR_4 = VAR_0->md_data;

    switch (VAR_1) {
    case 128:
        VAR_4->md_size = VAR_2;
        return 1;
    default:
        return 0;
    }
}
