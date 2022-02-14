
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int cleanup_nonce; int get_nonce; int cleanup_entropy; int get_entropy; int * parent; } ;
typedef int RAND_DRBG_get_nonce_fn ;
typedef int RAND_DRBG_get_entropy_fn ;
typedef int RAND_DRBG_cleanup_nonce_fn ;
typedef int RAND_DRBG_cleanup_entropy_fn ;
typedef TYPE_1__ RAND_DRBG ;


 scalar_t__ VAR_0 ;

int FUNC_0(RAND_DRBG *VAR_1,
                            RAND_DRBG_get_entropy_fn VAR_2,
                            RAND_DRBG_cleanup_entropy_fn VAR_3,
                            RAND_DRBG_get_nonce_fn VAR_4,
                            RAND_DRBG_cleanup_nonce_fn VAR_5)
{
    if (VAR_1->state != VAR_0
            || VAR_1->parent != ((void*)0))
        return 0;
    VAR_1->get_entropy = VAR_2;
    VAR_1->cleanup_entropy = VAR_3;
    VAR_1->get_nonce = VAR_4;
    VAR_1->cleanup_nonce = VAR_5;
    return 1;
}
