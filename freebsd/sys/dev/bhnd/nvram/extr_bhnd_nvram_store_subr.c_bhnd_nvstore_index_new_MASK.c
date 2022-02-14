
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bhnd_nvstore_index {int dummy; } ;
struct TYPE_4__ {size_t capacity; scalar_t__ count; } ;
typedef TYPE_1__ bhnd_nvstore_index ;


 int FUNC_0 (char*,size_t) ;
 TYPE_1__* FUNC_1 (size_t) ;

bhnd_nvstore_index *
FUNC_2(size_t VAR_0)
{
 bhnd_nvstore_index *VAR_1;
 size_t VAR_2;


 VAR_2 = sizeof(struct bhnd_nvstore_index) + (sizeof(void *) * VAR_0);
 VAR_1 = FUNC_1(VAR_2);
 if (VAR_1 == ((void*)0)) {
  FUNC_0("error allocating %zu byte index\n", VAR_2);
  return (((void*)0));
 }

 VAR_1->count = 0;
 VAR_1->capacity = VAR_0;

 return (VAR_1);
}
