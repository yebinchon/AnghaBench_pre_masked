
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;
typedef int ENGINE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int const**) ;
 int * FUNC_2 () ;

__attribute__((used)) static int FUNC_3(ENGINE *VAR_2, const EVP_MD **VAR_3,
                           const int **VAR_4, int VAR_5)
{
    if (!VAR_3) {

        return FUNC_1(VAR_4);
    }

    if (VAR_5 == VAR_0)
        *VAR_3 = FUNC_2();
    else {




        *VAR_3 = ((void*)0);
        return 0;
    }
    return 1;
}
