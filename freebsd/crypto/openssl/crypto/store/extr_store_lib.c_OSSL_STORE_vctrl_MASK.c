
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {int loader_ctx; TYPE_1__* loader; } ;
struct TYPE_4__ {int (* ctrl ) (int ,int,int ) ;} ;
typedef TYPE_2__ OSSL_STORE_CTX ;


 int FUNC_0 (int ,int,int ) ;

int FUNC_1(OSSL_STORE_CTX *VAR_0, int VAR_1, va_list VAR_2)
{
    if (VAR_0->loader->ctrl != ((void*)0))
        return VAR_0->loader->ctrl(VAR_0->loader_ctx, VAR_1, VAR_2);
    return 0;
}
