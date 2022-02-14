
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ keylen; int key; } ;
typedef TYPE_1__ ucl_object_t ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1 (const ucl_object_t *VAR_0, const ucl_object_t *VAR_1)
{
 if (VAR_0->keylen == VAR_1->keylen) {
  return FUNC_0 (VAR_0->key, VAR_1->key, VAR_0->keylen) == 0;
 }

 return 0;
}
