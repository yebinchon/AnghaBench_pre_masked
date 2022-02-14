
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int (* remove_session_cb ) (TYPE_5__*,TYPE_2__*) ;} ;
struct TYPE_12__ {scalar_t__ time; scalar_t__ timeout; int not_resumable; } ;
struct TYPE_11__ {scalar_t__ time; TYPE_5__* ctx; int cache; } ;
typedef TYPE_1__ TIMEOUT_PARAM ;
typedef TYPE_2__ SSL_SESSION ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(SSL_SESSION *VAR_0, TIMEOUT_PARAM *VAR_1)
{
    if ((VAR_1->time == 0) || (VAR_1->time > (VAR_0->time + VAR_0->timeout))) {




        (void)FUNC_2(VAR_1->cache, VAR_0);
        FUNC_1(VAR_1->ctx, VAR_0);
        VAR_0->not_resumable = 1;
        if (VAR_1->ctx->remove_session_cb != ((void*)0))
            VAR_1->ctx->remove_session_cb(VAR_1->ctx, VAR_0);
        FUNC_0(VAR_0);
    }
}
