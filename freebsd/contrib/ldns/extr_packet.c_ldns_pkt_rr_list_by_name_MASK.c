
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_rr_list ;
typedef int ldns_rdf ;
typedef int ldns_pkt_section ;
typedef int ldns_pkt ;


 scalar_t__ FUNC_0 (int ,int const*) ;
 int * FUNC_1 (int const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

ldns_rr_list *
FUNC_9(const ldns_pkt *VAR_0,
                         const ldns_rdf *VAR_1,
                         ldns_pkt_section VAR_2)
{
 ldns_rr_list *VAR_3;
 ldns_rr_list *VAR_4;
 uint16_t VAR_5;

 if (!VAR_0) {
  return ((void*)0);
 }

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 VAR_4 = ((void*)0);

 for(VAR_5 = 0; VAR_5 < FUNC_7(VAR_3); VAR_5++) {
  if (FUNC_0(FUNC_8(
      FUNC_6(VAR_3, VAR_5)),
     VAR_1) == 0) {

   if (VAR_4 == ((void*)0)) {
    VAR_4 = FUNC_4();
   }
   FUNC_5(VAR_4,
          FUNC_2(
      FUNC_6(VAR_3, VAR_5))
         );
  }
 }

 FUNC_3(VAR_3);

 return VAR_4;
}
