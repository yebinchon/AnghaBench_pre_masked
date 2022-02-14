
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* ptr; } ;
struct TYPE_6__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;


 int FUNC_0 (TYPE_2__*,int) ;

int FUNC_1(EVP_PKEY *VAR_0, int VAR_1, void *VAR_2)
{
    if (VAR_0 == ((void*)0) || !FUNC_0(VAR_0, VAR_1))
        return 0;
    VAR_0->pkey.ptr = VAR_2;
    return (VAR_2 != ((void*)0));
}
