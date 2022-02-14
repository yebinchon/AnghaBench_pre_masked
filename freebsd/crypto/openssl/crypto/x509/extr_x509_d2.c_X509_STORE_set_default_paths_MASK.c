
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ) ;

int FUNC_6(X509_STORE *VAR_1)
{
    X509_LOOKUP *VAR_2;

    VAR_2 = FUNC_5(VAR_1, FUNC_2());
    if (VAR_2 == ((void*)0))
        return 0;
    FUNC_4(VAR_2, ((void*)0), VAR_0);

    VAR_2 = FUNC_5(VAR_1, FUNC_3());
    if (VAR_2 == ((void*)0))
        return 0;
    FUNC_1(VAR_2, ((void*)0), VAR_0);


    FUNC_0();

    return 1;
}
