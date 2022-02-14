
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct eap_ikev2_data {scalar_t__ state; int keys_ready; struct wpabuf* in_buf; TYPE_1__ ikev2; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

 scalar_t__ VAR_9 ;
 int FUNC_0 (int const*) ;
 int* FUNC_1 (int ,int ,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_2 (struct eap_ikev2_data*,int const*,int) ;
 scalar_t__ FUNC_3 (struct eap_ikev2_data*,int,int ,int const*,int) ;
 scalar_t__ FUNC_4 (struct eap_ikev2_data*,struct wpabuf*,int,int const*,int const**,int) ;
 int FUNC_5 (struct eap_ikev2_data*) ;
 int FUNC_6 (struct eap_ikev2_data*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*,struct wpabuf*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,int const*,int) ;

__attribute__((used)) static void FUNC_11(struct eap_sm *VAR_10, void *VAR_11,
         struct wpabuf *VAR_12)
{
 struct eap_ikev2_data *VAR_13 = VAR_11;
 const u8 *VAR_14, *VAR_15, *VAR_16;
 size_t VAR_17;
 u8 VAR_18;
 u32 VAR_19 = 0;
 struct wpabuf VAR_20;

 VAR_15 = FUNC_1(VAR_2, VAR_1, VAR_12,
          &VAR_17);
 if (VAR_15 == ((void*)0))
  return;

 VAR_14 = VAR_15;
 VAR_16 = VAR_14 + VAR_17;

 if (VAR_17 == 0) {

  VAR_18 = 0;
 } else
  VAR_18 = *VAR_15++;

 if (FUNC_4(VAR_13, VAR_12, VAR_18, VAR_15, &VAR_16,
      VAR_13->state == VAR_9 && VAR_17 == 0) < 0)
 {
  FUNC_6(VAR_13, VAR_3);
  return;
 }

 if (VAR_18 & VAR_5) {
  if (VAR_16 - VAR_15 < 4) {
   FUNC_8(VAR_8, "EAP-IKEV2: Message underflow");
   FUNC_6(VAR_13, VAR_3);
   return;
  }
  VAR_19 = FUNC_0(VAR_15);
  VAR_15 += 4;

  if (VAR_19 < (u32) (VAR_16 - VAR_15)) {
   FUNC_8(VAR_8, "EAP-IKEV2: Invalid Message "
       "Length (%d; %ld remaining in this msg)",
       VAR_19, (long) (VAR_16 - VAR_15));
   FUNC_6(VAR_13, VAR_3);
   return;
  }
 }
 FUNC_8(VAR_8, "EAP-IKEV2: Received packet: Flags 0x%x "
     "Message Length %u", VAR_18, VAR_19);

 if (VAR_13->state == VAR_9) {
  if (VAR_17 != 0) {
   FUNC_8(VAR_8, "EAP-IKEV2: Unexpected payload "
       "in WAIT_FRAG_ACK state");
   FUNC_6(VAR_13, VAR_3);
   return;
  }
  FUNC_8(VAR_8, "EAP-IKEV2: Fragment acknowledged");
  FUNC_6(VAR_13, VAR_7);
  return;
 }

 if (VAR_13->in_buf && FUNC_2(VAR_13, VAR_15, VAR_16 - VAR_15) < 0) {
  FUNC_6(VAR_13, VAR_3);
  return;
 }

 if (VAR_18 & VAR_6) {
  if (FUNC_3(VAR_13, VAR_18, VAR_19,
            VAR_15, VAR_16 - VAR_15) < 0)
   FUNC_6(VAR_13, VAR_3);
  else
   FUNC_6(VAR_13, VAR_4);
  return;
 } else if (VAR_13->state == VAR_4) {
  FUNC_8(VAR_8, "EAP-TNC: All fragments received");
  VAR_13->state = VAR_7;
 }

 if (VAR_13->in_buf == ((void*)0)) {

  FUNC_10(&VAR_20, VAR_15, VAR_16 - VAR_15);
  VAR_13->in_buf = &VAR_20;
 }

 if (FUNC_7(&VAR_13->ikev2, VAR_13->in_buf) < 0) {
  if (VAR_13->in_buf == &VAR_20)
   VAR_13->in_buf = ((void*)0);
  FUNC_6(VAR_13, VAR_3);
  return;
 }

 switch (VAR_13->ikev2.state) {
 case 128:


  VAR_13->keys_ready = 1;
  break;
 case 129:
  if (VAR_13->state == VAR_3)
   break;
  FUNC_8(VAR_8, "EAP-IKEV2: Authentication completed "
      "successfully");
  if (FUNC_5(VAR_13))
   break;
  FUNC_6(VAR_13, VAR_0);
  break;
 default:
  break;
 }

 if (VAR_13->in_buf != &VAR_20)
  FUNC_9(VAR_13->in_buf);
 VAR_13->in_buf = ((void*)0);
}
