
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ ldns_rr_type ;
typedef int const ldns_rr_list ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int const ldns_pkt ;
struct TYPE_8__ {int packet_nodata; int rrset; void* packet_qtype; int packet_rcode; struct TYPE_8__* parent; } ;
typedef TYPE_1__ ldns_dnssec_data_chain ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int const*,int const*,TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_2 (int *,int ,int *,int const*,TYPE_1__*) ;
 int FUNC_3 (int *,int ,TYPE_1__*,int *,int ,int const*) ;
 TYPE_1__* FUNC_4 () ;
 int const* FUNC_5 (int const*,int *,scalar_t__) ;
 int const* FUNC_6 (int const*,scalar_t__) ;
 int FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 int const* FUNC_11 (int const*,scalar_t__,int ) ;
 int const* FUNC_12 (int *,int *,scalar_t__,int ,int ) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (int *) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int *) ;
 int * FUNC_19 (int const*,int ) ;
 scalar_t__ FUNC_20 (int const*) ;
 int * FUNC_21 (int *) ;
 int * FUNC_22 (int *,int) ;

ldns_dnssec_data_chain *
FUNC_23(ldns_resolver *VAR_4,
         uint16_t VAR_5,
         const ldns_rr_list *VAR_6,
         const ldns_pkt *VAR_7,
         ldns_rr *VAR_8)
{
 ldns_rr_list *VAR_9 = ((void*)0);
 ldns_rr_list *VAR_10 = ((void*)0);

 ldns_rr_list *VAR_11;

 ldns_pkt *VAR_12;

 ldns_rdf *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 ldns_rr_type VAR_15 = 0;
 ldns_rr_class VAR_16 = 0;

 bool VAR_17 = 0;

 ldns_dnssec_data_chain *VAR_18 = FUNC_4();

 FUNC_0(VAR_7 != ((void*)0));

 if (!FUNC_7(VAR_7)) {


  return VAR_18;
 }

 if (VAR_8) {
  VAR_18->rrset = FUNC_17();
  FUNC_18(VAR_18->rrset, VAR_8);
  VAR_18->parent = FUNC_23(VAR_4,
               VAR_5,
               VAR_6,
               VAR_7,
               ((void*)0));
  VAR_18->packet_rcode = FUNC_10(VAR_7);
  VAR_18->packet_qtype = FUNC_14(VAR_8);
  if (FUNC_8(VAR_7) == 0) {
   VAR_18->packet_nodata = 1;
  }
  return VAR_18;
 }

 if (!VAR_6 || FUNC_20(VAR_6) < 1) {


  VAR_18->packet_nodata = 1;
  if (VAR_7) {
   VAR_11 = FUNC_11(VAR_7,
           VAR_1,
           VAR_3
           );
   if (VAR_11) {
    if (FUNC_20(VAR_11) > 0) {
     VAR_15 = VAR_1;
     VAR_17 = 1;
    } else {
     FUNC_16(VAR_11);
     VAR_11 = ((void*)0);
    }
   } else {

    VAR_11 = FUNC_11(VAR_7,
           VAR_2,
       VAR_3);
    if (VAR_11) {
     if (FUNC_20(VAR_11) > 0) {
      VAR_15 = VAR_2;
      VAR_17 = 1;
     } else {
      FUNC_16(VAR_11);
      VAR_11 = ((void*)0);
     }
    } else {


     return VAR_18;
    }
   }
  } else {
   return VAR_18;
  }
 } else {
  VAR_11 = (ldns_rr_list *) VAR_6;
 }

 if (VAR_11 && FUNC_20(VAR_11) > 0) {
  VAR_18->rrset = FUNC_15(VAR_11);
  VAR_13 = FUNC_21(FUNC_19(VAR_11, 0));
  VAR_15 = FUNC_14(FUNC_19(VAR_11, 0));
  VAR_16 = FUNC_13(FUNC_19(VAR_11, 0));
 }

 if (VAR_17) {
  FUNC_16(VAR_11);
 }





 if (VAR_15 == VAR_1 || VAR_15 == VAR_2) {


  if (VAR_7) {
   VAR_9 = FUNC_6(VAR_7, VAR_15);
  } else {
   VAR_12 = FUNC_12(VAR_4, VAR_13, VAR_15, VAR_16, VAR_5);
   if (VAR_12) {
   VAR_9 = FUNC_6(VAR_7, VAR_15);
   FUNC_9(VAR_12);
   }
  }
 } else {
  if (VAR_7) {
   VAR_9 =
    FUNC_5(VAR_7,
             VAR_13,
             VAR_15);
  }
  if (!VAR_9) {
   VAR_12 = FUNC_12(VAR_4, VAR_13, VAR_15, VAR_16, VAR_5);
   if (VAR_12) {
   VAR_9 =
    FUNC_5(VAR_12,
             VAR_13,
             VAR_15);
   FUNC_9(VAR_12);
   }
  }
 }

 if (VAR_9 && FUNC_20(VAR_9) > 0) {
  VAR_14 = FUNC_22(FUNC_19(VAR_9, 0), 7);
 }
 if (!VAR_14) {
  if (VAR_9) {
   FUNC_16(VAR_9);
  }
  return FUNC_2(VAR_4,
                                                VAR_5,
                                                VAR_8,
                                                VAR_6,
                                                VAR_18);
 }
 if (VAR_15 != VAR_0) {
  FUNC_1(VAR_4,
                                      VAR_5,
                                      VAR_7,
                                      VAR_9,
                                      VAR_18,
                                      VAR_14,
                                      VAR_16
                                     );
 } else {
  FUNC_3(VAR_4,
                                     VAR_5,
                                     VAR_18,
                                     VAR_14,
                                     VAR_16,
                                     VAR_10
                                    );
 }
 if (VAR_9) {
  FUNC_16(VAR_9);
 }
 return VAR_18;
}
