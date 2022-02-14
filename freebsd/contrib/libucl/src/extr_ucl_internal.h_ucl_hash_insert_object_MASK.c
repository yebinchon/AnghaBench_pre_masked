
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int keylen; int key; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int ucl_hash_t ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__ const*,int ,int ) ;

__attribute__((used)) static inline ucl_hash_t *
FUNC_2 (ucl_hash_t *VAR_0,
  const ucl_object_t *VAR_1,
  bool VAR_2)
{
 if (VAR_0 == ((void*)0)) {
  VAR_0 = FUNC_0 (VAR_2);
 }
 FUNC_1 (VAR_0, VAR_1, VAR_1->key, VAR_1->keylen);

 return VAR_0;
}
