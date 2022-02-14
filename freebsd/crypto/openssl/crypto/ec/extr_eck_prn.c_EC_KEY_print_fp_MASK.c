
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int EC_KEY ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;

int FUNC_6(FILE *VAR_3, const EC_KEY *VAR_4, int VAR_5)
{
    BIO *VAR_6;
    int VAR_7;

    if ((VAR_6 = FUNC_1(FUNC_2())) == ((void*)0)) {
        FUNC_5(VAR_1, VAR_2);
        return 0;
    }
    FUNC_3(VAR_6, VAR_3, VAR_0);
    VAR_7 = FUNC_4(VAR_6, VAR_4, VAR_5);
    FUNC_0(VAR_6);
    return VAR_7;
}
