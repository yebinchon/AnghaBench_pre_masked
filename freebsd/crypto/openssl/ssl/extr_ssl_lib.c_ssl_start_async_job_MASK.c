
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssl_async_args {int dummy; } ;
struct TYPE_3__ {void* rwstate; int * job; int * waitctx; } ;
typedef TYPE_1__ SSL ;






 int * FUNC_0 () ;
 int FUNC_1 (int **,int *,int*,int (*) (void*),struct ssl_async_args*,int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_6, struct ssl_async_args *VAR_7,
                               int (*VAR_8) (void *))
{
    int VAR_9;
    if (VAR_6->waitctx == ((void*)0)) {
        VAR_6->waitctx = FUNC_0();
        if (VAR_6->waitctx == ((void*)0))
            return -1;
    }
    switch (FUNC_1(&VAR_6->job, VAR_6->waitctx, &VAR_9, VAR_8, VAR_7,
                            sizeof(struct ssl_async_args))) {
    case 131:
        VAR_6->rwstate = VAR_4;
        FUNC_2(VAR_3, VAR_5);
        return -1;
    case 128:
        VAR_6->rwstate = VAR_2;
        return -1;
    case 129:
        VAR_6->rwstate = VAR_1;
        return -1;
    case 130:
        VAR_6->job = ((void*)0);
        return VAR_9;
    default:
        VAR_6->rwstate = VAR_4;
        FUNC_2(VAR_3, VAR_0);

        return -1;
    }
}
