
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tnc_data {scalar_t__ out_used; int fragment_size; int state; int * out_buf; } ;
struct eap_method_ret {int decision; int methodState; int allowNotifications; int ignore; } ;


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
 int VAR_11 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct wpabuf*,scalar_t__) ;
 int FUNC_6 (struct wpabuf*,scalar_t__,size_t) ;
 int FUNC_7 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_tnc_data *VAR_12,
      struct eap_method_ret *VAR_13, u8 VAR_14)
{
 struct wpabuf *VAR_15;
 u8 VAR_16;
 size_t VAR_17, VAR_18;

 VAR_13->ignore = VAR_7;
 FUNC_1(VAR_9, "EAP-TNC: Generating Response");
 VAR_13->allowNotifications = VAR_10;

 VAR_16 = VAR_4;
 VAR_17 = FUNC_4(VAR_12->out_buf) - VAR_12->out_used;
 if (1 + VAR_17 > VAR_12->fragment_size) {
  VAR_17 = VAR_12->fragment_size - 1;
  VAR_16 |= VAR_3;
  if (VAR_12->out_used == 0) {
   VAR_16 |= VAR_2;
   VAR_17 -= 4;
  }
 }

 VAR_18 = 1 + VAR_17;
 if (VAR_16 & VAR_2)
  VAR_18 += 4;
 VAR_15 = FUNC_0(VAR_6, VAR_5, VAR_18,
        VAR_1, VAR_14);
 if (VAR_15 == ((void*)0))
  return ((void*)0);

 FUNC_7(VAR_15, VAR_16);
 if (VAR_16 & VAR_2)
  FUNC_5(VAR_15, FUNC_4(VAR_12->out_buf));

 FUNC_6(VAR_15, FUNC_3(VAR_12->out_buf) + VAR_12->out_used,
   VAR_17);
 VAR_12->out_used += VAR_17;

 VAR_13->methodState = VAR_8;
 VAR_13->decision = VAR_0;

 if (VAR_12->out_used == FUNC_4(VAR_12->out_buf)) {
  FUNC_1(VAR_9, "EAP-TNC: Sending out %lu bytes "
      "(message sent completely)",
      (unsigned long) VAR_17);
  FUNC_2(VAR_12->out_buf);
  VAR_12->out_buf = ((void*)0);
  VAR_12->out_used = 0;
 } else {
  FUNC_1(VAR_9, "EAP-TNC: Sending out %lu bytes "
      "(%lu more to send)", (unsigned long) VAR_17,
      (unsigned long) FUNC_4(VAR_12->out_buf) -
      VAR_12->out_used);
  VAR_12->state = VAR_11;
 }

 return VAR_15;
}
