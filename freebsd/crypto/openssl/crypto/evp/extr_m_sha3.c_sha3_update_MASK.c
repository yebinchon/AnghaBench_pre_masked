
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* md_data; } ;
struct TYPE_4__ {size_t block_size; size_t num; unsigned char const* buf; int A; } ;
typedef TYPE_1__ KECCAK1600_CTX ;
typedef TYPE_2__ EVP_MD_CTX ;


 size_t FUNC_0 (int ,unsigned char const*,size_t,size_t) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_2(EVP_MD_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{
    KECCAK1600_CTX *VAR_3 = VAR_0->md_data;
    const unsigned char *VAR_4 = VAR_1;
    size_t VAR_5 = VAR_3->block_size;
    size_t VAR_6, VAR_7;

    if (VAR_2 == 0)
        return 1;

    if ((VAR_6 = VAR_3->num) != 0) {
        VAR_7 = VAR_5 - VAR_6;

        if (VAR_2 < VAR_7) {
            FUNC_1(VAR_3->buf + VAR_6, VAR_4, VAR_2);
            VAR_3->num += VAR_2;
            return 1;
        }





        FUNC_1(VAR_3->buf + VAR_6, VAR_4, VAR_7);
        VAR_4 += VAR_7, VAR_2 -= VAR_7;
        (void)FUNC_0(VAR_3->A, VAR_3->buf, VAR_5, VAR_5);
        VAR_3->num = 0;

    }

    if (VAR_2 >= VAR_5)
        VAR_7 = FUNC_0(VAR_3->A, VAR_4, VAR_2, VAR_5);
    else
        VAR_7 = VAR_2;

    if (VAR_7) {
        FUNC_1(VAR_3->buf, VAR_4 + VAR_2 - VAR_7, VAR_7);
        VAR_3->num = VAR_7;
    }

    return 1;
}
