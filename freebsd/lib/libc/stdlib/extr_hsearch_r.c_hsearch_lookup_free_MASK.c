
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct __hsearch {size_t index_mask; TYPE_1__* entries; } ;
struct TYPE_3__ {int * key; } ;
typedef TYPE_1__ ENTRY ;



__attribute__((used)) static ENTRY *
FUNC_0(struct __hsearch *VAR_0, size_t VAR_1)
{
 size_t VAR_2, VAR_3;

 for (VAR_2 = VAR_1, VAR_3 = 0;; VAR_2 += ++VAR_3) {
  ENTRY *VAR_4 = &VAR_0->entries[VAR_2 & VAR_0->index_mask];
  if (VAR_4->key == ((void*)0))
   return (VAR_4);
 }
}
