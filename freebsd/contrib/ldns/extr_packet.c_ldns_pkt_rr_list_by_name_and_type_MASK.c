
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rdf ;
typedef int ldns_pkt_section ;
typedef int ldns_pkt ;


 scalar_t__ FUNC_0 (int ,int const*) ;
 int * FUNC_1 (int const*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

ldns_rr_list *
FUNC_11(const ldns_pkt *VAR_0,
                                  const ldns_rdf *VAR_1,
                                  ldns_rr_type VAR_2,
                                  ldns_pkt_section VAR_3)
{
 ldns_rr_list *VAR_4;
 ldns_rr_list *VAR_5;
 ldns_rr_list *VAR_6;
 uint16_t VAR_7;

 if(!VAR_0) {
  return ((void*)0);
 }

 VAR_4 = FUNC_1(VAR_0, VAR_3);
 VAR_5 = FUNC_6();
 VAR_6 = ((void*)0);

 for(VAR_7 = 0; VAR_7 < FUNC_9(VAR_4); VAR_7++) {
  if (VAR_2 == FUNC_3(FUNC_8(VAR_4, VAR_7)) &&
      FUNC_0(FUNC_10(FUNC_8(VAR_4, VAR_7)),
                       VAR_1
                      ) == 0
     ) {

   FUNC_7(VAR_5, FUNC_2(FUNC_8(VAR_4, VAR_7)));
   VAR_6 = VAR_5;
  }
 }
 FUNC_4(VAR_4);
 if (!VAR_6) {
  FUNC_5(VAR_5);
 }
 return VAR_6;
}
