
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; size_t max_adinlen; int reseed_next_counter; size_t (* get_entropy ) (TYPE_2__*,unsigned char**,int ,size_t,size_t,int) ;size_t min_entropylen; size_t max_entropylen; int reseed_gen_counter; int (* cleanup_entropy ) (TYPE_2__*,unsigned char*,size_t) ;int reseed_prop_counter; int reseed_time; TYPE_1__* meth; int strength; } ;
struct TYPE_7__ {int (* reseed ) (TYPE_2__*,unsigned char*,size_t,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ RAND_DRBG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (TYPE_2__*,unsigned char**,int ,size_t,size_t,int) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,size_t,unsigned char const*,size_t) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(RAND_DRBG *VAR_8,
                     const unsigned char *VAR_9, size_t VAR_10,
                     int VAR_11)
{
    unsigned char *VAR_12 = ((void*)0);
    size_t VAR_13 = 0;

    if (VAR_8->state == VAR_0) {
        FUNC_0(VAR_3, VAR_6);
        return 0;
    }
    if (VAR_8->state == VAR_2) {
        FUNC_0(VAR_3, VAR_7);
        return 0;
    }

    if (VAR_9 == ((void*)0)) {
        VAR_10 = 0;
    } else if (VAR_10 > VAR_8->max_adinlen) {
        FUNC_0(VAR_3, VAR_4);
        return 0;
    }

    VAR_8->state = VAR_0;

    VAR_8->reseed_next_counter = FUNC_5(&VAR_8->reseed_prop_counter);
    if (VAR_8->reseed_next_counter) {
        VAR_8->reseed_next_counter++;
        if(!VAR_8->reseed_next_counter)
            VAR_8->reseed_next_counter = 1;
    }

    if (VAR_8->get_entropy != ((void*)0))
        VAR_13 = VAR_8->get_entropy(VAR_8, &VAR_12, VAR_8->strength,
                                       VAR_8->min_entropylen,
                                       VAR_8->max_entropylen,
                                       VAR_11);
    if (VAR_13 < VAR_8->min_entropylen
            || VAR_13 > VAR_8->max_entropylen) {
        FUNC_0(VAR_3, VAR_5);
        goto end;
    }

    if (!VAR_8->meth->reseed(VAR_8, VAR_12, VAR_13, VAR_9, VAR_10))
        goto end;

    VAR_8->state = VAR_1;
    VAR_8->reseed_gen_counter = 1;
    VAR_8->reseed_time = FUNC_4(((void*)0));
    FUNC_6(&VAR_8->reseed_prop_counter, VAR_8->reseed_next_counter);

 end:
    if (VAR_12 != ((void*)0) && VAR_8->cleanup_entropy != ((void*)0))
        VAR_8->cleanup_entropy(VAR_8, VAR_12, VAR_13);
    if (VAR_8->state == VAR_1)
        return 1;
    return 0;
}
