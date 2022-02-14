
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned char const*,int,int ) ;
 int FUNC_5 (unsigned char const*,int,int ) ;

__attribute__((used)) static int FUNC_6(EVP_CIPHER_CTX *VAR_4, const unsigned char *VAR_5,
                            const unsigned char *VAR_6, int VAR_7)
{
    int VAR_8;
    int VAR_9 = FUNC_2(VAR_4);

    if (VAR_7 || (VAR_9 != VAR_1 && VAR_9 != VAR_0))
        VAR_8 = FUNC_5(VAR_5, FUNC_1(VAR_4) * 8,
                                        FUNC_0(VAR_4));
    else
        VAR_8 = FUNC_4(VAR_5, FUNC_1(VAR_4) * 8,
                                        FUNC_0(VAR_4));
    if (VAR_8 < 0) {
        FUNC_3(VAR_2,VAR_3);
        return 0;
    }
    return 1;
}
