
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int ldns_rr ;
typedef int ldns_buffer ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int const*,scalar_t__) ;
 int FUNC_13 (int const*) ;

ldns_status
FUNC_14(ldns_buffer *VAR_1,
      const ldns_rr *VAR_2,
      int VAR_3)
{
 uint16_t VAR_4;
 uint16_t VAR_5 = 0;
 bool VAR_6 = 0;
 switch (FUNC_9(VAR_2)) {
 case 137:
 case 144:
 case 143:
 case 149:
 case 129:
 case 145:
 case 142:
 case 140:
 case 135:
 case 147:
 case 141:
 case 139:
 case 133:
 case 150:
 case 131:
 case 130:
 case 134:
 case 136:
 case 138:
 case 146:
 case 128:
 case 148:
 case 151:
 case 132:
  VAR_6 = 1;
  break;
 default:
  break;
 }

 if (FUNC_10(VAR_2)) {
  (void) FUNC_7(VAR_1, FUNC_10(VAR_2));
 }

 if (FUNC_1(VAR_1, 4)) {
  (void) FUNC_3(VAR_1, FUNC_9(VAR_2));
  (void) FUNC_3(VAR_1, FUNC_8(VAR_2));
 }

 if (VAR_3 != VAR_0) {
  if (FUNC_1(VAR_1, 6)) {
   FUNC_5(VAR_1, FUNC_13(VAR_2));

   VAR_5 = FUNC_0(VAR_1);
   FUNC_3(VAR_1, 0);
  }
  for (VAR_4 = 0; VAR_4 < FUNC_11(VAR_2); VAR_4++) {
   if (VAR_6) {
    (void) FUNC_7(
     VAR_1, FUNC_12(VAR_2, VAR_4));
   } else {
    (void) FUNC_6(
     VAR_1, FUNC_12(VAR_2, VAR_4));
   }
  }
  if (VAR_5 != 0) {
   FUNC_4(VAR_1, VAR_5,
                            FUNC_0(VAR_1)
                              - VAR_5 - 2);
  }
 }
 return FUNC_2(VAR_1);
}
