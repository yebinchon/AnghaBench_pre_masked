
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t keylen; char const* key; } ;
typedef TYPE_1__ ucl_object_t ;



const char *
FUNC_0 (const ucl_object_t *VAR_0, size_t *VAR_1)
{
 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0)) {
  return ((void*)0);
 }
 *VAR_1 = VAR_0->keylen;
 return VAR_0->key;
}
