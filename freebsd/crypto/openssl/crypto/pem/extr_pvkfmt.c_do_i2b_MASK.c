
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char* FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned int,int,int) ;
 unsigned int FUNC_6 (int ,int,unsigned int*) ;
 unsigned int FUNC_7 (int ,int,unsigned int*) ;
 int FUNC_8 (unsigned char**,int ,int) ;
 int FUNC_9 (unsigned char**,unsigned int) ;
 int FUNC_10 (unsigned char**,int ,int) ;

__attribute__((used)) static int FUNC_11(unsigned char **VAR_8, EVP_PKEY *VAR_9, int VAR_10)
{
    unsigned char *VAR_11;
    unsigned int VAR_12, VAR_13 = 0, VAR_14;
    int VAR_15, VAR_16 = 0;
    int VAR_17 = FUNC_2(VAR_9);
    if (VAR_17 == VAR_1) {
        VAR_12 = FUNC_6(FUNC_0(VAR_9), VAR_10, &VAR_13);
        VAR_14 = VAR_3;
    } else if (VAR_17 == VAR_2) {
        VAR_12 = FUNC_7(FUNC_1(VAR_9), VAR_10, &VAR_13);
        VAR_14 = VAR_4;
    } else
        return -1;
    if (VAR_12 == 0)
        return -1;
    VAR_15 = 16 + FUNC_5(VAR_12,
                              VAR_14 == VAR_3 ? 1 : 0, VAR_10);
    if (VAR_8 == ((void*)0))
        return VAR_15;
    if (*VAR_8)
        VAR_11 = *VAR_8;
    else {
        if ((VAR_11 = FUNC_3(VAR_15)) == ((void*)0)) {
            FUNC_4(VAR_7, VAR_0);
            return -1;
        }
        *VAR_8 = VAR_11;
        VAR_16 = 1;
    }
    if (VAR_10)
        *VAR_11++ = VAR_6;
    else
        *VAR_11++ = VAR_5;
    *VAR_11++ = 0x2;
    *VAR_11++ = 0;
    *VAR_11++ = 0;
    FUNC_9(&VAR_11, VAR_14);
    FUNC_9(&VAR_11, VAR_13);
    FUNC_9(&VAR_11, VAR_12);
    if (VAR_14 == VAR_3)
        FUNC_8(&VAR_11, FUNC_0(VAR_9), VAR_10);
    else
        FUNC_10(&VAR_11, FUNC_1(VAR_9), VAR_10);
    if (!VAR_16)
        *VAR_8 += VAR_15;
    return VAR_15;
}
