
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_type ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__,int,int ,int *) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int **,int *,int const*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int **,int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

ldns_status
FUNC_10(ldns_pkt **VAR_7, ldns_resolver *VAR_8, const ldns_rdf *VAR_9,
  ldns_rr_type VAR_10, ldns_rr_class VAR_11, uint16_t VAR_12)
{
 ldns_pkt *VAR_13;
 ldns_pkt *VAR_14;
 ldns_status VAR_15;

 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_9 != ((void*)0));

 VAR_14 = ((void*)0);




 if (0 == VAR_10) {
  VAR_10= VAR_2;
 }
 if (0 == VAR_11) {
  VAR_11= VAR_1;
 }
 if (0 == FUNC_4(VAR_8)) {
  return VAR_5;
 }
 if (FUNC_3(VAR_9) != VAR_0) {
  return VAR_6;
 }

 VAR_15 = FUNC_5(&VAR_13, VAR_8, VAR_9,
                                          VAR_10, VAR_11, VAR_12);
 if (VAR_15 != VAR_4) {
  return VAR_15;
 }







 if (FUNC_9(VAR_8) && FUNC_8(VAR_8)) {
  FUNC_1(VAR_13);
         return VAR_3;

 }

 VAR_15 = FUNC_6(&VAR_14, VAR_8, VAR_13);
 FUNC_1(VAR_13);


 if (VAR_7) {
  *VAR_7 = VAR_14;
 }
 return VAR_15;
}
