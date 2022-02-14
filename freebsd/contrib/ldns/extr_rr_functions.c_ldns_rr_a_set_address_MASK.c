
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr ;
typedef int ldns_rdf ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int ) ;

bool
FUNC_3(ldns_rr *VAR_2, ldns_rdf *VAR_3)
{

 ldns_rdf *VAR_4;
 if (!VAR_2 || (FUNC_1(VAR_2) != VAR_0 &&
   FUNC_1(VAR_2) != VAR_1)) {
  return 0;
 }
 VAR_4 = FUNC_2(VAR_2, VAR_3, 0);
 if (VAR_4) {
  FUNC_0(VAR_4);
  return 1;
 } else {
  return 0;
 }
}
