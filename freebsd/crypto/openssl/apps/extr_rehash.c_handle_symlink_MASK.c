
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ossl_ssize_t ;
typedef int linktarget ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char const**) ;
 int VAR_0 ;
 int FUNC_2 (int,unsigned int,char*,int *,int ,int) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (char const*,char*,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,scalar_t__) ;
 int FUNC_7 (char const*,char**,int) ;
 char const** VAR_1 ;

__attribute__((used)) static int FUNC_8(const char *VAR_2, const char *VAR_3)
{
    unsigned int VAR_4 = 0;
    int VAR_5, VAR_6, VAR_7;
    unsigned char VAR_8;
    char VAR_9[VAR_0], *VAR_10;
    ossl_ssize_t VAR_11;

    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        VAR_8 = VAR_2[VAR_5];
        if (!FUNC_3(VAR_8))
            return -1;
        VAR_4 <<= 4;
        VAR_4 += FUNC_0(VAR_8);
    }
    if (VAR_2[VAR_5++] != '.')
        return -1;
    for (VAR_6 = FUNC_1(VAR_1) - 1; VAR_6 > 0; VAR_6--) {
        const char *VAR_12 = VAR_1[VAR_6];
        if (FUNC_6(VAR_12, &VAR_2[VAR_5], FUNC_5(VAR_12)) == 0)
            break;
    }
    VAR_5 += FUNC_5(VAR_1[VAR_6]);

    VAR_7 = FUNC_7(&VAR_2[VAR_5], &VAR_10, 10);
    if (*VAR_10 != '\0')
        return -1;

    VAR_11 = FUNC_4(VAR_3, VAR_9, sizeof(VAR_9));
    if (VAR_11 < 0 || VAR_11 >= (int)sizeof(VAR_9))
        return -1;
    VAR_9[VAR_11] = 0;

    return FUNC_2(VAR_6, VAR_4, VAR_9, ((void*)0), 0, VAR_7);
}
