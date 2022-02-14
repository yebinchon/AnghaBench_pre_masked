
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_22__ {TYPE_2__* meth; int * engine; int ex_data; int flags; int version; int conv_form; int enc_flag; TYPE_10__* group; int * priv_key; int * pub_key; } ;
struct TYPE_21__ {scalar_t__ (* copy ) (TYPE_3__*,TYPE_3__ const*) ;int (* finish ) (TYPE_3__*) ;} ;
struct TYPE_20__ {scalar_t__ (* keycopy ) (TYPE_3__*,TYPE_3__ const*) ;int (* keyfinish ) (TYPE_3__*) ;} ;
struct TYPE_19__ {TYPE_1__* meth; } ;
typedef int EC_METHOD ;
typedef TYPE_3__ EC_KEY ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_10__*,TYPE_10__*) ;
 int FUNC_4 (TYPE_10__*) ;
 int * FUNC_5 (TYPE_10__*) ;
 TYPE_10__* FUNC_6 (int const*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (TYPE_10__*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int VAR_2 ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*,TYPE_3__ const*) ;
 scalar_t__ FUNC_16 (TYPE_3__*,TYPE_3__ const*) ;

EC_KEY *FUNC_17(EC_KEY *VAR_3, const EC_KEY *VAR_4)
{
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        FUNC_10(VAR_1, VAR_2);
        return ((void*)0);
    }
    if (VAR_4->meth != VAR_3->meth) {
        if (VAR_3->meth->finish != ((void*)0))
            VAR_3->meth->finish(VAR_3);
        if (VAR_3->group && VAR_3->group->meth->keyfinish)
            VAR_3->group->meth->keyfinish(VAR_3);

        if (FUNC_11(VAR_3->engine) == 0)
            return 0;
        VAR_3->engine = ((void*)0);

    }

    if (VAR_4->group != ((void*)0)) {
        const EC_METHOD *VAR_5 = FUNC_5(VAR_4->group);

        FUNC_4(VAR_3->group);
        VAR_3->group = FUNC_6(VAR_5);
        if (VAR_3->group == ((void*)0))
            return ((void*)0);
        if (!FUNC_3(VAR_3->group, VAR_4->group))
            return ((void*)0);


        if (VAR_4->pub_key != ((void*)0)) {
            FUNC_8(VAR_3->pub_key);
            VAR_3->pub_key = FUNC_9(VAR_4->group);
            if (VAR_3->pub_key == ((void*)0))
                return ((void*)0);
            if (!FUNC_7(VAR_3->pub_key, VAR_4->pub_key))
                return ((void*)0);
        }

        if (VAR_4->priv_key != ((void*)0)) {
            if (VAR_3->priv_key == ((void*)0)) {
                VAR_3->priv_key = FUNC_1();
                if (VAR_3->priv_key == ((void*)0))
                    return ((void*)0);
            }
            if (!FUNC_0(VAR_3->priv_key, VAR_4->priv_key))
                return ((void*)0);
            if (VAR_4->group->meth->keycopy
                && VAR_4->group->meth->keycopy(VAR_3, VAR_4) == 0)
                return ((void*)0);
        }
    }



    VAR_3->enc_flag = VAR_4->enc_flag;
    VAR_3->conv_form = VAR_4->conv_form;
    VAR_3->version = VAR_4->version;
    VAR_3->flags = VAR_4->flags;
    if (!FUNC_2(VAR_0,
                            &VAR_3->ex_data, &VAR_4->ex_data))
        return ((void*)0);

    if (VAR_4->meth != VAR_3->meth) {

        if (VAR_4->engine != ((void*)0) && FUNC_12(VAR_4->engine) == 0)
            return ((void*)0);
        VAR_3->engine = VAR_4->engine;

        VAR_3->meth = VAR_4->meth;
    }

    if (VAR_4->meth->copy != ((void*)0) && VAR_4->meth->copy(VAR_3, VAR_4) == 0)
        return ((void*)0);

    return VAR_3;
}
