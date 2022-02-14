
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DSA ;
typedef int BN_GENCB ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,void (*) (int,int,void*),void*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,unsigned char*,int,int*,unsigned long*,int *) ;
 int * FUNC_5 () ;

DSA *FUNC_6(int VAR_0,
                             unsigned char *VAR_1, int VAR_2,
                             int *VAR_3, unsigned long *VAR_4,
                             void (*VAR_5) (int, int, void *),
                             void *VAR_6)
{
    BN_GENCB *VAR_7;
    DSA *VAR_8;

    if ((VAR_8 = FUNC_5()) == ((void*)0))
        return ((void*)0);
    VAR_7 = FUNC_1();
    if (VAR_7 == ((void*)0))
        goto err;

    FUNC_2(VAR_7, VAR_5, VAR_6);

    if (FUNC_4(VAR_8, VAR_0, VAR_1, VAR_2,
                                   VAR_3, VAR_4, VAR_7)) {
        FUNC_0(VAR_7);
        return VAR_8;
    }
    FUNC_0(VAR_7);
err:
    FUNC_3(VAR_8);
    return ((void*)0);
}
