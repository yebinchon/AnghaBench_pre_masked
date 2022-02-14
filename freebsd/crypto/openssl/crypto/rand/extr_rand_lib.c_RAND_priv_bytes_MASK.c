
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAND_METHOD ;
typedef int RAND_DRBG ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int * FUNC_1 () ;
 int const* FUNC_2 () ;
 int FUNC_3 (unsigned char*,int) ;
 int * FUNC_4 () ;

int FUNC_5(unsigned char *VAR_0, int VAR_1)
{
    const RAND_METHOD *VAR_2 = FUNC_4();
    RAND_DRBG *VAR_3;
    int VAR_4;

    if (VAR_2 != FUNC_2())
        return FUNC_3(VAR_0, VAR_1);

    VAR_3 = FUNC_1();
    if (VAR_3 == ((void*)0))
        return 0;

    VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1);
    return VAR_4;
}
