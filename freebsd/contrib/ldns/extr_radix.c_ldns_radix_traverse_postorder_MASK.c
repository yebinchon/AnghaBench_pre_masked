
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_8__ {size_t len; TYPE_1__* array; } ;
typedef TYPE_2__ ldns_radix_node_t ;
struct TYPE_7__ {TYPE_2__* edge; } ;


 void FUNC_0 (TYPE_2__*,void*) ;

void
FUNC_1(ldns_radix_node_t* VAR_0,
 void (*VAR_1)(ldns_radix_node_t*, void*), void* VAR_2)
{
 uint8_t VAR_3;
 if (!VAR_0) {
  return;
 }
 for (VAR_3=0; VAR_3 < VAR_0->len; VAR_3++) {
  FUNC_1(VAR_0->array[VAR_3].edge,
   VAR_1, VAR_2);
 }

 (*VAR_1)(VAR_0, VAR_2);
 return;
}
