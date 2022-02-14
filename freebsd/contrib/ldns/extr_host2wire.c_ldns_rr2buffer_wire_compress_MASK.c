
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int ldns_rr ;
typedef int ldns_rbtree_t ;
typedef int ldns_buffer ;
struct TYPE_2__ {scalar_t__ _compress; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,scalar_t__,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int *) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int const*) ;
 int FUNC_14 (int const*,scalar_t__) ;
 int FUNC_15 (int const*) ;

ldns_status
FUNC_16(ldns_buffer *VAR_2, const ldns_rr *VAR_3, int VAR_4, ldns_rbtree_t *VAR_5)
{
 uint16_t VAR_6;
 uint16_t VAR_7 = 0;

 if (FUNC_12(VAR_3)) {
  (void) FUNC_6(VAR_2, FUNC_12(VAR_3), VAR_5);
 }

 if (FUNC_1(VAR_2, 4)) {
  (void) FUNC_3(VAR_2, FUNC_11(VAR_3));
  (void) FUNC_3(VAR_2, FUNC_10(VAR_3));
 }

 if (VAR_4 != VAR_1) {
  if (FUNC_1(VAR_2, 6)) {
   FUNC_5(VAR_2, FUNC_15(VAR_3));

   VAR_7 = FUNC_0(VAR_2);
   FUNC_3(VAR_2, 0);
  }
  if (VAR_0 ==
      FUNC_9(FUNC_11(VAR_3))->_compress) {

   for (VAR_6 = 0; VAR_6 < FUNC_13(VAR_3); VAR_6++) {
    (void) FUNC_8(VAR_2,
        FUNC_14(VAR_3, VAR_6), VAR_5);
   }
  } else {
   for (VAR_6 = 0; VAR_6 < FUNC_13(VAR_3); VAR_6++) {
    (void) FUNC_7(
        VAR_2, FUNC_14(VAR_3, VAR_6));
   }
  }
  if (VAR_7 != 0) {
   FUNC_4(VAR_2, VAR_7,
                            FUNC_0(VAR_2)
                              - VAR_7 - 2);
  }
 }
 return FUNC_2(VAR_2);
}
