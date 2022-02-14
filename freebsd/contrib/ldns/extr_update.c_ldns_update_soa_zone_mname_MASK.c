
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,scalar_t__,int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int ** FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int **,int *,int *) ;
 int FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (int *) ;
 int * FUNC_17 (int ) ;
 int * FUNC_18 (int *) ;
 int * FUNC_19 (int *,int ) ;

ldns_status
FUNC_20(const char *VAR_6, ldns_resolver *VAR_7,
    ldns_rr_class VAR_8, ldns_rdf **VAR_9, ldns_rdf **VAR_10)
{
 ldns_rr *VAR_11, *VAR_12;
 ldns_rdf *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 ldns_rdf *VAR_15, *VAR_16, *VAR_17;
 ldns_rdf **VAR_18;
 ldns_pkt *VAR_19, *VAR_20;
 ldns_resolver *VAR_21;
 size_t VAR_22;







 VAR_16 = FUNC_0(VAR_6);
 VAR_19 = FUNC_5(VAR_16, VAR_2, VAR_8, VAR_0);
 if (!VAR_19) {
  return VAR_3;
 }
 VAR_16 = ((void*)0);

 FUNC_6(VAR_19);
 if (FUNC_14(&VAR_20, VAR_7, VAR_19) != VAR_5) {
  FUNC_4(VAR_19);
  return VAR_3;
 }
 FUNC_4(VAR_19);
 if (!VAR_20) {
  return VAR_3;
 }


 while ((VAR_11 = FUNC_17(FUNC_3(VAR_20)))) {
  if (FUNC_16(VAR_11) != VAR_2
    || FUNC_19(VAR_11, 0) == ((void*)0))
   continue;

  VAR_14 = FUNC_7(FUNC_19(VAR_11, 0));
  break;
 }
 FUNC_4(VAR_20);
 if (!VAR_11) {
  return VAR_3;
 }


 VAR_19 = FUNC_5(VAR_14, VAR_1, VAR_8, VAR_0);
 if (!VAR_19) {
  return VAR_3;
 }
 VAR_14 = ((void*)0);

 FUNC_6(VAR_19);
 if (FUNC_14(&VAR_20, VAR_7, VAR_19) != VAR_5) {
  FUNC_4(VAR_19);
  return VAR_3;
 }
 FUNC_4(VAR_19);
 if (!VAR_20) {
  return VAR_3;
 }

 if (FUNC_1(VAR_20) == 0) {
  FUNC_4(VAR_20);
  return VAR_3;
 }


 VAR_12 = FUNC_17(FUNC_2(VAR_20));
 VAR_15 = FUNC_19(VAR_12, 0);


 if (!(VAR_21 = FUNC_9(VAR_7))) {
  return VAR_4;
 }
 VAR_18 = FUNC_12(VAR_21);
 for (VAR_22 = 0; VAR_22 < FUNC_11(VAR_21); VAR_22++) {
  if (FUNC_8(VAR_15, VAR_18[VAR_22]) == 0) {
   if (VAR_22) {
    VAR_17 = VAR_18[0];
    VAR_18[0] = VAR_18[VAR_22];
    VAR_18[VAR_22] = VAR_17;
   }
   break;
  }
 }
 if (VAR_22 >= FUNC_11(VAR_21)) {

  (void) FUNC_13(VAR_21, VAR_15);
  VAR_18 = FUNC_12(VAR_21);
  VAR_22 = FUNC_11(VAR_21) - 1;
  VAR_17 = VAR_18[0];
  VAR_18[0] = VAR_18[VAR_22];
  VAR_18[VAR_22] = VAR_17;
 }
 FUNC_4(VAR_20);


 FUNC_15(VAR_21, 0);


 VAR_16 = FUNC_0(VAR_6);
 VAR_19 = FUNC_5(VAR_16, VAR_2, VAR_8, VAR_0);
 if (!VAR_19) {
  FUNC_10(VAR_21);
  return VAR_3;
 }
 VAR_16 = ((void*)0);

 FUNC_6(VAR_19);
 if (FUNC_14(&VAR_20, VAR_21, VAR_19) != VAR_5) {
  FUNC_4(VAR_19);
  FUNC_10(VAR_21);
  return VAR_3;
 }
 FUNC_10(VAR_21);
 FUNC_4(VAR_19);
 if (!VAR_20) {
  return VAR_3;
 }


 while ((VAR_11 = FUNC_17(FUNC_3(VAR_20)))) {
  if (FUNC_16(VAR_11) != VAR_2
    || FUNC_19(VAR_11, 0) == ((void*)0))
   continue;

  VAR_14 = FUNC_7(FUNC_19(VAR_11, 0));
  VAR_13 = FUNC_7(FUNC_18(VAR_11));
  break;
 }
 FUNC_4(VAR_20);
 if (!VAR_11) {
  return VAR_3;
 }


 *VAR_9 = VAR_13;
 *VAR_10 = VAR_14;
 return VAR_5;
}
