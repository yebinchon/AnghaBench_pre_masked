
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * scheme; } ;
typedef TYPE_1__ OSSL_STORE_LOADER ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(const OSSL_STORE_LOADER *VAR_0,
                            const OSSL_STORE_LOADER *VAR_1)
{
    FUNC_0(VAR_0->scheme != ((void*)0) && VAR_1->scheme != ((void*)0));
    return FUNC_1(VAR_0->scheme, VAR_1->scheme);
}
