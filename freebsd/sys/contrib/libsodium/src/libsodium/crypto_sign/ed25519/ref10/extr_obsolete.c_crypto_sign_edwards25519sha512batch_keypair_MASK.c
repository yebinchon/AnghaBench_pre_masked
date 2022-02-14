
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (unsigned char*,int) ;

int
FUNC_4(unsigned char *VAR_0,
                                            unsigned char *VAR_1)
{
    ge25519_p3 VAR_2;

    FUNC_3(VAR_1, 32);
    FUNC_0(VAR_1, VAR_1, 32);
    VAR_1[0] &= 248;
    VAR_1[31] &= 127;
    VAR_1[31] |= 64;
    FUNC_2(&VAR_2, VAR_1);
    FUNC_1(VAR_0, &VAR_2);

    return 0;
}
