
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int encrypt; } ;
typedef TYPE_1__ EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int*,unsigned char const*,int) ;

int FUNC_2(EVP_CIPHER_CTX *VAR_2, unsigned char *VAR_3, int *VAR_4,
                      const unsigned char *VAR_5, int VAR_6)
{

    if (!VAR_2->encrypt) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
