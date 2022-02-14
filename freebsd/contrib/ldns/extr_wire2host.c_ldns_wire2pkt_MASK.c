
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr ;
struct TYPE_22__ {scalar_t__ _edns_present; } ;
typedef TYPE_1__ ldns_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,scalar_t__) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,scalar_t__) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*,size_t) ;
 int FUNC_18 (TYPE_1__*,int *) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int ,int *) ;
 scalar_t__ FUNC_25 (int *,int ) ;
 int FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (TYPE_1__*,scalar_t__ const*,size_t,size_t*) ;
 scalar_t__ FUNC_28 (int **,scalar_t__ const*,size_t,size_t*,int ) ;
 int FUNC_29 (scalar_t__*,int ) ;
 int VAR_13 ;

ldns_status
FUNC_30(ldns_pkt **VAR_14, const uint8_t *VAR_15, size_t VAR_16)
{
 size_t VAR_17 = 0;
 uint16_t VAR_18;
 ldns_rr *VAR_19;
 ldns_pkt *VAR_20 = FUNC_7();
 ldns_status VAR_21 = VAR_7;
 uint8_t VAR_22 = 0;

 uint8_t VAR_23[4];

 VAR_21 = FUNC_27(VAR_20, VAR_15, VAR_16, &VAR_17);
 FUNC_0(VAR_21, VAR_13);

 for (VAR_18 = 0; VAR_18 < FUNC_9(VAR_20); VAR_18++) {

  VAR_21 = FUNC_28(&VAR_19, VAR_15, VAR_16, &VAR_17, VAR_5);
  if (VAR_21 == VAR_8) {
   VAR_21 = VAR_12;
  }
  FUNC_0(VAR_21, VAR_13);
  if (!FUNC_24(FUNC_10(VAR_20), VAR_19)) {
   FUNC_6(VAR_20);
   return VAR_6;
  }
 }
 for (VAR_18 = 0; VAR_18 < FUNC_2(VAR_20); VAR_18++) {
  VAR_21 = FUNC_28(&VAR_19, VAR_15, VAR_16, &VAR_17, VAR_3);
  if (VAR_21 == VAR_8) {
   VAR_21 = VAR_10;
  }
  FUNC_0(VAR_21, VAR_13);
  if (!FUNC_24(FUNC_3(VAR_20), VAR_19)) {
   FUNC_6(VAR_20);
   return VAR_6;
  }
 }
 for (VAR_18 = 0; VAR_18 < FUNC_8(VAR_20); VAR_18++) {
  VAR_21 = FUNC_28(&VAR_19, VAR_15, VAR_16, &VAR_17, VAR_4);
  if (VAR_21 == VAR_8) {
   VAR_21 = VAR_11;
  }
  FUNC_0(VAR_21, VAR_13);
  if (!FUNC_24(FUNC_5(VAR_20), VAR_19)) {
   FUNC_6(VAR_20);
   return VAR_6;
  }
 }
 for (VAR_18 = 0; VAR_18 < FUNC_4(VAR_20); VAR_18++) {
  VAR_21 = FUNC_28(&VAR_19, VAR_15, VAR_16, &VAR_17, VAR_2);
  if (VAR_21 == VAR_8) {
   VAR_21 = VAR_9;
  }
  FUNC_0(VAR_21, VAR_13);

  if (FUNC_23(VAR_19) == VAR_0) {
   FUNC_14(VAR_20, FUNC_22(VAR_19));
   FUNC_29(VAR_23, FUNC_26(VAR_19));
   FUNC_13(VAR_20, VAR_23[0]);
   FUNC_15(VAR_20, VAR_23[1]);
   FUNC_16(VAR_20, FUNC_20(&VAR_23[2]));

   if (FUNC_25(VAR_19, 0)) {
    FUNC_12(VAR_20, FUNC_19(FUNC_25(VAR_19, 0)));
   }
   FUNC_21(VAR_19);
   VAR_22 += 1;
  } else if (FUNC_23(VAR_19) == VAR_1) {
   FUNC_18(VAR_20, VAR_19);
   FUNC_11(VAR_20, FUNC_4(VAR_20) - 1);
  } else if (!FUNC_24(FUNC_1(VAR_20), VAR_19)) {
   FUNC_6(VAR_20);
   return VAR_6;
  }
 }
 FUNC_17(VAR_20, VAR_16);
 if(VAR_22)
  FUNC_11(VAR_20, FUNC_4(VAR_20)
                        - VAR_22);
        VAR_20->_edns_present = VAR_22;

 *VAR_14 = VAR_20;
 return VAR_21;

status_error:
 FUNC_6(VAR_20);
 return VAR_21;
}
