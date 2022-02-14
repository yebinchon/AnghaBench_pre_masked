
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,unsigned char*,int) ;
 int FUNC_3 (int *,int ,int *,unsigned char*,int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned char*,int ,int) ;

__attribute__((used)) static int
FUNC_6(unsigned char *VAR_1,
     unsigned char *VAR_2,
     unsigned char *VAR_3)
{
    EVP_CIPHER_CTX *VAR_4;
    unsigned char VAR_5[8];

    VAR_5[0] = VAR_1[0];
    VAR_5[1] = (VAR_1[0] << 7) | (VAR_1[1] >> 1);
    VAR_5[2] = (VAR_1[1] << 6) | (VAR_1[2] >> 2);
    VAR_5[3] = (VAR_1[2] << 5) | (VAR_1[3] >> 3);
    VAR_5[4] = (VAR_1[3] << 4) | (VAR_1[4] >> 4);
    VAR_5[5] = (VAR_1[4] << 3) | (VAR_1[5] >> 5);
    VAR_5[6] = (VAR_1[5] << 2) | (VAR_1[6] >> 6);
    VAR_5[7] = (VAR_1[6] << 1);

    VAR_4 = FUNC_1();
    if (VAR_4 == ((void*)0))
 return VAR_0;

    FUNC_3(VAR_4, FUNC_4(), ((void*)0), VAR_5, ((void*)0), 1);
    FUNC_2(VAR_4, VAR_3, VAR_2, 8);
    FUNC_0(VAR_4);
    FUNC_5(VAR_5, 0, sizeof(VAR_5));
    return 0;
}
