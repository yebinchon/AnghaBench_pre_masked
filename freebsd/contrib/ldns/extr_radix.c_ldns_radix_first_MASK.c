
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* root; } ;
typedef TYPE_1__ ldns_radix_t ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_2__ ldns_radix_node_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;

ldns_radix_node_t*
FUNC_1(const ldns_radix_t* VAR_0)
{
 ldns_radix_node_t* VAR_1 = ((void*)0);
 if (!VAR_0 || !VAR_0->root) {
  return ((void*)0);
 }
 VAR_1 = VAR_0->root;
 if (VAR_1->data) {
  return VAR_1;
 }
 return FUNC_0(VAR_1);
}
