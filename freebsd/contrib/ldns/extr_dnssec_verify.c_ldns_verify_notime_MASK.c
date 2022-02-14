
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int const ldns_rr_list ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,int ,int const*,int const*) ;

ldns_status
FUNC_3(ldns_rr_list *VAR_5, ldns_rr_list *VAR_6,
 const ldns_rr_list *VAR_7, ldns_rr_list *VAR_8)
{
 uint16_t VAR_9;
 ldns_status VAR_10 = VAR_3;

 if (!VAR_5 || !VAR_6 || !VAR_7) {
  return VAR_3;
 }

 if (FUNC_1(VAR_5) < 1) {
  return VAR_3;
 }

 if (FUNC_1(VAR_6) < 1) {
  return VAR_1;
 }

 if (FUNC_1(VAR_7) < 1) {
  VAR_10 = VAR_2;
 } else {
  for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_6); VAR_9++) {
   ldns_status VAR_11 = FUNC_2(VAR_5,
    FUNC_0(VAR_6, VAR_9), VAR_7, VAR_8);


   if (VAR_11 == VAR_4) {
    VAR_10 = VAR_4;
   } else if (VAR_10 == VAR_3) {
    VAR_10 = VAR_11;
   } else if (VAR_11 != VAR_3 && VAR_10 ==
    VAR_0) {
    VAR_10 = VAR_11;
   }
  }
 }
 return VAR_10;
}
