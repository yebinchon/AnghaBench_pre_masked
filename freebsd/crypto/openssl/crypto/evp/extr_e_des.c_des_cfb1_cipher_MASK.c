
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;
typedef int DES_cblock ;


 int FUNC_0 (unsigned char*,unsigned char*,int,int,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(EVP_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                           const unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5, VAR_6 = VAR_0 / 8;
    unsigned char VAR_7[1], VAR_8[1];

    if (VAR_4 < VAR_6)
        VAR_6 = VAR_4;

    while (VAR_4 && VAR_4 >= VAR_6) {
        for (VAR_5 = 0; VAR_5 < VAR_6 * 8; ++VAR_5) {
            VAR_7[0] = (VAR_3[VAR_5 / 8] & (1 << (7 - VAR_5 % 8))) ? 0x80 : 0;
            FUNC_0(VAR_7, VAR_8, 1, 1, FUNC_2(VAR_1),
                            (DES_cblock *)FUNC_3(VAR_1),
                            FUNC_1(VAR_1));
            VAR_2[VAR_5 / 8] =
                (VAR_2[VAR_5 / 8] & ~(0x80 >> (unsigned int)(VAR_5 % 8))) |
                ((VAR_8[0] & 0x80) >> (unsigned int)(VAR_5 % 8));
        }
        VAR_4 -= VAR_6;
        VAR_3 += VAR_6;
        VAR_2 += VAR_6;
        if (VAR_4 < VAR_6)
            VAR_6 = VAR_4;
    }

    return 1;
}
