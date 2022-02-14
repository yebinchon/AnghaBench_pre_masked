
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int time_t ;
typedef int ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_resolver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,int ) ;

ldns_status
FUNC_9(
  ldns_resolver *VAR_3,
  ldns_rr_list *VAR_4,
  ldns_rr_list * VAR_5,
  time_t VAR_6,
  ldns_rr_list * VAR_7
  )
{
 uint16_t VAR_8; uint16_t VAR_9;
 ldns_rr * VAR_10; ldns_rr * VAR_11;
 ldns_rr_list * VAR_12 = ((void*)0);
 ldns_status VAR_13 = VAR_1;

 if (!VAR_3 || !VAR_4 || !VAR_5) {
  return VAR_1;
 }

 if (FUNC_6(VAR_4) < 1) {
  return VAR_1;
 }

 if (FUNC_6(VAR_5) < 1) {
  return VAR_0;
 }


 for (VAR_8=0; VAR_8 < FUNC_6(VAR_5); VAR_8++) {

  VAR_10 = FUNC_5(VAR_5, VAR_8);

  if ((VAR_12 = FUNC_0(
     VAR_3,
     FUNC_7(VAR_10),
     FUNC_1(VAR_3),
     VAR_6,
     &VAR_13))) {

   for (VAR_9 = 0;
    VAR_9 < FUNC_6(VAR_12);
    VAR_9++) {
    VAR_11 = FUNC_5(VAR_12, VAR_9);

    if ((VAR_13 = FUNC_8(VAR_4,
        VAR_10,
        VAR_11,
        VAR_6))
        == VAR_2) {
     if (VAR_7) {
      FUNC_4(VAR_7,
           FUNC_2(VAR_11));
     }
     FUNC_3(VAR_12);
     return VAR_2;
    }
   }
  }
 }

 FUNC_3(VAR_12);
 return VAR_13;
}
