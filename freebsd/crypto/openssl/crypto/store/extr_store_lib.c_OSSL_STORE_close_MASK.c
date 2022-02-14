
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int loader_ctx; TYPE_1__* loader; } ;
struct TYPE_5__ {int (* close ) (int ) ;} ;
typedef TYPE_2__ OSSL_STORE_CTX ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

int FUNC_2(OSSL_STORE_CTX *VAR_0)
{
    int VAR_1 = VAR_0->loader->close(VAR_0->loader_ctx);

    FUNC_0(VAR_0);
    return VAR_1;
}
