
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BIO ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int const*) ;

int FUNC_5(FILE *VAR_1, const BIGNUM *VAR_2)
{
    BIO *VAR_3;
    int VAR_4;

    if ((VAR_3 = FUNC_1(FUNC_2())) == ((void*)0))
        return 0;
    FUNC_3(VAR_3, VAR_1, VAR_0);
    VAR_4 = FUNC_4(VAR_3, VAR_2);
    FUNC_0(VAR_3);
    return VAR_4;
}
