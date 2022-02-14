
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; } ;
typedef scalar_t__ ldns_status ;
typedef int ldns_pkt ;
typedef int ldns_output_format ;
typedef int ldns_buffer ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int const*) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 int FUNC_17 (int const*) ;
 scalar_t__ FUNC_18 (int const*) ;
 scalar_t__ FUNC_19 (int const*) ;
 int FUNC_20 (int const*) ;
 int FUNC_21 (int const*) ;
 scalar_t__ FUNC_22 (int const*) ;
 struct timeval FUNC_23 (int const*) ;
 scalar_t__ FUNC_24 (int const*) ;
 scalar_t__ FUNC_25 (int *,int const*) ;
 int FUNC_26 (int *,scalar_t__) ;
 char* FUNC_27 (scalar_t__) ;
 scalar_t__ FUNC_28 (int *,int const*,scalar_t__) ;
 scalar_t__ FUNC_29 (int ,scalar_t__) ;

ldns_status
FUNC_30(ldns_buffer *VAR_1,
  const ldns_output_format *VAR_2, const ldns_pkt *VAR_3)
{
 uint16_t VAR_4;
 ldns_status VAR_5 = VAR_0;
 char *VAR_6;
 struct timeval VAR_7;
 time_t VAR_8;

 if (!VAR_3) {
  FUNC_2(VAR_1, "null");
  return VAR_0;
 }

 if (FUNC_4(VAR_1)) {
  VAR_5 = FUNC_25(VAR_1, VAR_3);
  if (VAR_5 != VAR_0) {
   return VAR_5;
  }

  FUNC_2(VAR_1, "\n");

  FUNC_2(VAR_1, ";; QUESTION SECTION:\n;; ");


  for (VAR_4 = 0; VAR_4 < FUNC_19(VAR_3); VAR_4++) {
   VAR_5 = FUNC_28(VAR_1, VAR_2,
           FUNC_29(
            FUNC_21(VAR_3), VAR_4));
   if (VAR_5 != VAR_0) {
    return VAR_5;
   }
  }
  FUNC_2(VAR_1, "\n");

  FUNC_2(VAR_1, ";; ANSWER SECTION:\n");
  for (VAR_4 = 0; VAR_4 < FUNC_6(VAR_3); VAR_4++) {
   VAR_5 = FUNC_28(VAR_1, VAR_2,
           FUNC_29(
            FUNC_7(VAR_3), VAR_4));
   if (VAR_5 != VAR_0) {
    return VAR_5;
   }

  }
  FUNC_2(VAR_1, "\n");

  FUNC_2(VAR_1, ";; AUTHORITY SECTION:\n");

  for (VAR_4 = 0; VAR_4 < FUNC_18(VAR_3); VAR_4++) {
   VAR_5 = FUNC_28(VAR_1, VAR_2,
           FUNC_29(
            FUNC_10(VAR_3), VAR_4));
   if (VAR_5 != VAR_0) {
    return VAR_5;
   }
  }
  FUNC_2(VAR_1, "\n");

  FUNC_2(VAR_1, ";; ADDITIONAL SECTION:\n");
  for (VAR_4 = 0; VAR_4 < FUNC_9(VAR_3); VAR_4++) {
   VAR_5 = FUNC_28(VAR_1, VAR_2,
           FUNC_29(
            FUNC_5(VAR_3), VAR_4));
   if (VAR_5 != VAR_0) {
    return VAR_5;
   }

  }
  FUNC_2(VAR_1, "\n");

  FUNC_2(VAR_1, ";; Query time: %d msec\n",
    FUNC_20(VAR_3));
  if (FUNC_11(VAR_3)) {
   FUNC_2(VAR_1,
       ";; EDNS: version %u; flags:",
       FUNC_16(VAR_3));
   if (FUNC_13(VAR_3)) {
    FUNC_2(VAR_1, " do");
   }


   if (FUNC_14(VAR_3)) {
    FUNC_2(VAR_1, " ; ext-rcode: %d",
     (FUNC_14(VAR_3) << 4 | FUNC_17(VAR_3)));
   }
   FUNC_2(VAR_1, " ; udp: %u\n",
        FUNC_15(VAR_3));

   if (FUNC_12(VAR_3)) {
    FUNC_2(VAR_1, ";; Data: ");
    (void)FUNC_26(VAR_1,
         FUNC_12(VAR_3));
    FUNC_2(VAR_1, "\n");
   }
  }
  if (FUNC_24(VAR_3)) {
   FUNC_2(VAR_1, ";; TSIG:\n;; ");
   (void) FUNC_28(
     VAR_1, VAR_2, FUNC_24(VAR_3));
   FUNC_2(VAR_1, "\n");
  }
  if (FUNC_8(VAR_3)) {
   VAR_6 = FUNC_27(FUNC_8(VAR_3));
   FUNC_2(VAR_1, ";; SERVER: %s\n", VAR_6);
   FUNC_0(VAR_6);
  }
  VAR_7 = FUNC_23(VAR_3);
  VAR_8 = (time_t)VAR_7.tv_sec;
  FUNC_2(VAR_1, ";; WHEN: %s",
    (char*)FUNC_1(&VAR_8));

  FUNC_2(VAR_1, ";; MSG SIZE  rcvd: %d\n",
    (int)FUNC_22(VAR_3));
 } else {
  return FUNC_3(VAR_1);
 }
 return VAR_5;
}
