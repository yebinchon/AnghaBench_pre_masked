
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned char**) ;

int FUNC_5(RSA *VAR_2, unsigned char **VAR_3)
{
    EVP_PKEY *VAR_4;
    int VAR_5;
    if (!VAR_2)
        return 0;
    VAR_4 = FUNC_2();
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }
    FUNC_3(VAR_4, VAR_2);
    VAR_5 = FUNC_4(VAR_4, VAR_3);
    FUNC_1(VAR_4);
    return VAR_5;
}
