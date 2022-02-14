
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* pmeth; int operation; int * app_data; int * data; scalar_t__ peerkey; scalar_t__ pkey; scalar_t__ engine; } ;
struct TYPE_9__ {scalar_t__ (* copy ) (TYPE_2__*,TYPE_2__*) ;} ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_2__*) ;

EVP_PKEY_CTX *FUNC_6(EVP_PKEY_CTX *VAR_3)
{
    EVP_PKEY_CTX *VAR_4;
    if (!VAR_3->pmeth || !VAR_3->pmeth->copy)
        return ((void*)0);


    if (VAR_3->engine && !FUNC_0(VAR_3->engine)) {
        FUNC_3(VAR_2, VAR_0);
        return 0;
    }

    VAR_4 = FUNC_4(sizeof(*VAR_4));
    if (VAR_4 == ((void*)0)) {
        FUNC_3(VAR_2, VAR_1);
        return ((void*)0);
    }

    VAR_4->pmeth = VAR_3->pmeth;

    VAR_4->engine = VAR_3->engine;


    if (VAR_3->pkey)
        FUNC_2(VAR_3->pkey);

    VAR_4->pkey = VAR_3->pkey;

    if (VAR_3->peerkey)
        FUNC_2(VAR_3->peerkey);

    VAR_4->peerkey = VAR_3->peerkey;

    VAR_4->data = ((void*)0);
    VAR_4->app_data = ((void*)0);
    VAR_4->operation = VAR_3->operation;

    if (VAR_3->pmeth->copy(VAR_4, VAR_3) > 0)
        return VAR_4;

    VAR_4->pmeth = ((void*)0);
    FUNC_1(VAR_4);
    return ((void*)0);

}
