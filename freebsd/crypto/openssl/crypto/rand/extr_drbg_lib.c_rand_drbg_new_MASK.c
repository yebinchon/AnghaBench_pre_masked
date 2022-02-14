
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int secure; scalar_t__ strength; int reseed_time_interval; int reseed_interval; void* cleanup_entropy; void* get_entropy; int cleanup_nonce; int get_nonce; struct TYPE_11__* parent; int fork_id; } ;
typedef TYPE_1__ RAND_DRBG ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 () ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static RAND_DRBG *FUNC_9(int VAR_11,
                                int VAR_12,
                                unsigned int VAR_13,
                                RAND_DRBG *VAR_14)
{
    RAND_DRBG *VAR_15 = VAR_11 ? FUNC_1(sizeof(*VAR_15))
                             : FUNC_2(sizeof(*VAR_15));

    if (VAR_15 == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        return ((void*)0);
    }

    VAR_15->secure = VAR_11 && FUNC_0(VAR_15);
    VAR_15->fork_id = FUNC_6();
    VAR_15->parent = VAR_14;

    if (VAR_14 == ((void*)0)) {
        VAR_15->get_entropy = VAR_7;
        VAR_15->cleanup_entropy = VAR_5;

        VAR_15->get_nonce = VAR_8;
        VAR_15->cleanup_nonce = VAR_6;


        VAR_15->reseed_interval = VAR_3;
        VAR_15->reseed_time_interval = VAR_4;
    } else {
        VAR_15->get_entropy = VAR_7;
        VAR_15->cleanup_entropy = VAR_5;





        VAR_15->reseed_interval = VAR_9;
        VAR_15->reseed_time_interval = VAR_10;
    }

    if (FUNC_4(VAR_15, VAR_12, VAR_13) == 0)
        goto err;

    if (VAR_14 != ((void*)0)) {
        FUNC_7(VAR_14);
        if (VAR_15->strength > VAR_14->strength) {




            FUNC_8(VAR_14);
            FUNC_5(VAR_1, VAR_2);
            goto err;
        }
        FUNC_8(VAR_14);
    }

    return VAR_15;

 err:
    FUNC_3(VAR_15);

    return ((void*)0);
}
