
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * info_cb ;
struct TYPE_5__ {TYPE_1__* ctx; int * info_callback; } ;
struct TYPE_4__ {int * info_callback; } ;
typedef TYPE_2__ SSL ;



__attribute__((used)) static info_cb FUNC_0(SSL *VAR_0)
{
    if (VAR_0->info_callback != ((void*)0))
        return VAR_0->info_callback;
    else if (VAR_0->ctx->info_callback != ((void*)0))
        return VAR_0->ctx->info_callback;

    return ((void*)0);
}
