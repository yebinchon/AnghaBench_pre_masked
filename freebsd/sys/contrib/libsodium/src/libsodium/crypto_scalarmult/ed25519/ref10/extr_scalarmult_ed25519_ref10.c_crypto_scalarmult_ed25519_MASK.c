
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;


 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 scalar_t__ FUNC_4 (unsigned char const*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*,int *) ;
 int FUNC_7 (int *,unsigned char*,int *) ;
 scalar_t__ FUNC_8 (unsigned char const*,int) ;

int
FUNC_9(unsigned char *VAR_0, const unsigned char *VAR_1,
                          const unsigned char *VAR_2)
{
    unsigned char *VAR_3 = VAR_0;
    ge25519_p3 VAR_4;
    ge25519_p3 VAR_5;
    unsigned int VAR_6;

    if (FUNC_4(VAR_2) == 0 || FUNC_3(VAR_2) != 0 ||
        FUNC_2(&VAR_5, VAR_2) != 0 || FUNC_5(&VAR_5) == 0) {
        return -1;
    }
    for (VAR_6 = 0; VAR_6 < 32; ++VAR_6) {
        VAR_3[VAR_6] = VAR_1[VAR_6];
    }
    FUNC_0(VAR_3);
    FUNC_7(&VAR_4, VAR_3, &VAR_5);
    FUNC_6(VAR_0, &VAR_4);
    if (FUNC_1(VAR_0) != 0 || FUNC_8(VAR_1, 32)) {
        return -1;
    }
    return 0;
}
