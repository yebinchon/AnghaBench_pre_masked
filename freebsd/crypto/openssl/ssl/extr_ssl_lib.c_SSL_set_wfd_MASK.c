
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(SSL *VAR_4, int VAR_5)
{
    BIO *VAR_6 = FUNC_6(VAR_4);

    if (VAR_6 == ((void*)0) || FUNC_1(VAR_6) != VAR_1
        || (int)FUNC_0(VAR_6, ((void*)0)) != VAR_5) {
        BIO *VAR_7 = FUNC_2(FUNC_3());

        if (VAR_7 == ((void*)0)) {
            FUNC_8(VAR_3, VAR_2);
            return 0;
        }
        FUNC_4(VAR_7, VAR_5, VAR_0);
        FUNC_7(VAR_4, VAR_7);
    } else {
        FUNC_5(VAR_6);
        FUNC_7(VAR_4, VAR_6);
    }
    return 1;
}
