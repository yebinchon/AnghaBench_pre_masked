
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * d; int * w; } ;
typedef TYPE_1__ escrypt_block_t ;



__attribute__((used)) static inline void
FUNC_0(escrypt_block_t *VAR_0, const escrypt_block_t *VAR_1, size_t VAR_2)
{
    size_t VAR_3, VAR_4;







    VAR_4 = (VAR_2 >> 3);
    for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
        VAR_0->d[VAR_3] = VAR_1->d[VAR_3];
    }

}
