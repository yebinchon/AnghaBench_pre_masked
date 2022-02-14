
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_type ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ldns_pkt *
FUNC_2(ldns_resolver *VAR_3, ldns_rdf *VAR_4, ldns_rr_type VAR_5)
{
 ldns_pkt *VAR_6 = ((void*)0);
 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_0, 0);
 if (!VAR_6) {
  return ((void*)0);
 } else {
  if (VAR_2 >= 5) {
   FUNC_0(VAR_1, VAR_6);
  }
  return VAR_6;
 }
}
