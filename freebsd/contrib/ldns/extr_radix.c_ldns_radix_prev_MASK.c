
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ len; scalar_t__ data; struct TYPE_6__* parent; int parent_index; } ;
typedef TYPE_1__ ldns_radix_node_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;

ldns_radix_node_t*
FUNC_2(ldns_radix_node_t* VAR_0)
{
 if (!VAR_0) {
  return ((void*)0);
 }


 while (VAR_0->parent) {
  uint8_t VAR_1 = VAR_0->parent_index;
  ldns_radix_node_t* VAR_2;
  VAR_0 = VAR_0->parent;
  FUNC_0(VAR_0->len > 0);
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2) {
   return VAR_2;
  }
  if (VAR_0->data) {
   return VAR_0;
  }
 }
 return ((void*)0);
}
