
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *,unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char const*,int) ;

int
FUNC_4(unsigned char *VAR_0,
                               const unsigned char *VAR_1)
{
    unsigned char *VAR_2 = VAR_0;
    ge25519_p3 VAR_3;
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < 32; ++VAR_4) {
        VAR_2[VAR_4] = VAR_1[VAR_4];
    }
    FUNC_0(VAR_2);
    FUNC_2(&VAR_3, VAR_2);
    FUNC_1(VAR_0, &VAR_3);
    if (FUNC_3(VAR_1, 32) != 0) {
        return -1;
    }
    return 0;
}
