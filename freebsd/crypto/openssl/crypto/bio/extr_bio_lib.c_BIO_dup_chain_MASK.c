
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ex_data; int num; int flags; int shutdown; int init; int cb_arg; int callback_ex; int callback; int method; struct TYPE_10__* next_bio; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int *,int *) ;

BIO *FUNC_6(BIO *VAR_1)
{
    BIO *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4, *VAR_5;

    for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next_bio) {
        if ((VAR_5 = FUNC_3(VAR_4->method)) == ((void*)0))
            goto err;
        VAR_5->callback = VAR_4->callback;
        VAR_5->callback_ex = VAR_4->callback_ex;
        VAR_5->cb_arg = VAR_4->cb_arg;
        VAR_5->init = VAR_4->init;
        VAR_5->shutdown = VAR_4->shutdown;
        VAR_5->flags = VAR_4->flags;


        VAR_5->num = VAR_4->num;

        if (!FUNC_0(VAR_4, (char *)VAR_5)) {
            FUNC_1(VAR_5);
            goto err;
        }


        if (!FUNC_5(VAR_0, &VAR_5->ex_data,
                                &VAR_4->ex_data)) {
            FUNC_1(VAR_5);
            goto err;
        }

        if (VAR_2 == ((void*)0)) {
            VAR_3 = VAR_5;
            VAR_2 = VAR_3;
        } else {
            FUNC_4(VAR_3, VAR_5);
            VAR_3 = VAR_5;
        }
    }
    return VAR_2;
 err:
    FUNC_2(VAR_2);

    return ((void*)0);
}
