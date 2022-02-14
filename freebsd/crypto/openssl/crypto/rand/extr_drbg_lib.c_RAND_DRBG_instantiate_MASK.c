
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t strength; size_t min_entropylen; size_t max_entropylen; size_t max_perslen; scalar_t__ state; size_t min_noncelen; size_t (* get_nonce ) (TYPE_2__*,unsigned char**,int,size_t,size_t) ;size_t max_noncelen; int reseed_next_counter; size_t (* get_entropy ) (TYPE_2__*,unsigned char**,size_t,size_t,size_t,int ) ;int reseed_gen_counter; int (* cleanup_nonce ) (TYPE_2__*,unsigned char*,size_t) ;int (* cleanup_entropy ) (TYPE_2__*,unsigned char*,size_t) ;int reseed_prop_counter; int reseed_time; TYPE_1__* meth; } ;
struct TYPE_9__ {int (* instantiate ) (TYPE_2__*,unsigned char*,size_t,unsigned char*,size_t,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ RAND_DRBG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (TYPE_2__*,unsigned char**,size_t,size_t,size_t,int ) ;
 size_t FUNC_2 (TYPE_2__*,unsigned char**,int,size_t,size_t) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,size_t,unsigned char*,size_t,unsigned char const*,size_t) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,size_t) ;
 int FUNC_5 (TYPE_2__*,unsigned char*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

int FUNC_9(RAND_DRBG *VAR_11,
                          const unsigned char *VAR_12, size_t VAR_13)
{
    unsigned char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    size_t VAR_16 = 0, VAR_17 = 0;
    size_t VAR_18 = VAR_11->strength;
    size_t VAR_19 = VAR_11->min_entropylen;
    size_t VAR_20 = VAR_11->max_entropylen;

    if (VAR_13 > VAR_11->max_perslen) {
        FUNC_0(VAR_3,
                VAR_10);
        goto end;
    }

    if (VAR_11->meth == ((void*)0)) {
        FUNC_0(VAR_3,
                VAR_9);
        goto end;
    }

    if (VAR_11->state != VAR_2) {
        FUNC_0(VAR_3,
                VAR_11->state == VAR_0 ? VAR_8
                                          : VAR_4);
        goto end;
    }

    VAR_11->state = VAR_0;







    if (VAR_11->min_noncelen > 0 && VAR_11->get_nonce == ((void*)0)) {
        VAR_18 += VAR_11->strength / 2;
        VAR_19 += VAR_11->min_noncelen;
        VAR_20 += VAR_11->max_noncelen;
    }

    VAR_11->reseed_next_counter = FUNC_7(&VAR_11->reseed_prop_counter);
    if (VAR_11->reseed_next_counter) {
        VAR_11->reseed_next_counter++;
        if(!VAR_11->reseed_next_counter)
            VAR_11->reseed_next_counter = 1;
    }

    if (VAR_11->get_entropy != ((void*)0))
        VAR_17 = VAR_11->get_entropy(VAR_11, &VAR_15, VAR_18,
                                       VAR_19, VAR_20, 0);
    if (VAR_17 < VAR_19
            || VAR_17 > VAR_20) {
        FUNC_0(VAR_3, VAR_6);
        goto end;
    }

    if (VAR_11->min_noncelen > 0 && VAR_11->get_nonce != ((void*)0)) {
        VAR_16 = VAR_11->get_nonce(VAR_11, &VAR_14, VAR_11->strength / 2,
                                   VAR_11->min_noncelen, VAR_11->max_noncelen);
        if (VAR_16 < VAR_11->min_noncelen || VAR_16 > VAR_11->max_noncelen) {
            FUNC_0(VAR_3, VAR_7);
            goto end;
        }
    }

    if (!VAR_11->meth->instantiate(VAR_11, VAR_15, VAR_17,
                         VAR_14, VAR_16, VAR_12, VAR_13)) {
        FUNC_0(VAR_3, VAR_5);
        goto end;
    }

    VAR_11->state = VAR_1;
    VAR_11->reseed_gen_counter = 1;
    VAR_11->reseed_time = FUNC_6(((void*)0));
    FUNC_8(&VAR_11->reseed_prop_counter, VAR_11->reseed_next_counter);

 end:
    if (VAR_15 != ((void*)0) && VAR_11->cleanup_entropy != ((void*)0))
        VAR_11->cleanup_entropy(VAR_11, VAR_15, VAR_17);
    if (VAR_14 != ((void*)0) && VAR_11->cleanup_nonce != ((void*)0))
        VAR_11->cleanup_nonce(VAR_11, VAR_14, VAR_16);
    if (VAR_11->state == VAR_1)
        return 1;
    return 0;
}
