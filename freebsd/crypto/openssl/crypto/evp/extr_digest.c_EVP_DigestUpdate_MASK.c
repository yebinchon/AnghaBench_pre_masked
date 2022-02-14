
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* update ) (TYPE_1__*,void const*,size_t) ;} ;
typedef TYPE_1__ EVP_MD_CTX ;


 int FUNC_0 (TYPE_1__*,void const*,size_t) ;

int FUNC_1(EVP_MD_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{
    if (VAR_2 == 0)
        return 1;

    return VAR_0->update(VAR_0, VAR_1, VAR_2);
}
