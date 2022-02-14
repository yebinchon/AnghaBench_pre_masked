
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ ldns_rbnode_t ;
struct TYPE_5__ {int flags; int * hashmap; } ;
typedef TYPE_2__ ldns_output_format_storage ;
typedef int ldns_output_format ;
typedef int ldns_dnssec_name ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;




 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int * FUNC_1 (int ) ;
 char* FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*) ;
 int * FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*,int) ;
 scalar_t__ VAR_18 ;
 TYPE_1__* FUNC_11 (int *,void*) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *,scalar_t__) ;
 scalar_t__ FUNC_14 (int *,int const*,int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 size_t FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int const*) ;
 scalar_t__ FUNC_22 (int *,int ) ;
 int FUNC_23 (int const*) ;
 int FUNC_24 (int const*) ;
 int FUNC_25 (int const*) ;
 int FUNC_26 (int const*) ;
 scalar_t__ FUNC_27 (int const*) ;
 int FUNC_28 (int const*) ;
 int * FUNC_29 (int const*,int) ;
 int FUNC_30 (int const*) ;
 scalar_t__ FUNC_31 (int *,int) ;

ldns_status
FUNC_32(ldns_buffer *VAR_19,
  const ldns_output_format *VAR_20, const ldns_rr *VAR_21)
{
 uint16_t VAR_22, VAR_23;
 ldns_status VAR_24 = VAR_17;
 ldns_output_format_storage* VAR_25 = (ldns_output_format_storage*)VAR_20;

 if (VAR_25 == ((void*)0)) {
  VAR_25 = (ldns_output_format_storage*)
     VAR_18;
 }
 if (!VAR_21) {
  if (VAR_7 & VAR_25->flags) {
   FUNC_3(VAR_19, "; (null)\n");
  }
  return FUNC_4(VAR_19);
 }
 if (FUNC_27(VAR_21)) {
  VAR_24 = FUNC_13(VAR_19, FUNC_27(VAR_21));
 }
 if (VAR_24 != VAR_17) {
  return VAR_24;
 }


 if (!FUNC_26(VAR_21)) {
  FUNC_3(VAR_19, "\t%d", FUNC_30(VAR_21));
 }

 FUNC_3(VAR_19, "\t");
 VAR_24 = FUNC_22(VAR_19, FUNC_24(VAR_21));
 if (VAR_24 != VAR_17) {
  return VAR_24;
 }
 FUNC_3(VAR_19, "\t");

 if (FUNC_10(VAR_20, FUNC_25(VAR_21))) {
  return FUNC_21(VAR_19, VAR_21);
 }
 VAR_24 = FUNC_31(VAR_19, FUNC_25(VAR_21));
 if (VAR_24 != VAR_17) {
  return VAR_24;
 }

 if (FUNC_28(VAR_21) > 0) {
  FUNC_3(VAR_19, "\t");
 } else if (!FUNC_26(VAR_21)) {
  FUNC_3(VAR_19, "\t\\# 0");
 }

 for (VAR_22 = 0; VAR_22 < FUNC_28(VAR_21); VAR_22++) {

  if ((VAR_25->flags & VAR_10) &&
    (FUNC_25(VAR_21) == 128) &&
    (( VAR_22 == 4 &&
      FUNC_18(FUNC_29(VAR_21, 4)) ==
       VAR_15) ||
      ( VAR_22 == 5 &&
       FUNC_18(FUNC_29(VAR_21, 5)) ==
          VAR_15) ||
      ( VAR_22 == 8 &&
       FUNC_18(FUNC_29(VAR_21, 8)) ==
          VAR_13))) {

   FUNC_3(VAR_19, "(null)");
   VAR_24 = FUNC_4(VAR_19);
  } else if ((VAR_25->flags & VAR_9) &&
    (FUNC_25(VAR_21) == VAR_16) &&
                 VAR_22 == 2 &&
     FUNC_18(FUNC_29(VAR_21, 2)) ==
        VAR_14) {
   FUNC_3(VAR_19, "%10lu",
    (unsigned long) FUNC_20(
     FUNC_16(FUNC_29(VAR_21, 2))));
   VAR_24 = FUNC_4(VAR_19);
  } else {
   VAR_24 = FUNC_14(VAR_19,
     VAR_20, FUNC_29(VAR_21, VAR_22));
  }
  if(VAR_24 != VAR_17)
   return VAR_24;
  if (VAR_22 < FUNC_28(VAR_21) - 1) {
   FUNC_3(VAR_19, " ");
  }
 }



 if (FUNC_28(VAR_21) > 0) {
  switch (FUNC_25(VAR_21)) {
  case 131:


   if (! (VAR_25->flags & VAR_2)) {
    break;
   }
   VAR_23 = FUNC_15(FUNC_29(VAR_21, 0));
   FUNC_3(VAR_19, " ;{");
   if (VAR_25->flags & VAR_3) {
    FUNC_3(VAR_19, "id = %u",
     (unsigned int) FUNC_5(VAR_21));
   }
   if ((VAR_25->flags & VAR_5) &&
     (VAR_23 & VAR_12)){

    if (VAR_23 & VAR_11) {
     FUNC_3(VAR_19, " (ksk)");
    } else {
     FUNC_3(VAR_19, " (zsk)");
    }
    if (VAR_25->flags & VAR_4){
     FUNC_3(VAR_19, ", ");
    }
   } else if (VAR_25->flags
     & (VAR_3
      |VAR_4)) {
    FUNC_3( VAR_19, ", ");
   }
   if (VAR_25->flags & VAR_4) {
    FUNC_3(VAR_19, "size = %db",
     FUNC_23(VAR_21));
   }
   FUNC_3(VAR_19, "}");
   break;
  case 128:
   if ((VAR_25->flags & VAR_2)
     && (VAR_25->flags& VAR_8)
     && FUNC_29(VAR_21, 6) != ((void*)0)) {
    FUNC_3(VAR_19, " ;{id = %d}",
      FUNC_15(
       FUNC_29(VAR_21, 6)));
   }
   break;
  case 130:
   if ((VAR_25->flags & VAR_0) &&
     FUNC_29(VAR_21, 3) != ((void*)0)) {

    uint8_t *VAR_26 = FUNC_16(
      FUNC_29(VAR_21, 3));
    size_t VAR_27 = FUNC_19(FUNC_29(VAR_21, 3));
    char *VAR_28 = FUNC_2(VAR_26, VAR_27);
    if(VAR_28) {
     FUNC_3(VAR_19,
       " ;{%s}", VAR_28);
    }
    FUNC_0(VAR_28);
   }
   break;
  case 129:
   if (! (VAR_25->flags & VAR_1) &&
    ! (VAR_25->flags & VAR_6)) {
    break;
   }
   FUNC_3(VAR_19, " ;{");
   if ((VAR_25->flags & VAR_1)) {
    if (FUNC_9(VAR_21)) {
     FUNC_3(VAR_19,
      " flags: optout");
    } else {
     FUNC_3(VAR_19," flags: -");
    }
    if (VAR_25->flags & VAR_6 &&
      VAR_25->hashmap != ((void*)0)) {
     FUNC_3(VAR_19, ", ");
    }
   }
   if (VAR_25->flags & VAR_6 &&
     VAR_25->hashmap != ((void*)0)) {
    ldns_rbnode_t *VAR_29;
    ldns_rdf *VAR_30 = FUNC_6(
      FUNC_27(VAR_21), 0);
    if (VAR_30) {
     VAR_29 = FUNC_11(
      VAR_25->hashmap,
      (void *) VAR_30);
     if (VAR_29->data) {
      FUNC_3(VAR_19,
       "from: ");
      (void) FUNC_12(
       VAR_19,
       FUNC_7(
          (ldns_dnssec_name*)
          VAR_29->data
       ));
     }
     FUNC_17(VAR_30);
    }
    VAR_30 = FUNC_1(
      FUNC_8(VAR_21));
    if (VAR_30) {
     VAR_29 = FUNC_11(
      VAR_25->hashmap,
      (void *) VAR_30);
     if (VAR_29->data) {
      FUNC_3(VAR_19,
       " to: ");
      (void) FUNC_12(
       VAR_19,
       FUNC_7(
          (ldns_dnssec_name*)
          VAR_29->data
       ));
     }
     FUNC_17(VAR_30);
    }
   }
   FUNC_3(VAR_19, "}");
   break;
  default:
   break;

  }
 }

 FUNC_3(VAR_19, "\n");
 return FUNC_4(VAR_19);
}
