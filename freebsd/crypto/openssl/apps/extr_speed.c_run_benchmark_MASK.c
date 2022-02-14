
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * inprogress_job; int wait_ctx; } ;
typedef TYPE_1__ loopargs_t ;
typedef int looparg_item ;
typedef int fd_set ;
typedef scalar_t__ OSSL_ASYNC_FD ;
typedef scalar_t__ DWORD ;






 int FUNC_0 (int ,scalar_t__*,size_t*) ;
 int FUNC_1 (int **,int ,int*,int (*) (void*),void*,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int *,int ,int *,scalar_t__*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (scalar_t__,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_9(int VAR_5,
                         int (*VAR_6) (void *), loopargs_t * VAR_7)
{
    int VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
    OSSL_ASYNC_FD VAR_14 = 0;
    size_t VAR_15 = 0;

    VAR_4 = 1;

    if (VAR_5 == 0) {
        return VAR_6((void *)&VAR_7);
    }

    for (VAR_12 = 0; VAR_12 < VAR_5 && !VAR_11; VAR_12++) {
        loopargs_t *VAR_16 = VAR_7 + VAR_12;


        VAR_13 = FUNC_1(&VAR_7[VAR_12].inprogress_job, VAR_7[VAR_12].wait_ctx,
                              &VAR_8, VAR_6,
                              (void *)&VAR_16, sizeof(VAR_16));
        switch (VAR_13) {
        case 128:
            ++VAR_10;
            break;
        case 130:
            if (VAR_8 == -1) {
                VAR_11 = 1;
            } else {
                VAR_9 += VAR_8;
            }
            break;
        case 129:
        case 131:
            FUNC_2(VAR_2, "Failure in the job\n");
            FUNC_3(VAR_2);
            VAR_11 = 1;
            break;
        }
    }

    while (VAR_10 > 0) {
        for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
            if (VAR_7[VAR_12].inprogress_job == ((void*)0))
                continue;

            if (!FUNC_0
                (VAR_7[VAR_12].wait_ctx, ((void*)0), &VAR_15)
                || VAR_15 > 1) {
                FUNC_2(VAR_2, "Too many fds in ASYNC_WAIT_CTX\n");
                FUNC_3(VAR_2);
                VAR_11 = 1;
                break;
            }
            FUNC_0(VAR_7[VAR_12].wait_ctx, &VAR_14,
                                       &VAR_15);
            VAR_13 = FUNC_1(&VAR_7[VAR_12].inprogress_job,
                                  VAR_7[VAR_12].wait_ctx, &VAR_8,
                                  VAR_6, (void *)(VAR_7 + VAR_12),
                                  sizeof(loopargs_t));
            switch (VAR_13) {
            case 128:
                break;
            case 130:
                if (VAR_8 == -1) {
                    VAR_11 = 1;
                } else {
                    VAR_9 += VAR_8;
                }
                --VAR_10;
                VAR_7[VAR_12].inprogress_job = ((void*)0);
                break;
            case 129:
            case 131:
                --VAR_10;
                VAR_7[VAR_12].inprogress_job = ((void*)0);
                FUNC_2(VAR_2, "Failure in the job\n");
                FUNC_3(VAR_2);
                VAR_11 = 1;
                break;
            }
        }
    }

    return VAR_11 ? -1 : VAR_9;
}
