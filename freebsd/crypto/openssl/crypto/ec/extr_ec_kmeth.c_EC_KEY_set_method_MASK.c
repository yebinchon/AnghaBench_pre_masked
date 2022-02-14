
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void (* finish ) (TYPE_1__*) ;int (* init ) (TYPE_1__*) ;} ;
struct TYPE_7__ {TYPE_2__ const* meth; int * engine; } ;
typedef TYPE_2__ EC_KEY_METHOD ;
typedef TYPE_1__ EC_KEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(EC_KEY *VAR_0, const EC_KEY_METHOD *VAR_1)
{
    void (*VAR_2)(EC_KEY *VAR_3) = VAR_0->meth->finish;

    if (VAR_2 != ((void*)0))
        VAR_2(VAR_0);


    FUNC_0(VAR_0->engine);
    VAR_0->engine = ((void*)0);


    VAR_0->meth = VAR_1;
    if (VAR_1->init != ((void*)0))
        return VAR_1->init(VAR_0);
    return 1;
}
