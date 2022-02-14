
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int time_t ;
typedef int ldns_rr_list ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int const*,int const*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int const*,int ,int *) ;

ldns_rr_list *
FUNC_10(
  const ldns_resolver *VAR_6,
  const ldns_rdf * VAR_7,
  const ldns_rr_list * VAR_8,
  time_t VAR_9)
{
 ldns_pkt * VAR_10;
 uint16_t VAR_11;
 ldns_rr_list * VAR_12 = ((void*)0);
 ldns_rr_list * VAR_13 = ((void*)0);
 ldns_rr_list * VAR_14 = ((void*)0);


 VAR_10 = FUNC_2(VAR_6, VAR_7,
  VAR_2, VAR_1, VAR_0);
 if (VAR_10) {
  VAR_12 = FUNC_1(VAR_10,
           VAR_2,
           VAR_4);
  VAR_13 = FUNC_1(VAR_10,
          VAR_3,
          VAR_4);


  if (FUNC_9(VAR_12, VAR_13, VAR_8, VAR_9, ((void*)0))
           == VAR_5) {
   VAR_14 = FUNC_5();
   for (VAR_11=0; VAR_11<FUNC_8(VAR_12); VAR_11++) {
    FUNC_6(VAR_14,
         FUNC_3(FUNC_7(VAR_12,
               VAR_11)
           )
         );
   }
  }

  FUNC_4(VAR_12);
  FUNC_4(VAR_13);
  FUNC_0(VAR_10);

 } else {

 }

 return VAR_14;
}
