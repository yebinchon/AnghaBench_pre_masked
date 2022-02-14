
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key_bits; } ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *) ;




 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(EVP_CIPHER_CTX *VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
    switch (VAR_2) {
    case 130:
        FUNC_1(VAR_1)->key_bits = FUNC_0(VAR_1) * 8;
        return 1;

    case 131:
        *(int *)VAR_4 = FUNC_1(VAR_1)->key_bits;
        return 1;

    case 128:
        if (VAR_3 > 0) {
            FUNC_1(VAR_1)->key_bits = VAR_3;
            return 1;
        }
        return 0;






    default:
        return -1;
    }
}
