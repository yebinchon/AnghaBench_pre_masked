
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oiv; int iv; } ;
typedef TYPE_1__ EVP_CIPHER_CTX ;
typedef int ASN1_TYPE ;


 int FUNC_0 (int *,int ,unsigned int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,unsigned int) ;

int FUNC_4(EVP_CIPHER_CTX *VAR_0, ASN1_TYPE *VAR_1)
{
    int VAR_2 = 0;
    unsigned int VAR_3;

    if (VAR_1 != ((void*)0)) {
        VAR_3 = FUNC_1(VAR_0);
        FUNC_2(VAR_3 <= sizeof(VAR_0->iv));
        VAR_2 = FUNC_0(VAR_1, VAR_0->oiv, VAR_3);
        if (VAR_2 != (int)VAR_3)
            return -1;
        else if (VAR_2 > 0)
            FUNC_3(VAR_0->iv, VAR_0->oiv, VAR_3);
    }
    return VAR_2;
}
