
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int * sk; } ;
struct TYPE_16__ {int argp; int argl; int (* dup_func ) (TYPE_3__ const*,TYPE_3__ const*,void**,int,int ,int ) ;} ;
struct TYPE_15__ {int meth; } ;
typedef TYPE_1__ EX_CALLBACKS ;
typedef TYPE_2__ EX_CALLBACK ;
typedef TYPE_3__ const CRYPTO_EX_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_3__ const*,int) ;
 int FUNC_2 (TYPE_3__ const*,int,void*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__**) ;
 TYPE_2__** FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_2__**) ;
 int VAR_2 ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__ const*,TYPE_3__ const*,void**,int,int ,int ) ;

int FUNC_12(int VAR_3, CRYPTO_EX_DATA *VAR_4,
                       const CRYPTO_EX_DATA *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    void *VAR_9;
    EX_CALLBACK *VAR_10[10];
    EX_CALLBACK **VAR_11 = ((void*)0);
    EX_CALLBACKS *VAR_12;
    int VAR_13 = 0;

    if (VAR_5->sk == ((void*)0))

        return 1;
    if ((VAR_12 = FUNC_7(VAR_3)) == ((void*)0))
        return 0;

    VAR_6 = FUNC_8(VAR_12->meth);
    VAR_7 = FUNC_10(VAR_5->sk);
    if (VAR_7 < VAR_6)
        VAR_6 = VAR_7;
    if (VAR_6 > 0) {
        if (VAR_6 < (int)FUNC_6(VAR_10))
            VAR_11 = VAR_10;
        else
            VAR_11 = FUNC_5(sizeof(*VAR_11) * VAR_6);
        if (VAR_11 != ((void*)0))
            for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
                VAR_11[VAR_8] = FUNC_9(VAR_12->meth, VAR_8);
    }
    FUNC_0(VAR_2);

    if (VAR_6 == 0)
        return 1;
    if (VAR_11 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        return 0;
    }







    if (!FUNC_2(VAR_4, VAR_6 - 1, FUNC_1(VAR_4, VAR_6 - 1)))
        goto err;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        VAR_9 = FUNC_1(VAR_5, VAR_8);
        if (VAR_11[VAR_8] && VAR_11[VAR_8]->dup_func)
            if (!VAR_11[VAR_8]->dup_func(VAR_4, VAR_5, &VAR_9, VAR_8,
                                      VAR_11[VAR_8]->argl, VAR_11[VAR_8]->argp))
                goto err;
        FUNC_2(VAR_4, VAR_8, VAR_9);
    }
    VAR_13 = 1;
 err:
    if (VAR_11 != VAR_10)
        FUNC_4(VAR_11);
    return VAR_13;
}
