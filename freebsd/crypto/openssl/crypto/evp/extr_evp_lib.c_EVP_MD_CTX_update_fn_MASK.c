
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* update ) (TYPE_1__*,void const*,size_t) ;} ;
typedef TYPE_1__ EVP_MD_CTX ;



int (*FUNC_0(EVP_MD_CTX *VAR_3))(EVP_MD_CTX *VAR_0,
                                             const void *VAR_1, size_t VAR_2)
{
    return VAR_3->update;
}
