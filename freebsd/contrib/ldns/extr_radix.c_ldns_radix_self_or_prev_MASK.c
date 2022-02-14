
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_1__ ldns_radix_node_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(ldns_radix_node_t* VAR_0, ldns_radix_node_t** VAR_1)
{
 if (VAR_0->data) {
  *VAR_1 = VAR_0;
 } else {
  *VAR_1 = FUNC_0(VAR_0);
 }
 return;
}
