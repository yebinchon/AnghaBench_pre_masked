
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int key_len; int block_size; int nid; } ;
typedef TYPE_1__ EVP_CIPHER ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int) ;

EVP_CIPHER *FUNC_2(const EVP_CIPHER *VAR_0)
{
    EVP_CIPHER *VAR_1 = FUNC_0(VAR_0->nid, VAR_0->block_size,
                                         VAR_0->key_len);

    if (VAR_1 != ((void*)0))
        FUNC_1(VAR_1, VAR_0, sizeof(*VAR_1));
    return VAR_1;
}
