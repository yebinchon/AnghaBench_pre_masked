
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;
typedef int BN_GENCB ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,void (*) (int,int,void*),void*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int,int *) ;
 int * FUNC_5 () ;

DH *FUNC_6(int VAR_0, int VAR_1,
                           void (*VAR_2) (int, int, void *), void *VAR_3)
{
    BN_GENCB *VAR_4;
    DH *VAR_5 = ((void*)0);

    if ((VAR_5 = FUNC_5()) == ((void*)0))
        return ((void*)0);
    VAR_4 = FUNC_1();
    if (VAR_4 == ((void*)0)) {
        FUNC_3(VAR_5);
        return ((void*)0);
    }

    FUNC_2(VAR_4, VAR_2, VAR_3);

    if (FUNC_4(VAR_5, VAR_0, VAR_1, VAR_4)) {
        FUNC_0(VAR_4);
        return VAR_5;
    }
    FUNC_0(VAR_4);
    FUNC_3(VAR_5);
    return ((void*)0);
}
