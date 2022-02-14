
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* currjob; int dispatcher; } ;
typedef TYPE_1__ async_ctx ;
struct TYPE_9__ {scalar_t__ status; int ret; int (* func ) (void*) ;int fibrectx; int * waitctx; int * funcargs; } ;
typedef int ASYNC_WAIT_CTX ;
typedef TYPE_2__ ASYNC_JOB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (size_t) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int *,int *,int) ;
 TYPE_1__* FUNC_5 () ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,void*,size_t) ;

int FUNC_9(ASYNC_JOB **VAR_12, ASYNC_WAIT_CTX *VAR_13, int *VAR_14,
                    int (*VAR_15)(void *), void *VAR_16, size_t VAR_17)
{
    async_ctx *VAR_18;

    if (!FUNC_1(VAR_11, ((void*)0)))
        return VAR_0;

    VAR_18 = FUNC_5();
    if (VAR_18 == ((void*)0))
        VAR_18 = FUNC_3();
    if (VAR_18 == ((void*)0))
        return VAR_0;

    if (*VAR_12)
        VAR_18->currjob = *VAR_12;

    for (;;) {
        if (VAR_18->currjob != ((void*)0)) {
            if (VAR_18->currjob->status == VAR_5) {
                *VAR_14 = VAR_18->currjob->ret;
                VAR_18->currjob->waitctx = ((void*)0);
                FUNC_7(VAR_18->currjob);
                VAR_18->currjob = ((void*)0);
                *VAR_12 = ((void*)0);
                return VAR_1;
            }

            if (VAR_18->currjob->status == VAR_4) {
                *VAR_12 = VAR_18->currjob;
                VAR_18->currjob->status = VAR_3;
                VAR_18->currjob = ((void*)0);
                return VAR_7;
            }

            if (VAR_18->currjob->status == VAR_3) {
                VAR_18->currjob = *VAR_12;

                if (!FUNC_4(&VAR_18->dispatcher,
                        &VAR_18->currjob->fibrectx, 1)) {
                    FUNC_0(VAR_2,
                             VAR_8);
                    goto err;
                }
                continue;
            }


            FUNC_0(VAR_2, VAR_9);
            FUNC_7(VAR_18->currjob);
            VAR_18->currjob = ((void*)0);
            *VAR_12 = ((void*)0);
            return VAR_0;
        }


        if ((VAR_18->currjob = FUNC_6()) == ((void*)0))
            return VAR_6;

        if (VAR_16 != ((void*)0)) {
            VAR_18->currjob->funcargs = FUNC_2(VAR_17);
            if (VAR_18->currjob->funcargs == ((void*)0)) {
                FUNC_0(VAR_2, VAR_10);
                FUNC_7(VAR_18->currjob);
                VAR_18->currjob = ((void*)0);
                return VAR_0;
            }
            FUNC_8(VAR_18->currjob->funcargs, VAR_16, VAR_17);
        } else {
            VAR_18->currjob->funcargs = ((void*)0);
        }

        VAR_18->currjob->func = VAR_15;
        VAR_18->currjob->waitctx = VAR_13;
        if (!FUNC_4(&VAR_18->dispatcher,
                &VAR_18->currjob->fibrectx, 1)) {
            FUNC_0(VAR_2, VAR_8);
            goto err;
        }
    }

err:
    FUNC_7(VAR_18->currjob);
    VAR_18->currjob = ((void*)0);
    *VAR_12 = ((void*)0);
    return VAR_0;
}
