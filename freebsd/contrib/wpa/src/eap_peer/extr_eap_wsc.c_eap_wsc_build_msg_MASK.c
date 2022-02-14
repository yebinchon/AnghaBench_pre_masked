
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_wsc_data {scalar_t__ out_used; int fragment_size; int out_op_code; scalar_t__ state; int * out_buf; } ;
struct eap_method_ret {int methodState; int decision; int allowNotifications; int ignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int) ;
 int FUNC_1 (struct eap_wsc_data*,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct wpabuf*,scalar_t__) ;
 int FUNC_7 (struct wpabuf*,scalar_t__,size_t) ;
 int FUNC_8 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_wsc_data *VAR_17,
      struct eap_method_ret *VAR_18, u8 VAR_19)
{
 struct wpabuf *VAR_20;
 u8 VAR_21;
 size_t VAR_22, VAR_23;

 VAR_18->ignore = VAR_5;
 FUNC_2(VAR_9, "EAP-WSC: Generating Response");
 VAR_18->allowNotifications = VAR_10;

 VAR_21 = 0;
 VAR_22 = FUNC_5(VAR_17->out_buf) - VAR_17->out_used;
 if (2 + VAR_22 > VAR_17->fragment_size) {
  VAR_22 = VAR_17->fragment_size - 2;
  VAR_21 |= VAR_15;
  if (VAR_17->out_used == 0) {
   VAR_21 |= VAR_14;
   VAR_22 -= 2;
  }
 }
 VAR_23 = 2 + VAR_22;
 if (VAR_21 & VAR_14)
  VAR_23 += 2;
 VAR_20 = FUNC_0(VAR_3, VAR_2, VAR_23,
        VAR_1, VAR_19);
 if (VAR_20 == ((void*)0))
  return ((void*)0);

 FUNC_8(VAR_20, VAR_17->out_op_code);
 FUNC_8(VAR_20, VAR_21);
 if (VAR_21 & VAR_14)
  FUNC_6(VAR_20, FUNC_5(VAR_17->out_buf));

 FUNC_7(VAR_20, FUNC_4(VAR_17->out_buf) + VAR_17->out_used,
   VAR_22);
 VAR_17->out_used += VAR_22;

 VAR_18->methodState = VAR_8;
 VAR_18->decision = VAR_0;

 if (VAR_17->out_used == FUNC_5(VAR_17->out_buf)) {
  FUNC_2(VAR_9, "EAP-WSC: Sending out %lu bytes "
      "(message sent completely)",
      (unsigned long) VAR_22);
  FUNC_3(VAR_17->out_buf);
  VAR_17->out_buf = ((void*)0);
  VAR_17->out_used = 0;
  if ((VAR_17->state == VAR_4 && VAR_17->out_op_code == VAR_12) ||
      VAR_17->out_op_code == VAR_16 ||
      VAR_17->out_op_code == VAR_13) {
   FUNC_1(VAR_17, VAR_4);
   VAR_18->methodState = VAR_7;
  } else
   FUNC_1(VAR_17, VAR_6);
 } else {
  FUNC_2(VAR_9, "EAP-WSC: Sending out %lu bytes "
      "(%lu more to send)", (unsigned long) VAR_22,
      (unsigned long) FUNC_5(VAR_17->out_buf) -
      VAR_17->out_used);
  FUNC_1(VAR_17, VAR_11);
 }

 return VAR_20;
}
