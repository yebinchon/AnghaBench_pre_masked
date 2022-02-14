
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; size_t max_request; int * adin_pool; int max_adinlen; } ;
typedef TYPE_1__ RAND_DRBG ;


 size_t FUNC_0 (TYPE_1__*,unsigned char*,size_t,int ,unsigned char*,size_t) ;
 int FUNC_1 (int *,unsigned char*) ;
 size_t FUNC_2 (int *,unsigned char**) ;
 int * FUNC_3 (int ,int ,int ,int ) ;

int FUNC_4(RAND_DRBG *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3 = ((void*)0);
    size_t VAR_4;
    size_t VAR_5;
    size_t VAR_6 = 0;

    if (VAR_0->adin_pool == ((void*)0)) {
        if (VAR_0->type == 0)
            goto err;
        VAR_0->adin_pool = FUNC_3(0, 0, 0, VAR_0->max_adinlen);
        if (VAR_0->adin_pool == ((void*)0))
            goto err;
    }

    VAR_4 = FUNC_2(VAR_0->adin_pool,
                                                   &VAR_3);

    for ( ; VAR_2 > 0; VAR_2 -= VAR_5, VAR_1 += VAR_5) {
        VAR_5 = VAR_2;
        if (VAR_5 > VAR_0->max_request)
            VAR_5 = VAR_0->max_request;
        VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_5, 0, VAR_3, VAR_4);
        if (!VAR_6)
            goto err;
    }
    VAR_6 = 1;

 err:
    if (VAR_3 != ((void*)0))
        FUNC_1(VAR_0->adin_pool, VAR_3);

    return VAR_6;
}
