
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int time_t ;
typedef int const ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int const*,int const*,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int const*) ;
 int const* FUNC_8 () ;
 int FUNC_9 (int const*,int ) ;
 int * FUNC_10 (int const*,scalar_t__) ;
 scalar_t__ FUNC_11 (int const*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int const*,int *,int *,int ) ;

ldns_rr_list *
FUNC_14(
  const ldns_resolver * VAR_6,
  const ldns_rdf * VAR_7,
  const ldns_rr_list * VAR_8,
  time_t VAR_9
  )
{
 ldns_pkt * VAR_10;
 ldns_rr * VAR_11;
 uint16_t VAR_12; uint16_t VAR_13; uint16_t VAR_14;
 uint16_t VAR_15; ldns_rr * VAR_16;

 ldns_rr_list * VAR_17 = ((void*)0);
 ldns_rr_list * VAR_18 = ((void*)0);
 ldns_rr_list * VAR_19 = ((void*)0);


 VAR_10 = FUNC_4(VAR_6, VAR_7,
  VAR_2, VAR_1, VAR_0);
 if (VAR_10) {
  VAR_17 = FUNC_2(VAR_10,
             VAR_2,
             VAR_4);
  VAR_18 = FUNC_2(VAR_10,
             VAR_3,
             VAR_4);


  for (VAR_12=0; VAR_12< FUNC_11(VAR_17); VAR_12++) {

   VAR_11 = FUNC_10(VAR_17, VAR_12);
   for (VAR_13=0; VAR_13<FUNC_11(VAR_8); VAR_13++) {
    if (FUNC_6(FUNC_10(VAR_8, VAR_13),
           VAR_11)) {


     VAR_19 = FUNC_8();

     for (VAR_15=0;
      VAR_15<FUNC_11(VAR_18);
      VAR_15++) {
      VAR_16 = FUNC_10(VAR_18, VAR_15);

      if (FUNC_3(
          FUNC_12(VAR_16))
          == FUNC_0(VAR_11)) {
       if (FUNC_13(
         VAR_17,
         VAR_16,
         VAR_11,
         VAR_9)
           == VAR_5) {



        for (VAR_14=0;
         VAR_14<FUNC_11(
           VAR_17);
         VAR_14++) {
         FUNC_9(
             VAR_19,
             FUNC_5(
             FUNC_10(
             VAR_17,
             VAR_14)));
        }

        FUNC_7(VAR_17);
        FUNC_7(VAR_18);
        FUNC_1(VAR_10);
        return VAR_19;
       }
      }
     }


     FUNC_9(VAR_19,
          FUNC_5(VAR_11));
    }
   }
  }

  FUNC_7(VAR_17);
  FUNC_7(VAR_18);
  FUNC_1(VAR_10);

 } else {

 }

 return VAR_19;
}
