
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iv ;
typedef int EVP_CIPHER_CTX ;
typedef int ASN1_TYPE ;


 int FUNC_0 (int *,long*,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *,int ,int,int *) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,int *,int *,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(EVP_CIPHER_CTX *VAR_2, ASN1_TYPE *VAR_3)
{
    long VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6;
    unsigned int VAR_7;
    unsigned char VAR_8[VAR_1];

    if (VAR_3 != ((void*)0)) {
        VAR_7 = FUNC_2(VAR_2);
        FUNC_5(VAR_7 <= sizeof(VAR_8));
        VAR_5 = FUNC_0(VAR_3, &VAR_4, VAR_8, VAR_7);
        if (VAR_5 != (int)VAR_7)
            return -1;
        VAR_6 = FUNC_6((int)VAR_4);
        if (!VAR_6)
            return -1;
        if (VAR_5 > 0 && !FUNC_4(VAR_2, ((void*)0), ((void*)0), ((void*)0), VAR_8, -1))
            return -1;
        if (FUNC_1(VAR_2, VAR_0, VAR_6,
                                ((void*)0)) <= 0
                || FUNC_3(VAR_2, VAR_6 / 8) <= 0)
            return -1;
    }
    return VAR_5;
}
