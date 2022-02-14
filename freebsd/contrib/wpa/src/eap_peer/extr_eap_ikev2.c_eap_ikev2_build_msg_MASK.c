
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct ikev2_integ_alg {size_t hash_len; } ;
struct eap_method_ret {void* decision; void* methodState; int allowNotifications; int ignore; } ;
struct TYPE_5__ {int SK_integ_len; int SK_ar; } ;
struct TYPE_4__ {int integ; } ;
struct TYPE_6__ {int state; TYPE_2__ keys; TYPE_1__ proposal; } ;
struct eap_ikev2_data {size_t out_used; int fragment_size; int keys_ready; struct wpabuf* out_buf; int state; TYPE_3__ ikev2; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct eap_ikev2_data*) ;
 int FUNC_1 (struct eap_ikev2_data*,int ) ;
 struct wpabuf* FUNC_2 (int ,int ,size_t,int ,int) ;
 struct ikev2_integ_alg* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int const*,size_t,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wpabuf*) ;
 int* FUNC_7 (struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wpabuf*) ;
 size_t FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,size_t) ;
 int FUNC_11 (struct wpabuf*,size_t) ;
 int FUNC_12 (struct wpabuf*,scalar_t__,size_t) ;
 int FUNC_13 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_14(struct eap_ikev2_data *VAR_16,
        struct eap_method_ret *VAR_17, u8 VAR_18)
{
 struct wpabuf *VAR_19;
 u8 VAR_20;
 size_t VAR_21, VAR_22, VAR_23 = 0;

 VAR_17->ignore = VAR_7;
 FUNC_5(VAR_13, "EAP-IKEV2: Generating Response");
 VAR_17->allowNotifications = VAR_14;

 VAR_20 = 0;
 VAR_21 = FUNC_9(VAR_16->out_buf) - VAR_16->out_used;
 if (1 + VAR_21 > VAR_16->fragment_size) {
  VAR_21 = VAR_16->fragment_size - 1;
  VAR_20 |= VAR_10;
  if (VAR_16->out_used == 0) {
   VAR_20 |= VAR_9;
   VAR_21 -= 4;
  }
 }

 VAR_22 = 1 + VAR_21;
 if (VAR_20 & VAR_9)
  VAR_22 += 4;
 if (VAR_16->keys_ready) {
  const struct ikev2_integ_alg *VAR_24;
  FUNC_5(VAR_13, "EAP-IKEV2: Add Integrity Checksum "
      "Data");
  VAR_20 |= VAR_8;
  VAR_24 = FUNC_3(VAR_16->ikev2.proposal.integ);
  if (VAR_24 == ((void*)0)) {
   FUNC_5(VAR_13, "EAP-IKEV2: Unknown INTEG "
       "transform / cannot generate ICV");
   return ((void*)0);
  }
  VAR_23 = VAR_24->hash_len;

  VAR_22 += VAR_23;
 }
 VAR_19 = FUNC_2(VAR_5, VAR_4, VAR_22,
        VAR_3, VAR_18);
 if (VAR_19 == ((void*)0))
  return ((void*)0);

 FUNC_13(VAR_19, VAR_20);
 if (VAR_20 & VAR_9)
  FUNC_11(VAR_19, FUNC_9(VAR_16->out_buf));

 FUNC_12(VAR_19, FUNC_8(VAR_16->out_buf) + VAR_16->out_used,
   VAR_21);
 VAR_16->out_used += VAR_21;

 if (VAR_20 & VAR_8) {
  const u8 *VAR_25 = FUNC_7(VAR_19);
  size_t VAR_26 = FUNC_9(VAR_19);
  FUNC_4(VAR_16->ikev2.proposal.integ,
     VAR_16->ikev2.keys.SK_ar,
     VAR_16->ikev2.keys.SK_integ_len,
     VAR_25, VAR_26, FUNC_10(VAR_19, VAR_23));
 }

 VAR_17->methodState = VAR_12;
 VAR_17->decision = VAR_1;

 if (VAR_16->out_used == FUNC_9(VAR_16->out_buf)) {
  FUNC_5(VAR_13, "EAP-IKEV2: Sending out %lu bytes "
      "(message sent completely)",
      (unsigned long) VAR_21);
  FUNC_6(VAR_16->out_buf);
  VAR_16->out_buf = ((void*)0);
  VAR_16->out_used = 0;
  switch (VAR_16->ikev2.state) {
  case 128:


   VAR_16->keys_ready = 1;
   break;
  case 130:
   VAR_17->methodState = VAR_11;
   if (VAR_16->state == VAR_6)
    break;
   VAR_17->decision = VAR_0;
   FUNC_5(VAR_13, "EAP-IKEV2: Authentication "
       "completed successfully");
   if (FUNC_0(VAR_16))
    break;
   FUNC_1(VAR_16, VAR_2);
   break;
  case 129:
   FUNC_5(VAR_13, "EAP-IKEV2: Authentication "
       "failed");
   VAR_17->methodState = VAR_11;
   VAR_17->decision = VAR_1;
   break;
  default:
   break;
  }
 } else {
  FUNC_5(VAR_13, "EAP-IKEV2: Sending out %lu bytes "
      "(%lu more to send)", (unsigned long) VAR_21,
      (unsigned long) FUNC_9(VAR_16->out_buf) -
      VAR_16->out_used);
  FUNC_1(VAR_16, VAR_15);
 }

 return VAR_19;
}
