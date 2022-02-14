
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;
typedef int ge25519_p1p1 ;
typedef int ge25519_cached ;


 scalar_t__ FUNC_0 (int *,unsigned char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (unsigned char*,int *) ;
 int FUNC_5 (int *,int *,int *) ;

int
FUNC_6(unsigned char *VAR_0,
                        const unsigned char *VAR_1, const unsigned char *VAR_2)
{
    ge25519_p3 VAR_3, VAR_4, VAR_5;
    ge25519_p1p1 VAR_6;
    ge25519_cached VAR_7;

    if (FUNC_0(&VAR_3, VAR_1) != 0 || FUNC_1(&VAR_3) == 0 ||
        FUNC_0(&VAR_4, VAR_2) != 0 || FUNC_1(&VAR_4) == 0) {
        return -1;
    }
    FUNC_3(&VAR_7, &VAR_4);
    FUNC_5(&VAR_6, &VAR_3, &VAR_7);
    FUNC_2(&VAR_5, &VAR_6);
    FUNC_4(VAR_0, &VAR_5);

    return 0;
}
