
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * outw; int * inw; int ks; } ;
typedef int EVP_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_3(EVP_CIPHER_CTX *VAR_0, const unsigned char *VAR_1,
                             const unsigned char *VAR_2, int VAR_3)
{
    DES_cblock *VAR_4 = (DES_cblock *)VAR_1;

    FUNC_0(VAR_4, &FUNC_1(VAR_0)->ks);
    FUNC_2(&FUNC_1(VAR_0)->inw[0], &VAR_1[8], 8);
    FUNC_2(&FUNC_1(VAR_0)->outw[0], &VAR_1[16], 8);

    return 1;
}
