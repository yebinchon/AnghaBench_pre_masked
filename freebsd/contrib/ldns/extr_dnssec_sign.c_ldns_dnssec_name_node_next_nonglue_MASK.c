
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_1__ ldns_rbnode_t ;
struct TYPE_9__ {int is_glue; } ;
typedef TYPE_2__ ldns_dnssec_name ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;

ldns_rbnode_t *
FUNC_1(ldns_rbnode_t *VAR_1)
{
 ldns_rbnode_t *VAR_2 = ((void*)0);
 ldns_dnssec_name *VAR_3 = ((void*)0);
 bool VAR_4 = 0;

 if (VAR_1 == VAR_0) {
  return ((void*)0);
 }
 VAR_2 = VAR_1;
 while (!VAR_4) {
  if (VAR_2 == VAR_0) {
   return ((void*)0);
  } else {
   VAR_3 = (ldns_dnssec_name *)VAR_2->data;
   if (!VAR_3->is_glue) {
    VAR_4 = 1;
   } else {
    VAR_2 = FUNC_0(VAR_2);
   }
  }
 }
 return VAR_2;
}
