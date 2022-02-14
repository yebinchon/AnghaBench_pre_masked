
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;


 scalar_t__ FUNC_0 (int *,unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

int
FUNC_5(const unsigned char *VAR_0)
{
    ge25519_p3 VAR_1;

    if (FUNC_2(VAR_0) == 0 ||
        FUNC_1(VAR_0) != 0 ||
        FUNC_0(&VAR_1, VAR_0) != 0 ||
        FUNC_3(&VAR_1) == 0 ||
        FUNC_4(&VAR_1) == 0) {
        return 0;
    }
    return 1;
}
