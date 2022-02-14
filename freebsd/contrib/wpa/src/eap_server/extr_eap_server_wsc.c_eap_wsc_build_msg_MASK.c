
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_wsc_data {scalar_t__ out_used; int fragment_size; int out_op_code; int * out_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int) ;
 int FUNC_1 (struct eap_wsc_data*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct wpabuf*,scalar_t__) ;
 int FUNC_7 (struct wpabuf*,scalar_t__,size_t) ;
 int FUNC_8 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_wsc_data *VAR_9, u8 VAR_10)
{
 struct wpabuf *VAR_11;
 u8 VAR_12;
 size_t VAR_13, VAR_14;

 VAR_12 = 0;
 VAR_13 = FUNC_5(VAR_9->out_buf) - VAR_9->out_used;
 if (2 + VAR_13 > VAR_9->fragment_size) {
  VAR_13 = VAR_9->fragment_size - 2;
  VAR_12 |= VAR_8;
  if (VAR_9->out_used == 0) {
   VAR_12 |= VAR_7;
   VAR_13 -= 2;
  }
 }
 VAR_14 = 2 + VAR_13;
 if (VAR_12 & VAR_7)
  VAR_14 += 2;
 VAR_11 = FUNC_0(VAR_2, VAR_1, VAR_14,
       VAR_0, VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_5, "EAP-WSC: Failed to allocate memory for "
      "request");
  return ((void*)0);
 }

 FUNC_8(VAR_11, VAR_9->out_op_code);
 FUNC_8(VAR_11, VAR_12);
 if (VAR_12 & VAR_7)
  FUNC_6(VAR_11, FUNC_5(VAR_9->out_buf));

 FUNC_7(VAR_11, FUNC_4(VAR_9->out_buf) + VAR_9->out_used,
   VAR_13);
 VAR_9->out_used += VAR_13;

 if (VAR_9->out_used == FUNC_5(VAR_9->out_buf)) {
  FUNC_2(VAR_4, "EAP-WSC: Sending out %lu bytes "
      "(message sent completely)",
      (unsigned long) VAR_13);
  FUNC_3(VAR_9->out_buf);
  VAR_9->out_buf = ((void*)0);
  VAR_9->out_used = 0;
  FUNC_1(VAR_9, VAR_3);
 } else {
  FUNC_2(VAR_4, "EAP-WSC: Sending out %lu bytes "
      "(%lu more to send)", (unsigned long) VAR_13,
      (unsigned long) FUNC_5(VAR_9->out_buf) -
      VAR_9->out_used);
  FUNC_1(VAR_9, VAR_6);
 }

 return VAR_11;
}
