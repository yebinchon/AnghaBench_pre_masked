
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* info; } ;
struct TYPE_9__ {TYPE_3__* ctx; TYPE_1__ srp_ctx; } ;
struct TYPE_7__ {char* info; } ;
struct TYPE_8__ {TYPE_2__ srp_ctx; } ;
typedef TYPE_4__ SSL ;



char *FUNC_0(SSL *VAR_0)
{
    if (VAR_0->srp_ctx.info != ((void*)0))
        return VAR_0->srp_ctx.info;
    return VAR_0->ctx->srp_ctx.info;
}
