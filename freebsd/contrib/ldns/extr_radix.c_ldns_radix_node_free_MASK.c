
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_4__ {size_t len; struct TYPE_4__* array; scalar_t__ klen; int * key; struct TYPE_4__* str; } ;
typedef TYPE_1__ ldns_radix_node_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(ldns_radix_node_t* VAR_0, void* VAR_1)
{
 uint16_t VAR_2;
 (void) VAR_1;
 if (!VAR_0) {
  return;
 }
 for (VAR_2=0; VAR_2 < VAR_0->len; VAR_2++) {
  FUNC_0(VAR_0->array[VAR_2].str);
 }
 VAR_0->key = ((void*)0);
 VAR_0->klen = 0;
 FUNC_0(VAR_0->array);
 FUNC_0(VAR_0);
 return;
}
