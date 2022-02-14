
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int keylen; int key; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int ucl_hash_t ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static inline const ucl_object_t *
FUNC_1 (ucl_hash_t* VAR_0, ucl_object_t *VAR_1)
{
 return (const ucl_object_t *)FUNC_0 (VAR_0, VAR_1->key, VAR_1->keylen);
}
