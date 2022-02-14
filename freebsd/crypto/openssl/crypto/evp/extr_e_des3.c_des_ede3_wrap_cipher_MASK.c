
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_3 (int *,unsigned char*,unsigned char const*,size_t) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_5(EVP_CIPHER_CTX *VAR_3, unsigned char *VAR_4,
                                const unsigned char *VAR_5, size_t VAR_6)
{





    if (VAR_6 >= VAR_1 || VAR_6 % 8)
        return -1;

    if (FUNC_4(VAR_4, VAR_5, VAR_6)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    if (FUNC_0(VAR_3))
        return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
    else
        return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
}
