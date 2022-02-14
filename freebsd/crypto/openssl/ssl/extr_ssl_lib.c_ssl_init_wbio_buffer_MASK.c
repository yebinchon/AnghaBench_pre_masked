
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wbio; int * bbio; } ;
typedef TYPE_1__ SSL ;
typedef int BIO ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(SSL *VAR_2)
{
    BIO *VAR_3;

    if (VAR_2->bbio != ((void*)0)) {

        return 1;
    }

    VAR_3 = FUNC_2(FUNC_0());
    if (VAR_3 == ((void*)0) || !FUNC_4(VAR_3, 1)) {
        FUNC_1(VAR_3);
        FUNC_5(VAR_1, VAR_0);
        return 0;
    }
    VAR_2->bbio = VAR_3;
    VAR_2->wbio = FUNC_3(VAR_3, VAR_2->wbio);

    return 1;
}
