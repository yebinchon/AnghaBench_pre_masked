
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_pkt_section ;
typedef int ldns_pkt ;


 int * FUNC_0 (int const*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;

ldns_rr_list *
FUNC_9(const ldns_pkt *VAR_0,
                         ldns_rr_type VAR_1,
                         ldns_pkt_section VAR_2)
{
 ldns_rr_list *VAR_3;
 ldns_rr_list *VAR_4;
 uint16_t VAR_5;

 if(!VAR_0) {
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 VAR_4 = FUNC_5();

 for(VAR_5 = 0; VAR_5 < FUNC_8(VAR_3); VAR_5++) {
  if (VAR_1 == FUNC_2(FUNC_7(VAR_3, VAR_5))) {

   FUNC_6(VAR_4,
                        FUNC_1(
                         FUNC_7(VAR_3, VAR_5))
          );
  }
 }
 FUNC_3(VAR_3);

 if (FUNC_8(VAR_4) == 0) {
  FUNC_4(VAR_4);
  return ((void*)0);
 } else {
  return VAR_4;
 }
}
