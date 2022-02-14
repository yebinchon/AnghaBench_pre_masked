
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;







 int FUNC_0 (int *,unsigned char*,size_t*,unsigned char const*,size_t) ;
 int FUNC_1 (int *,unsigned char*,size_t*) ;
 int FUNC_2 (int *,unsigned char*,size_t*,unsigned char const*,size_t) ;
 int FUNC_3 (int *,unsigned char*,size_t*,unsigned char const*,size_t) ;
 int FUNC_4 (int *,unsigned char*,size_t*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_0, int VAR_1,
                    unsigned char *VAR_2, size_t *VAR_3,
                    const unsigned char *VAR_4, size_t VAR_5)
{
    int VAR_6 = 0;
    switch (VAR_1) {
    case 128:
        VAR_6 = FUNC_4(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
        break;

    case 129:
        VAR_6 = FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
        break;

    case 130:
        VAR_6 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
        break;

    case 132:
        VAR_6 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
        break;

    case 131:
        VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3);
        break;

    }
    return VAR_6;
}
