
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(SSL *VAR_0, BIO *VAR_1, BIO *VAR_2)
{






    if (VAR_1 == FUNC_1(VAR_0) && VAR_2 == FUNC_2(VAR_0))
        return;





    if (VAR_1 != ((void*)0) && VAR_1 == VAR_2)
        FUNC_0(VAR_1);




    if (VAR_1 == FUNC_1(VAR_0)) {
        FUNC_4(VAR_0, VAR_2);
        return;
    }





    if (VAR_2 == FUNC_2(VAR_0) && FUNC_1(VAR_0) != FUNC_2(VAR_0)) {
        FUNC_3(VAR_0, VAR_1);
        return;
    }


    FUNC_3(VAR_0, VAR_1);
    FUNC_4(VAR_0, VAR_2);
}
