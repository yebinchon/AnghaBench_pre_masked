
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* md_data; } ;
struct TYPE_4__ {size_t block_size; size_t num; scalar_t__ md_size; int* buf; int pad; int A; } ;
typedef TYPE_1__ KECCAK1600_CTX ;
typedef TYPE_2__ EVP_MD_CTX ;


 int FUNC_0 (int ,int*,size_t,size_t) ;
 int FUNC_1 (int ,unsigned char*,scalar_t__,size_t) ;
 int FUNC_2 (int*,int ,size_t) ;

__attribute__((used)) static int FUNC_3(EVP_MD_CTX *VAR_0, unsigned char *VAR_1)
{
    KECCAK1600_CTX *VAR_2 = VAR_0->md_data;
    size_t VAR_3 = VAR_2->block_size;
    size_t VAR_4 = VAR_2->num;

    if (VAR_2->md_size == 0)
        return 1;






    FUNC_2(VAR_2->buf + VAR_4, 0, VAR_3 - VAR_4);
    VAR_2->buf[VAR_4] = VAR_2->pad;
    VAR_2->buf[VAR_3 - 1] |= 0x80;

    (void)FUNC_0(VAR_2->A, VAR_2->buf, VAR_3, VAR_3);

    FUNC_1(VAR_2->A, VAR_1, VAR_2->md_size, VAR_3);

    return 1;
}
