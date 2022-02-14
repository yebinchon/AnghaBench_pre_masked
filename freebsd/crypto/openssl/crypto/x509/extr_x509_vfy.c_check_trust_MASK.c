
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ num_untrusted; int chain; TYPE_1__* param; TYPE_3__* dane; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_12__ {int pdpth; scalar_t__ mdpth; } ;
struct TYPE_10__ {int flags; int trust; } ;
typedef TYPE_3__ SSL_DANE ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int * FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int * FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_2__*,int *,int,int ) ;

__attribute__((used)) static int FUNC_10(X509_STORE_CTX *VAR_3, int VAR_4)
{
    int VAR_5;
    X509 *VAR_6 = ((void*)0);
    X509 *VAR_7;
    SSL_DANE *VAR_8 = VAR_3->dane;
    int VAR_9 = FUNC_6(VAR_3->chain);
    int VAR_10;





    if (FUNC_1(VAR_8) && VAR_4 > 0 && VAR_4 < VAR_9) {
        switch (VAR_10 = FUNC_4(VAR_3, VAR_4)) {
        case 128:
        case 129:
            return VAR_10;
        }
    }







    for (VAR_5 = VAR_4; VAR_5 < VAR_9; VAR_5++) {
        VAR_6 = FUNC_8(VAR_3->chain, VAR_5);
        VAR_10 = FUNC_2(VAR_6, VAR_3->param->trust, 0);

        if (VAR_10 == 128)
            goto trusted;
        if (VAR_10 == 129)
            goto rejected;
    }





    if (VAR_4 < VAR_9) {
        if (VAR_3->param->flags & VAR_2)
            goto trusted;
        return VAR_0;
    }

    if (VAR_4 == VAR_9 && VAR_3->param->flags & VAR_2) {




        VAR_5 = 0;
        VAR_6 = FUNC_8(VAR_3->chain, VAR_5);
        VAR_7 = FUNC_5(VAR_3, VAR_6);
        if (!VAR_7)
            return VAR_0;





        VAR_10 = FUNC_2(VAR_7, VAR_3->param->trust, 0);
        if (VAR_10 == 129) {
            FUNC_3(VAR_7);
            goto rejected;
        }


        (void) FUNC_7(VAR_3->chain, 0, VAR_7);
        FUNC_3(VAR_6);
        VAR_3->num_untrusted = 0;
        goto trusted;
    }





    return VAR_0;

 rejected:
    if (!FUNC_9(VAR_3, VAR_6, VAR_5, VAR_1))
        return 129;
    return VAR_0;

 trusted:
    if (!FUNC_0(VAR_8))
        return 128;
    if (VAR_8->pdpth < 0)
        VAR_8->pdpth = VAR_4;

    if (VAR_8->mdpth >= 0)
        return 128;
    return VAR_0;
}
