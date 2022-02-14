
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ldns_tlsa_selector ;
typedef scalar_t__ ldns_tlsa_matching_type ;
typedef scalar_t__ ldns_tlsa_certificate_usage ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int **,int *,scalar_t__,scalar_t__) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;

ldns_status
FUNC_6(ldns_rr** VAR_4,
  ldns_tlsa_certificate_usage VAR_5,
  ldns_tlsa_selector VAR_6,
  ldns_tlsa_matching_type VAR_7,
  X509* VAR_8)
{
 ldns_rdf* VAR_9;
 ldns_status VAR_10;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_8 != ((void*)0));


 *VAR_4 = FUNC_4(VAR_1);
 if (*VAR_4 == ((void*)0)) {
  return VAR_2;
 }

 VAR_9 = FUNC_2(VAR_0,
   (uint8_t)VAR_5);
 if (VAR_9 == ((void*)0)) {
  goto memerror;
 }
 (void) FUNC_5(*VAR_4, VAR_9, 0);

 VAR_9 = FUNC_2(VAR_0, (uint8_t)VAR_6);
 if (VAR_9 == ((void*)0)) {
  goto memerror;
 }
 (void) FUNC_5(*VAR_4, VAR_9, 1);

 VAR_9 = FUNC_2(VAR_0, (uint8_t)VAR_7);
 if (VAR_9 == ((void*)0)) {
  goto memerror;
 }
 (void) FUNC_5(*VAR_4, VAR_9, 2);

 VAR_10 = FUNC_1(&VAR_9, VAR_8, VAR_6, VAR_7);
 if (VAR_10 == VAR_3) {
  (void) FUNC_5(*VAR_4, VAR_9, 3);
  return VAR_3;
 }
 FUNC_3(*VAR_4);
 *VAR_4 = ((void*)0);
 return VAR_10;

memerror:
 FUNC_3(*VAR_4);
 *VAR_4 = ((void*)0);
 return VAR_2;
}
