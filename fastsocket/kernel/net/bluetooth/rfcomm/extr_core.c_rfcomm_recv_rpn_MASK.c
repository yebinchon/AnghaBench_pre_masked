
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct rfcomm_session {int dummy; } ;
struct rfcomm_rpn {scalar_t__ bit_rate; scalar_t__ flow_ctrl; scalar_t__ xon_char; scalar_t__ xoff_char; int param_mask; int line_settings; int dlci; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rfcomm_session*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct rfcomm_session *VAR_15, int VAR_16, int VAR_17, struct sk_buff *VAR_18)
{
 struct rfcomm_rpn *VAR_19 = (void *) VAR_18->data;
 u8 VAR_20 = FUNC_1(VAR_19->dlci);

 u8 VAR_21 = 0;
 u8 VAR_22 = 0;
 u8 VAR_23 = 0;
 u8 VAR_24 = 0;
 u8 VAR_25 = 0;
 u8 VAR_26 = 0;
 u8 VAR_27 = 0;
 u16 VAR_28 = VAR_4;

 FUNC_0("dlci %d cr %d len 0x%x bitr 0x%x line 0x%x flow 0x%x xonc 0x%x xoffc 0x%x pm 0x%x",
  VAR_20, VAR_16, VAR_17, VAR_19->bit_rate, VAR_19->line_settings, VAR_19->flow_ctrl,
  VAR_19->xon_char, VAR_19->xoff_char, VAR_19->param_mask);

 if (!VAR_16)
  return 0;

 if (VAR_17 == 1) {

  VAR_21 = VAR_0;
  VAR_22 = VAR_1;
  VAR_23 = VAR_12;
  VAR_24 = VAR_3;
  VAR_25 = VAR_2;
  VAR_26 = VAR_14;
  VAR_27 = VAR_13;
  goto rpn_out;
 }




 if (VAR_19->param_mask & FUNC_5(VAR_5)) {
  VAR_21 = VAR_19->bit_rate;
  if (VAR_21 != VAR_0) {
   FUNC_0("RPN bit rate mismatch 0x%x", VAR_21);
   VAR_21 = VAR_0;
   VAR_28 ^= VAR_5;
  }
 }

 if (VAR_19->param_mask & FUNC_5(VAR_6)) {
  VAR_22 = FUNC_2(VAR_19->line_settings);
  if (VAR_22 != VAR_1) {
   FUNC_0("RPN data bits mismatch 0x%x", VAR_22);
   VAR_22 = VAR_1;
   VAR_28 ^= VAR_6;
  }
 }

 if (VAR_19->param_mask & FUNC_5(VAR_9)) {
  VAR_23 = FUNC_4(VAR_19->line_settings);
  if (VAR_23 != VAR_12) {
   FUNC_0("RPN stop bits mismatch 0x%x", VAR_23);
   VAR_23 = VAR_12;
   VAR_28 ^= VAR_9;
  }
 }

 if (VAR_19->param_mask & FUNC_5(VAR_8)) {
  VAR_24 = FUNC_3(VAR_19->line_settings);
  if (VAR_24 != VAR_3) {
   FUNC_0("RPN parity mismatch 0x%x", VAR_24);
   VAR_24 = VAR_3;
   VAR_28 ^= VAR_8;
  }
 }

 if (VAR_19->param_mask & FUNC_5(VAR_7)) {
  VAR_25 = VAR_19->flow_ctrl;
  if (VAR_25 != VAR_2) {
   FUNC_0("RPN flow ctrl mismatch 0x%x", VAR_25);
   VAR_25 = VAR_2;
   VAR_28 ^= VAR_7;
  }
 }

 if (VAR_19->param_mask & FUNC_5(VAR_11)) {
  VAR_26 = VAR_19->xon_char;
  if (VAR_26 != VAR_14) {
   FUNC_0("RPN XON char mismatch 0x%x", VAR_26);
   VAR_26 = VAR_14;
   VAR_28 ^= VAR_11;
  }
 }

 if (VAR_19->param_mask & FUNC_5(VAR_10)) {
  VAR_27 = VAR_19->xoff_char;
  if (VAR_27 != VAR_13) {
   FUNC_0("RPN XOFF char mismatch 0x%x", VAR_27);
   VAR_27 = VAR_13;
   VAR_28 ^= VAR_10;
  }
 }

rpn_out:
 FUNC_6(VAR_15, 0, VAR_20, VAR_21, VAR_22, VAR_23,
   VAR_24, VAR_25, VAR_26, VAR_27, VAR_28);

 return 0;
}
