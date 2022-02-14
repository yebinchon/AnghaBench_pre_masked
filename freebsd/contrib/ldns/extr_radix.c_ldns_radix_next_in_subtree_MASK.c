
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_6__ {size_t len; TYPE_1__* array; scalar_t__ data; } ;
typedef TYPE_2__ ldns_radix_node_t ;
struct TYPE_5__ {TYPE_2__* edge; } ;



__attribute__((used)) static ldns_radix_node_t*
FUNC_0(ldns_radix_node_t* VAR_0)
{
 uint16_t VAR_1;
 ldns_radix_node_t* VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++) {
  if (VAR_0->array[VAR_1].edge) {

   if (VAR_0->array[VAR_1].edge->data) {
    return VAR_0->array[VAR_1].edge;
   }

   VAR_2 = FUNC_0(VAR_0->array[VAR_1].edge);
   if (VAR_2) {
    return VAR_2;
   }
  }
 }
 return ((void*)0);
}
