
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int root; } ;
typedef TYPE_1__ ldns_radix_t ;
typedef int ldns_radix_node_t ;


 int * FUNC_0 (int ) ;

ldns_radix_node_t*
FUNC_1(const ldns_radix_t* VAR_0)
{
 if (!VAR_0 || !VAR_0->root) {
  return ((void*)0);
 }
 return FUNC_0(VAR_0->root);
}
