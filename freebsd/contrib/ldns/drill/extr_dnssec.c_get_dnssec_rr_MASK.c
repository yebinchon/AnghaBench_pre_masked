
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rdf ;
typedef scalar_t__ ldns_pkt_type ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,scalar_t__,int ) ;
 int * FUNC_2 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,size_t) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

ldns_pkt_type
FUNC_11(ldns_pkt *VAR_7, ldns_rdf *VAR_8, ldns_rr_type VAR_9,
 ldns_rr_list **VAR_10, ldns_rr_list **VAR_11)
{
 ldns_pkt_type VAR_12 = VAR_3;
 ldns_rr_list *VAR_13 = ((void*)0);
 size_t VAR_14;

 if (!VAR_7) {
  if (VAR_10) {
   *VAR_10 = ((void*)0);
  }
  return VAR_3;
 }

 VAR_12 = FUNC_0(VAR_7);
 if (VAR_8) {
  if (VAR_10) {
   *VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_9,
     VAR_5);
   if (!*VAR_10) {
    *VAR_10 = FUNC_1(
      VAR_7, VAR_8, VAR_9,
      VAR_6);
   }
  }
  if (VAR_11) {
   VAR_13 = FUNC_1(VAR_7, VAR_8,
     VAR_4,
     VAR_5);
   if (!VAR_13) {
    VAR_13 = FUNC_1(
      VAR_7, VAR_8, VAR_4,
      VAR_6);
   }
  }
 } else {

  if (VAR_10) {
   *VAR_10 = FUNC_2(
     VAR_7, VAR_9, VAR_6);
  }
  if (VAR_11) {
   VAR_13 = FUNC_2(VAR_7,
     VAR_4,
     VAR_6);
  }
 }
 if (VAR_11) {
  *VAR_11 = FUNC_6();
  for (VAR_14 = 0; VAR_14 < FUNC_9(VAR_13); VAR_14++) {

   if (VAR_9 == FUNC_3(FUNC_10(
      FUNC_8(VAR_13, VAR_14)))) {

    FUNC_7(*VAR_11,
      FUNC_4(
       FUNC_8(
        VAR_13, VAR_14)));
   }
  }
 }
 FUNC_5(VAR_13);

 if (VAR_12 == VAR_2 || VAR_12 == VAR_1) {
  return VAR_12;
 } else {
  return VAR_0;
 }
}
