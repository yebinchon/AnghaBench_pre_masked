
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_8__ {TYPE_1__* array; } ;
typedef TYPE_2__ ldns_radix_node_t ;
struct TYPE_7__ {scalar_t__ edge; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static ldns_radix_node_t*
FUNC_1(ldns_radix_node_t* VAR_0, uint8_t VAR_1)
{
 uint8_t VAR_2 = VAR_1;
 while (VAR_2 > 0) {
  VAR_2--;
  if (VAR_0->array[VAR_2].edge) {
   ldns_radix_node_t* VAR_3 =
    FUNC_0(VAR_0);
   if (VAR_3) {
    return VAR_3;
   }
  }
 }
 return ((void*)0);
}
