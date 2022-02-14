
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ldns_rr ;
typedef int ldns_rdf ;
typedef int ldns_rbnode_t ;
struct TYPE_4__ {int * hashed_names; int _nsec3params; } ;
typedef TYPE_1__ ldns_dnssec_zone ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ldns_rbnode_t *
FUNC_6(ldns_dnssec_zone *VAR_1, ldns_rr *VAR_2) {
 ldns_rdf *VAR_3;

 VAR_3 = FUNC_0(FUNC_5(VAR_2), 0);
 if (VAR_3 == ((void*)0)) {
  return ((void*)0);
 }
 if (FUNC_4(VAR_2) == VAR_0 && ! VAR_1->_nsec3params){

  FUNC_1(VAR_1, VAR_2);
 }
 if (VAR_1->hashed_names == ((void*)0)) {
  FUNC_3(VAR_3);
  return ((void*)0);
 }
 return FUNC_2(VAR_1->hashed_names, VAR_3);
}
