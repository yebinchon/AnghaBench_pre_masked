
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {void* ignore; } ;
struct eap_ikev2_data {scalar_t__ state; scalar_t__ out_used; int * out_buf; int ikev2; struct wpabuf* in_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct wpabuf const*) ;
 int* FUNC_2 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_3 (struct eap_ikev2_data*,struct eap_method_ret*,int) ;
 scalar_t__ FUNC_4 (struct eap_ikev2_data*,int const*,int) ;
 struct wpabuf* FUNC_5 (struct eap_ikev2_data*,struct eap_method_ret*,int,int,int ,int const*,int) ;
 scalar_t__ FUNC_6 (struct eap_ikev2_data*,struct wpabuf const*,int,int const*,int const**,int) ;
 int FUNC_7 (struct eap_ikev2_data*,int ) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,struct wpabuf*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*,int const*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_13(struct eap_sm *VAR_9, void *VAR_10,
      struct eap_method_ret *VAR_11,
      const struct wpabuf *VAR_12)
{
 struct eap_ikev2_data *VAR_13 = VAR_10;
 const u8 *VAR_14, *VAR_15, *VAR_16;
 size_t VAR_17;
 u8 VAR_18, VAR_19;
 u32 VAR_20 = 0;
 struct wpabuf VAR_21;

 VAR_15 = FUNC_2(VAR_1, VAR_0, VAR_12, &VAR_17);
 if (VAR_15 == ((void*)0)) {
  VAR_11->ignore = VAR_7;
  return ((void*)0);
 }

 VAR_19 = FUNC_1(VAR_12);

 VAR_14 = VAR_15;
 VAR_16 = VAR_14 + VAR_17;

 if (VAR_17 == 0)
  VAR_18 = 0;
 else
  VAR_18 = *VAR_15++;

 if (FUNC_6(VAR_13, VAR_12, VAR_18, VAR_15, &VAR_16,
      VAR_13->state == VAR_8 && VAR_17 == 0) < 0)
 {
  VAR_11->ignore = VAR_7;
  return ((void*)0);
 }

 if (VAR_18 & VAR_3) {
  if (VAR_16 - VAR_15 < 4) {
   FUNC_10(VAR_5, "EAP-IKEV2: Message underflow");
   VAR_11->ignore = VAR_7;
   return ((void*)0);
  }
  VAR_20 = FUNC_0(VAR_15);
  VAR_15 += 4;

  if (VAR_20 < (u32) (VAR_16 - VAR_15)) {
   FUNC_10(VAR_5, "EAP-IKEV2: Invalid Message "
       "Length (%d; %ld remaining in this msg)",
       VAR_20, (long) (VAR_16 - VAR_15));
   VAR_11->ignore = VAR_7;
   return ((void*)0);
  }
 }

 FUNC_10(VAR_5, "EAP-IKEV2: Received packet: Flags 0x%x "
     "Message Length %u", VAR_18, VAR_20);

 if (VAR_13->state == VAR_8) {
  if (VAR_17 != 0) {
   FUNC_10(VAR_5, "EAP-IKEV2: Unexpected payload "
       "in WAIT_FRAG_ACK state");
   VAR_11->ignore = VAR_7;
   return ((void*)0);
  }
  FUNC_10(VAR_5, "EAP-IKEV2: Fragment acknowledged");
  FUNC_7(VAR_13, VAR_6);
  return FUNC_3(VAR_13, VAR_11, VAR_19);
 }

 if (VAR_13->in_buf && FUNC_4(VAR_13, VAR_15, VAR_16 - VAR_15) < 0) {
  VAR_11->ignore = VAR_7;
  return ((void*)0);
 }

 if (VAR_18 & VAR_4) {
  return FUNC_5(VAR_13, VAR_11, VAR_19, VAR_18,
        VAR_20, VAR_15,
        VAR_16 - VAR_15);
 }

 if (VAR_13->in_buf == ((void*)0)) {

  FUNC_12(&VAR_21, VAR_15, VAR_16 - VAR_15);
  VAR_13->in_buf = &VAR_21;
 }

 if (FUNC_9(&VAR_13->ikev2, VAR_13->in_buf) < 0) {
  if (VAR_13->in_buf == &VAR_21)
   VAR_13->in_buf = ((void*)0);
  FUNC_7(VAR_13, VAR_2);
  return ((void*)0);
 }

 if (VAR_13->in_buf != &VAR_21)
  FUNC_11(VAR_13->in_buf);
 VAR_13->in_buf = ((void*)0);

 if (VAR_13->out_buf == ((void*)0)) {
  VAR_13->out_buf = FUNC_8(&VAR_13->ikev2);
  if (VAR_13->out_buf == ((void*)0)) {
   FUNC_10(VAR_5, "EAP-IKEV2: Failed to generate "
       "IKEv2 message");
   return ((void*)0);
  }
  VAR_13->out_used = 0;
 }

 FUNC_7(VAR_13, VAR_6);
 return FUNC_3(VAR_13, VAR_11, VAR_19);
}
