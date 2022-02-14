
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ldns_status ;
typedef int ldns_rr ;
struct TYPE_4__ {size_t parent_count; int ** parent_signature; int * parent_status; struct TYPE_4__** parents; } ;
typedef TYPE_1__ ldns_dnssec_trust_tree ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

ldns_status
FUNC_0(ldns_dnssec_trust_tree *VAR_3,
                                  const ldns_dnssec_trust_tree *VAR_4,
                                  const ldns_rr *VAR_5,
                                  const ldns_status VAR_6)
{
 if (VAR_3
     && VAR_4
     && VAR_3->parent_count < VAR_0) {






  VAR_3->parents[VAR_3->parent_count] =
   (ldns_dnssec_trust_tree *) VAR_4;
  VAR_3->parent_status[VAR_3->parent_count] = VAR_6;
  VAR_3->parent_signature[VAR_3->parent_count] = (ldns_rr *) VAR_5;
  VAR_3->parent_count++;
  return VAR_2;
 } else {
  return VAR_1;
 }
}
