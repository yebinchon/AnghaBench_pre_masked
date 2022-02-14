
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ldns_rr_type ;
typedef int ldns_rdf ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ ldns_rbnode_t ;
struct TYPE_6__ {int names; } ;
typedef TYPE_2__ ldns_dnssec_zone ;
typedef int ldns_dnssec_rrsets ;
typedef int ldns_dnssec_name ;


 int * FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int ,int const*) ;

ldns_dnssec_rrsets *
FUNC_2(const ldns_dnssec_zone *VAR_0,
        const ldns_rdf *VAR_1,
        ldns_rr_type VAR_2)
{
 ldns_rbnode_t *VAR_3;

 if (!VAR_0 || !VAR_1 || !VAR_0->names) {
  return ((void*)0);
 }

 VAR_3 = FUNC_1(VAR_0->names, VAR_1);
 if (VAR_3) {
  return FUNC_0((ldns_dnssec_name *)VAR_3->data,
         VAR_2);
 } else {
  return ((void*)0);
 }
}
