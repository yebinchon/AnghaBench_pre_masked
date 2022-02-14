
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*,int) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int **,char*) ;

__attribute__((used)) static void
FUNC_16(ldns_rr_list* VAR_0, const ldns_rr* VAR_1)
{
 uint32_t VAR_2;
 uint16_t VAR_3;
 uint8_t VAR_4;
 ldns_rdf *VAR_5;
 ldns_rdf *VAR_6;
 ldns_rdf *VAR_7;

 if ((VAR_1 == ((void*)0)) || FUNC_11(VAR_1) < 4) {
  return;
 }

 VAR_2 = FUNC_3( FUNC_12(VAR_1, 3));
 VAR_4 = FUNC_4(FUNC_12(VAR_1, 2));

 for(VAR_3 = 0; VAR_3 < FUNC_9(VAR_0); VAR_3++) {
  if (VAR_4 <
      FUNC_1(
      FUNC_10(FUNC_8(VAR_0, VAR_3)))) {
   (void) FUNC_15(&VAR_5, "*");
   VAR_6 = FUNC_5(FUNC_10(
    FUNC_8(VAR_0, VAR_3)));
   while (VAR_4 < FUNC_1(VAR_6)) {
    VAR_7 = FUNC_2(
     VAR_6);
    FUNC_6(VAR_6);
    VAR_6 = VAR_7;
   }
   (void) FUNC_0(VAR_5, VAR_6);
   FUNC_6(VAR_6);
   FUNC_6(FUNC_10(FUNC_8(
    VAR_0, VAR_3)));
   FUNC_13(FUNC_8(VAR_0, VAR_3),
    VAR_5);
  }
  FUNC_14(FUNC_8(VAR_0, VAR_3), VAR_2);

  FUNC_7(FUNC_8(VAR_0, VAR_3));
 }
}
