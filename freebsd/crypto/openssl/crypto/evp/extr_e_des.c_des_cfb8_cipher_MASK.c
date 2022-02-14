
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (unsigned char const*,unsigned char*,int,long,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 size_t VAR_0 ;

__attribute__((used)) static int FUNC_4(EVP_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                           const unsigned char *VAR_3, size_t VAR_4)
{
    while (VAR_4 >= VAR_0) {
        FUNC_0(VAR_3, VAR_2, 8, (long)VAR_0,
                        FUNC_2(VAR_1),
                        (DES_cblock *)FUNC_3(VAR_1),
                        FUNC_1(VAR_1));
        VAR_4 -= VAR_0;
        VAR_3 += VAR_0;
        VAR_2 += VAR_0;
    }
    if (VAR_4)
        FUNC_0(VAR_3, VAR_2, 8, (long)VAR_4,
                        FUNC_2(VAR_1),
                        (DES_cblock *)FUNC_3(VAR_1),
                        FUNC_1(VAR_1));
    return 1;
}
