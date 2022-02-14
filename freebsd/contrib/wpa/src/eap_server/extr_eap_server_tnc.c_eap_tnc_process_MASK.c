
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_tnc_data {scalar_t__ state; struct wpabuf* in_buf; } ;
struct eap_sm {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int const*) ;
 int* FUNC_1 (int ,int ,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_2 (struct eap_tnc_data*,int const*,int) ;
 scalar_t__ FUNC_3 (struct eap_tnc_data*,int,int,int const*,int) ;
 int FUNC_4 (struct eap_tnc_data*,scalar_t__) ;
 int FUNC_5 (struct eap_tnc_data*,struct wpabuf*) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*,int const*,int) ;

__attribute__((used)) static void FUNC_12(struct eap_sm *VAR_11, void *VAR_12,
       struct wpabuf *VAR_13)
{
 struct eap_tnc_data *VAR_14 = VAR_12;
 const u8 *VAR_15, *VAR_16;
 size_t VAR_17;
 u8 VAR_18;
 u32 VAR_19 = 0;
 struct wpabuf VAR_20;

 VAR_15 = FUNC_1(VAR_5, VAR_4, VAR_13, &VAR_17);
 if (VAR_15 == ((void*)0))
  return;

 VAR_16 = VAR_15 + VAR_17;

 if (VAR_17 == 1 && (VAR_14->state == VAR_1 || VAR_14->state == VAR_6)) {
  FUNC_7(VAR_8, "EAP-TNC: Peer acknowledged the last "
      "message");
  return;
 }

 if (VAR_17 == 0) {

  VAR_18 = 0;
 } else
  VAR_18 = *VAR_15++;

 if (VAR_18 & VAR_2) {
  if (VAR_16 - VAR_15 < 4) {
   FUNC_7(VAR_8, "EAP-TNC: Message underflow");
   FUNC_4(VAR_14, VAR_6);
   return;
  }
  VAR_19 = FUNC_0(VAR_15);
  VAR_15 += 4;

  if (VAR_19 < (u32) (VAR_16 - VAR_15) ||
      VAR_19 > 75000) {
   FUNC_7(VAR_8, "EAP-TNC: Invalid Message "
       "Length (%d; %ld remaining in this msg)",
       VAR_19, (long) (VAR_16 - VAR_15));
   FUNC_4(VAR_14, VAR_6);
   return;
  }
 }
 FUNC_7(VAR_8, "EAP-TNC: Received packet: Flags 0x%x "
     "Message Length %u", VAR_18, VAR_19);

 if (VAR_14->state == VAR_10) {
  if (VAR_17 > 1) {
   FUNC_7(VAR_8, "EAP-TNC: Unexpected payload "
       "in WAIT_FRAG_ACK state");
   FUNC_4(VAR_14, VAR_6);
   return;
  }
  FUNC_7(VAR_8, "EAP-TNC: Fragment acknowledged");
  FUNC_4(VAR_14, VAR_0);
  return;
 }

 if (VAR_14->in_buf && FUNC_2(VAR_14, VAR_15, VAR_16 - VAR_15) < 0) {
  FUNC_4(VAR_14, VAR_6);
  return;
 }

 if (VAR_18 & VAR_3) {
  if (FUNC_3(VAR_14, VAR_18, VAR_19,
          VAR_15, VAR_16 - VAR_15) < 0)
   FUNC_4(VAR_14, VAR_6);
  else
   FUNC_4(VAR_14, VAR_7);
  return;
 } else if (VAR_14->state == VAR_7) {
  FUNC_7(VAR_8, "EAP-TNC: All fragments received");
  FUNC_4(VAR_14, VAR_0);
 }

 if (VAR_14->in_buf == ((void*)0)) {

  FUNC_11(&VAR_20, VAR_15, VAR_16 - VAR_15);
  VAR_14->in_buf = &VAR_20;
 }

 FUNC_6(VAR_9, "EAP-TNC: Received payload",
     FUNC_9(VAR_14->in_buf), FUNC_10(VAR_14->in_buf));
 FUNC_5(VAR_14, VAR_14->in_buf);

 if (VAR_14->in_buf != &VAR_20)
  FUNC_8(VAR_14->in_buf);
 VAR_14->in_buf = ((void*)0);
}
