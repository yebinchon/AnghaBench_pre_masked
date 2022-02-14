
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef scalar_t__ ldns_rdf_type ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *,int const*,int ,int ) ;
 int * FUNC_1 (int *,int const*,int ,int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **,int *) ;
 scalar_t__ FUNC_5 (int *) ;

uint16_t
FUNC_6(ldns_resolver *VAR_4, const ldns_rdf *VAR_5,
  ldns_rr_class VAR_6, ldns_rr_list **VAR_7)
{
 ldns_rdf_type VAR_8;
 uint16_t VAR_9;
 ldns_resolver *VAR_10;
 ldns_status VAR_11;

 VAR_8 = FUNC_2(VAR_5);
 VAR_9 = 0;
 VAR_10 = VAR_4;

 if (VAR_4 == ((void*)0)) {

  VAR_11 = FUNC_4(&VAR_10, ((void*)0));
  if (VAR_11 != VAR_3) {
   return 0;
  }
 }

 if (VAR_8 == VAR_2) {

  *VAR_7 = FUNC_0(VAR_10, VAR_5, VAR_6, 0);
  VAR_9 = FUNC_5(*VAR_7);
 }

 if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {

  *VAR_7 = FUNC_1(VAR_10, VAR_5, VAR_6, 0);
  VAR_9 = FUNC_5(*VAR_7);
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_10);
 }

 return VAR_9;
}
