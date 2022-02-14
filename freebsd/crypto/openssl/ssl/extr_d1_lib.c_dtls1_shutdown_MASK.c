
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shutdown; } ;
typedef TYPE_1__ SSL ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(SSL *VAR_2)
{
    int VAR_3;

    BIO *VAR_4;

    VAR_4 = FUNC_3(VAR_2);
    if (VAR_4 != ((void*)0) && FUNC_1(VAR_4) &&
        !(VAR_2->shutdown & VAR_1)) {
        VAR_3 = FUNC_2(VAR_4);
        if (VAR_3 < 0)
            return -1;

        if (VAR_3 == 0)
            FUNC_0(FUNC_3(VAR_2), VAR_0, 1,
                     ((void*)0));
    }

    VAR_3 = FUNC_4(VAR_2);

    FUNC_0(FUNC_3(VAR_2), VAR_0, 0, ((void*)0));

    return VAR_3;
}
