
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; TYPE_1__* array; scalar_t__ data; } ;
typedef TYPE_2__ ldns_radix_node_t ;
struct TYPE_5__ {TYPE_2__* edge; } ;



__attribute__((used)) static ldns_radix_node_t*
FUNC_0(ldns_radix_node_t* VAR_0)
{
 int VAR_1;

 for (VAR_1=(int)(VAR_0->len)-1; VAR_1 >= 0; VAR_1--) {
  if (VAR_0->array[VAR_1].edge) {

   if (VAR_0->array[VAR_1].edge->len > 0) {
    ldns_radix_node_t* VAR_2 =
     FUNC_0(
     VAR_0->array[VAR_1].edge);
    if (VAR_2) {
     return VAR_2;
    }
   }

   if (VAR_0->array[VAR_1].edge->data) {
    return VAR_0->array[VAR_1].edge;
   }
  }
 }
 return ((void*)0);
}
