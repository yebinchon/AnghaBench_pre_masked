
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * sk; } ;
struct TYPE_13__ {int argp; int argl; int (* new_func ) (void*,void*,TYPE_3__*,int,int ,int ) ;} ;
struct TYPE_12__ {int meth; } ;
typedef TYPE_1__ EX_CALLBACKS ;
typedef TYPE_2__ EX_CALLBACK ;
typedef TYPE_3__ CRYPTO_EX_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__**) ;
 TYPE_2__** FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__**) ;
 int VAR_2 ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,int) ;
 int FUNC_9 (void*,void*,TYPE_3__*,int,int ,int ) ;

int FUNC_10(int VAR_3, void *VAR_4, CRYPTO_EX_DATA *VAR_5)
{
    int VAR_6, VAR_7;
    void *VAR_8;
    EX_CALLBACK **VAR_9 = ((void*)0);
    EX_CALLBACK *VAR_10[10];
    EX_CALLBACKS *VAR_11 = FUNC_6(VAR_3);

    if (VAR_11 == ((void*)0))
        return 0;

    VAR_5->sk = ((void*)0);

    VAR_6 = FUNC_7(VAR_11->meth);
    if (VAR_6 > 0) {
        if (VAR_6 < (int)FUNC_5(VAR_10))
            VAR_9 = VAR_10;
        else
            VAR_9 = FUNC_4(sizeof(*VAR_9) * VAR_6);
        if (VAR_9 != ((void*)0))
            for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
                VAR_9[VAR_7] = FUNC_8(VAR_11->meth, VAR_7);
    }
    FUNC_0(VAR_2);

    if (VAR_6 > 0 && VAR_9 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        if (VAR_9[VAR_7] && VAR_9[VAR_7]->new_func) {
            VAR_8 = FUNC_1(VAR_5, VAR_7);
            VAR_9[VAR_7]->new_func(VAR_4, VAR_8, VAR_5, VAR_7,
                                 VAR_9[VAR_7]->argl, VAR_9[VAR_7]->argp);
        }
    }
    if (VAR_9 != VAR_10)
        FUNC_3(VAR_9);
    return 1;
}
