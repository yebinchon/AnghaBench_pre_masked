
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;
typedef int ASN1_TYPE ;


 int FUNC_0 (int *,long,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 long FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(EVP_CIPHER_CTX *VAR_0, ASN1_TYPE *VAR_1)
{
    long VAR_2;
    int VAR_3 = 0, VAR_4;

    if (VAR_1 != ((void*)0)) {
        VAR_2 = FUNC_3(VAR_0);
        VAR_4 = FUNC_1(VAR_0);
        VAR_3 = FUNC_0(VAR_1, VAR_2,
                                          (unsigned char *)FUNC_2(VAR_0),
                                          VAR_4);
    }
    return VAR_3;
}
