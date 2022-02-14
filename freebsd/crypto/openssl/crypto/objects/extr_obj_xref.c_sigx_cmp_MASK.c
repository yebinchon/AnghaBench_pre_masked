
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hash_id; int pkey_id; } ;
typedef TYPE_1__ nid_triple ;



__attribute__((used)) static int FUNC_0(const nid_triple *const *VAR_0, const nid_triple *const *VAR_1)
{
    int VAR_2;
    VAR_2 = (*VAR_0)->hash_id - (*VAR_1)->hash_id;
    if (VAR_2)
        return VAR_2;
    return (*VAR_0)->pkey_id - (*VAR_1)->pkey_id;
}
