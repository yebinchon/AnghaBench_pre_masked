
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int ldns_status ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int const*,int const*,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int const*,int ,int *) ;

ldns_status
FUNC_7(const ldns_pkt *VAR_4, ldns_rr_type VAR_5, const ldns_rdf *VAR_6,
  const ldns_rr_list *VAR_7, const ldns_rr_list *VAR_8,
  time_t VAR_9, ldns_rr_list *VAR_10)
{
 ldns_rr_list *VAR_11;
 ldns_rr_list *VAR_12;
 ldns_rr_list *VAR_13;
 ldns_rdf *VAR_14;
 ldns_rr_type VAR_15;

 if (!VAR_7) {
  return VAR_3;

 }

 if (VAR_5 == VAR_1) {

  return VAR_3;
 }

 if (VAR_8) {

  VAR_12 = (ldns_rr_list *)VAR_8;
 } else {

  VAR_12 = FUNC_1(VAR_4, VAR_6,
    VAR_1,
    VAR_2);
  if (!VAR_12) {

   return VAR_3;

  }
 }




 VAR_15 = FUNC_0(VAR_5);

 VAR_14 = FUNC_3(VAR_0, 2, &VAR_15);

 VAR_13 = FUNC_5(VAR_12, VAR_14, 0);
 FUNC_2(VAR_14);
 if (! VAR_13) {
  if (! VAR_8) {
   FUNC_4(VAR_12);
  }
  return VAR_3;
 }
 FUNC_4(VAR_13);

 VAR_11 = FUNC_1(VAR_4, VAR_6, VAR_5,
   VAR_2);
 if (!VAR_11) {
  if (! VAR_8) {
   FUNC_4(VAR_12);
  }
  return VAR_3;
 }
 return FUNC_6(VAR_11, VAR_12, VAR_7, VAR_9, VAR_10);
}
