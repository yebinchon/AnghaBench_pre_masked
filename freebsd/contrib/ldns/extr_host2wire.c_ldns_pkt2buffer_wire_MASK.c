
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rbtree_t ;
struct TYPE_14__ {int _edns_data; } ;
typedef TYPE_1__ ldns_pkt ;
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
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,TYPE_1__ const*) ;
 int * FUNC_1 (TYPE_1__ const*) ;
 int * FUNC_2 (TYPE_1__ const*) ;
 int * FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*) ;
 int * FUNC_9 (TYPE_1__ const*) ;
 int * FUNC_10 (TYPE_1__ const*) ;
 int * FUNC_11 (int (*) (void const*,void const*)) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int ,int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *,scalar_t__) ;
 scalar_t__ FUNC_18 (int *) ;
 int * FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int ) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int ,int *) ;
 int FUNC_27 (int *,int ) ;

ldns_status
FUNC_28(ldns_buffer *VAR_10, const ldns_pkt *VAR_11)
{
 ldns_rr_list *VAR_12;
 uint16_t VAR_13;


 ldns_rr *VAR_14;
 uint8_t VAR_15[4];

 ldns_rbtree_t *VAR_16 = FUNC_11((int (*)(const void *, const void *))VAR_9);

 (void) FUNC_0(VAR_10, VAR_11);

 VAR_12 = FUNC_9(VAR_11);
 if (VAR_12) {
  for (VAR_13 = 0; VAR_13 < FUNC_18(VAR_12); VAR_13++) {
   (void) FUNC_15(VAR_10,
                FUNC_17(VAR_12, VAR_13), VAR_5, VAR_16);
  }
 }
 VAR_12 = FUNC_2(VAR_11);
 if (VAR_12) {
  for (VAR_13 = 0; VAR_13 < FUNC_18(VAR_12); VAR_13++) {
   (void) FUNC_15(VAR_10,
                FUNC_17(VAR_12, VAR_13), VAR_3, VAR_16);
  }
 }
 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12) {
  for (VAR_13 = 0; VAR_13 < FUNC_18(VAR_12); VAR_13++) {
   (void) FUNC_15(VAR_10,
                FUNC_17(VAR_12, VAR_13), VAR_4, VAR_16);
  }
 }
 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12) {
  for (VAR_13 = 0; VAR_13 < FUNC_18(VAR_12); VAR_13++) {
   (void) FUNC_15(VAR_10,
                FUNC_17(VAR_12, VAR_13), VAR_2, VAR_16);
  }
 }


 if (FUNC_4(VAR_11)) {
  VAR_14 = FUNC_19();
  if(!VAR_14) return VAR_6;
  FUNC_23(VAR_14,
    FUNC_13(VAR_0, "."));
  FUNC_25(VAR_14, VAR_1);
  FUNC_22(VAR_14, FUNC_6(VAR_11));
  VAR_15[0] = FUNC_5(VAR_11);
  VAR_15[1] = FUNC_7(VAR_11);
  FUNC_27(&VAR_15[2], FUNC_8(VAR_11));
  FUNC_24(VAR_14, FUNC_14(VAR_15));

  if (VAR_11->_edns_data)
   FUNC_21 (VAR_14, VAR_11->_edns_data);
  (void)FUNC_15(VAR_10, VAR_14, VAR_2, VAR_16);

  if (VAR_11->_edns_data)
   (void)FUNC_20 (VAR_14);
  FUNC_16(VAR_14);
 }


 if (FUNC_10(VAR_11)) {
  (void) FUNC_15(VAR_10,
                             FUNC_10(VAR_11), VAR_2, VAR_16);
 }

 FUNC_26(VAR_16,VAR_8,((void*)0));
 FUNC_12(VAR_16);

 return VAR_7;
}
