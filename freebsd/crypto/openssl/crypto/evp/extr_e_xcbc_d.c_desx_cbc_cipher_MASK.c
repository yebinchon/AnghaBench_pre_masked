
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int outw; int inw; int ks; } ;
typedef int EVP_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (unsigned char const*,unsigned char*,long,int *,int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t VAR_0 ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(EVP_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                           const unsigned char *VAR_3, size_t VAR_4)
{
    while (VAR_4 >= VAR_0) {
        FUNC_0(VAR_3, VAR_2, (long)VAR_0, &FUNC_3(VAR_1)->ks,
                         (DES_cblock *)FUNC_2(VAR_1),
                         &FUNC_3(VAR_1)->inw, &FUNC_3(VAR_1)->outw,
                         FUNC_1(VAR_1));
        VAR_4 -= VAR_0;
        VAR_3 += VAR_0;
        VAR_2 += VAR_0;
    }
    if (VAR_4)
        FUNC_0(VAR_3, VAR_2, (long)VAR_4, &FUNC_3(VAR_1)->ks,
                         (DES_cblock *)FUNC_2(VAR_1),
                         &FUNC_3(VAR_1)->inw, &FUNC_3(VAR_1)->outw,
                         FUNC_1(VAR_1));
    return 1;
}
